//
// Created by Gabor on 2019. 07. 16..
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument
{
public:
    BassGuitar(int numberOfStrings);
    BassGuitar();
    void play() override;

private:
    void sound() override;

};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
