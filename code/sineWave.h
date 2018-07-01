/***** sineWave.h *****/
#ifndef _SINEWAVE_H_
#define _SINEWAVE_H_
#include "oscillator.h"

class SineWave : public Oscillator
{
public:

    SineWave(double samplerate): SineWave(samplerate, 0, 0) {};
    SineWave(double samplerate, double frequency) :
    SineWave(samplerate, frequency, 0) {};
    SineWave(double samplerate, double frequency, double phase):
    Oscillator (samplerate, frequency, phase) {};
    ~SineWave(){};
    SineWave() = delete;

    void calculate() override;


};


inline void SineWave::calculate()
{

    sample = sin(phase * PI_2 );
}


#endif
