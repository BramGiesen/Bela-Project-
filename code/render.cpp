/*
 ____  _____ _        _
| __ )| ____| |      / \
|  _ \|  _| | |     / _ \
| |_) | |___| |___ / ___ \
|____/|_____|_____/_/   \_\

The platform for ultra-low latency audio and sensor processing

http://bela.io

A project of the Augmented Instruments Laboratory within the
Centre for Digital Music at Queen Mary University of London.
http://www.eecs.qmul.ac.uk/~andrewm

(c) 2016 Augmented Instruments Laboratory: Andrew McPherson,
  Astrid Bin, Liam Donovan, Christian Heinrichs, Robert Jack,
  Giulio Moro, Laurel Pardue, Victor Zappi. All rights reserved.

The Bela software is distributed under the GNU Lesser General Public License
(LGPL 3.0), available here: https://www.gnu.org/licenses/lgpl-3.0.txt
*/


#include <Bela.h>
#include <cmath>
#include <Scope.h>

#include "sineWave.h"
#include "sawWave.h"
#include "invertedSawWave.h"
#include "squareWave.h"
#include "noiseOscillator.h"


int gAudioFramesPerAnalogFrame = 0;
float sampleRate;

SineWave ringSine(44100, 0, 0);
RandomGenerator ringLFO(44100, 0, 0);

float gAmplitude;
float gModDepth;
float gFrequency1;
float gAmplitude2;
float gFrequency2;


float gIn1;
float gIn2;
float gIn3;
float gIn4;
float gIn5;
float gIn6;

float out = 0.f;

int gInputPin = 1; // digital pin 1 - check the pin diagram in the IDE
int gInputPin1 = 0;

template<typename T>
T change(T current)
{
  static int previous = 0;

  if(current != previous)
  {
    previous =  current;
    return current;
  }
  return 0;
}



bool setup(BelaContext *context, void *userData)
{
	pinMode(context, 0, gInputPin, INPUT);
	pinMode(context, 0, gInputPin1, INPUT);
	// setup the scope with 3 channels at the audio sample rate
	scope.setup(3, context->audioSampleRate);

	if(context->analogSampleRate > context->audioSampleRate)
	{
		fprintf(stderr, "Error: for this project the sampling rate of the analog inputs has to be <= the audio sample rate\n");
		return false;
	}
	if(context->analogInChannels < 2)
	{
		fprintf(stderr, "Error: for this project you need at least two analog inputs\n");
		return false;
	}

	if(context->analogFrames)
		gAudioFramesPerAnalogFrame = context->audioFrames / context->analogFrames;


	sampleRate =  44100;


	return true;
}

void render(BelaContext *context, void *userData)
{

	for(unsigned int n = 0; n < context->audioFrames; n++) {

		if(gAudioFramesPerAnalogFrame && !(n % gAudioFramesPerAnalogFrame)) {
			// read analog inputs and update frequency and amplitude
			gIn1 = analogRead(context, n/gAudioFramesPerAnalogFrame, 0);
			gIn2 = analogRead(context, n/gAudioFramesPerAnalogFrame, 1);
			gIn3 = analogRead(context, n/gAudioFramesPerAnalogFrame, 2);
			gIn4 = analogRead(context, n/gAudioFramesPerAnalogFrame, 3);
			gIn5 = analogRead(context, n/gAudioFramesPerAnalogFrame, 4);
			gIn6 = analogRead(context, n/gAudioFramesPerAnalogFrame, 5);


			gFrequency1 = map(gIn1, 0, 1, 100, 1000);
			gFrequency2 = map(gIn2, 0, 1, 0, 500);
			gModDepth = map(gIn3, 0, 1, 0, 100);
			gAmplitude = gIn6 * 0.8f;
		}


		if( change<float>(gFrequency2) > 0 )
	    	ringLFO.setFrequency(gFrequency2);


		ringSine.setFrequency(gFrequency1 + (ringLFO.getSample() * gModDepth));

		ringSine.tick();
		ringLFO.tick();


		// pass the sine wave to the audio outputs
		for(unsigned int channel = 0; channel < context->audioOutChannels; channel++) {

            //check status of button, if button is 1 apply effect
            int status =digitalRead(context, 0, gInputPin);

			float drySignal = audioRead(context, n, channel);
			float ringModSignal = ringSine.getSample() * audioRead(context, n, channel) * gAmplitude + (drySignal* (gAmplitude * -1 + 1));

			 if (status == 1){
			audioWrite(context, n, channel,  ringModSignal);
            } else {
            	audioWrite(context, n, channel, drySignal);
            }

		}
	}
}

void cleanup(BelaContext *context, void *userData)
{

}
