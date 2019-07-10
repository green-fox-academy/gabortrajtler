//
// Created by Gabor on 2019. 07. 10..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <string>

class Sharpie
{
public:
    Sharpie(const std::string &color, float width);

    const std::string &getColor() const;
    float getWidth() const;
    float getInkAmount() const;
    void use();

private:
    std::string _color;
    float _width;
    float _inkAmount;
    void setColor(const std::string &color);
    void setWidth(float width);
    void setInkAmount(float inkAmount);
};


#endif //SHARPIE_SHARPIE_H
