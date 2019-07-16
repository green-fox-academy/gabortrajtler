//
// Created by Gabor on 2019. 07. 16..
//

#ifndef MODEL_DEVICES_PRINTER3D_H
#define MODEL_DEVICES_PRINTER3D_H


#include <string>
#include "Printer.h"

class Printer3D : public Printer
{
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);

private:
    std::string getSize() override;

    int _sizeX;
    int _sizeY;
    int _sizeZ;
};


#endif //MODEL_DEVICES_PRINTER3D_H
