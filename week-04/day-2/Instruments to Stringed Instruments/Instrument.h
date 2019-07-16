//
// Created by Gabor on 2019. 07. 16..
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H


#include <string>

class Instrument
{
protected:
    std::string _name;
public:
    Instrument(const std::string &name);

private:
    virtual void play() = 0;
};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H
