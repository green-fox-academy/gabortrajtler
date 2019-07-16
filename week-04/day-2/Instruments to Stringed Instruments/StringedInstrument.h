//
// Created by Gabor on 2019. 07. 16..
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H


#include "Instrument.h"

class StringedInstrument : public Instrument
{
protected:
    int _numberOfStrings;
public:
    StringedInstrument(const std::string &name, int numberOfStrings);

private:
    virtual void sound() = 0;
};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
