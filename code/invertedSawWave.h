/***** invertedSawWave.h *****/

#ifndef _INVERTEDSAWWAVE_H_
#define _INVERTEDSAWWAVE_H_
#include "oscillator.h"
#include <iostream>

class invertedSawWave : public Oscillator
{
public:

    invertedSawWave(double samplerate): invertedSawWave(samplerate, 0, 0) {};
    invertedSawWave(double samplerate, double frequency) :
    invertedSawWave(samplerate, frequency, 0) {};
    invertedSawWave(double samplerate, double frequency, double phase):
    Oscillator (samplerate, frequency, phase) {};
    ~invertedSawWave(){};
    invertedSawWave() = delete;

    void calculate() override;


};


inline void invertedSawWave::calculate()
{
    sample = phase *-1 + 1;
}


#endif
