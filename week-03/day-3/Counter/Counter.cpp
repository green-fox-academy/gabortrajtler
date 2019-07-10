//
// Created by Gabor on 2019. 07. 10..
//

#include "Counter.h"

Counter::Counter()
{
    setCounter(initCount);
}

Counter::Counter(int counter) : _counter(counter)
{
    initCount = counter;
}

int Counter::getCounter() const
{
    return _counter;
}

void Counter::setCounter(int counter)
{
    _counter = counter;
}

void Counter::add(int number)
{
    _counter += number;
}

void Counter::add()
{
    _counter++;
}

int Counter::get()
{
    return _counter;
}

void Counter::reset()
{
    _counter = initCount;
}

