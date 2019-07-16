//
// Created by Gabor on 2019. 07. 16..
//

#ifndef MODEL_DEVICES_SCANNER_H
#define MODEL_DEVICES_SCANNER_H


class Scanner
{
public:
    Scanner(int speed);
    void scan();

private:
    int _speed;
};


#endif //MODEL_DEVICES_SCANNER_H
