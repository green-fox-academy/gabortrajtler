//
// Created by Gabor on 2019. 07. 16..
//

#ifndef MODEL_DEVICES_PRINTER_H
#define MODEL_DEVICES_PRINTER_H


class Printer
{
    virtual std::string getSize() = 0;

public:
    void print();
};


#endif //MODEL_DEVICES_PRINTER_H
