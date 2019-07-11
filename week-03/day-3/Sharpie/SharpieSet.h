//
// Created by Gabor on 2019. 07. 11..
//

#ifndef SHARPIE_SHARPIESET_H
#define SHARPIE_SHARPIESET_H


#include <vector>
#include "Sharpie.h"

class SharpieSet
{
public:
    std::vector<Sharpie*> _sharpies;
    int countUsable();
    void removeTrash();

};


#endif //SHARPIE_SHARPIESET_H
