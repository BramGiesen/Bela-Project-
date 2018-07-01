/***** noiseGenerator.h *****/
#ifndef _H_RANDOMGEN_
#define _H_RANDOMGEN_

#include <cstdlib>

class RandomGenerator : public Oscillator
{
public:
    RandomGenerator(double samplerate): RandomGenerator(samplerate, 0, 0) {};
    RandomGenerator(double samplerate, double frequency) :
    RandomGenerator(samplerate, frequency, 0) {};
    RandomGenerator(double samplerate, double frequency, double phase):
    Oscillator (samplerate, frequency, phase) {};
    ~RandomGenerator(){};
    RandomGenerator() = delete;

    void calculate() override;

private:
    bool notSet=true;
    int randomValue = 0;


};


inline void RandomGenerator::calculate()
{
    if(phase > 0.9 && notSet){
        randomValue = rand() % 100;
    }
    sample = randomValue;
}

#endif // _H_RANDOMGEN_
