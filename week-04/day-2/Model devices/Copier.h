//
// Created by Gabor on 2019. 07. 16..
//

#ifndef MODEL_DEVICES_COPIER_H
#define MODEL_DEVICES_COPIER_H


#include "Printer2D.h"
#include "Scanner.h"

class Copier : public Printer2D, public Scanner
{
public:
    Copier(int sizeX, int sizeY, int speed);
    void copy();
};


#endif //MODEL_DEVICES_COPIER_H
