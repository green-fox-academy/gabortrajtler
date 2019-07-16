//
// Created by Gabor on 2019. 07. 16..
//

#ifndef MODEL_DEVICES_PRINTER2D_H
#define MODEL_DEVICES_PRINTER2D_H


#include <string>
#include "Printer.h"

class Printer2D : public Printer
{
public:
    Printer2D(int sizeX, int sizeY);

private:
    std::string getSize() override;

    int _sizeX;
    int _sizeY;
};


#endif //MODEL_DEVICES_PRINTER2D_H
