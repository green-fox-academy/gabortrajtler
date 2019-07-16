//
// Created by Gabor on 2019. 07. 16..
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H


#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument
{
public:
    ElectricGuitar(int numberOfStrings);
    ElectricGuitar();
    void play() override;

private:
    void sound() override;



};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
