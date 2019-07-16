//
// Created by Gabor on 2019. 07. 16..
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:
    Violin(int numberOfStrings);
    Violin();
    void play() override;

private:
    void sound() override;

};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_VIOLIN_H
