//
// Created by Gabor on 2019. 07. 10..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

/*
 * Create Counter class
    which has an integer field value
    when creating it should have a default value 0 or we can specify it when creating
    we can add(number) to this counter another whole number
    or we can add() without parameters just increasing the counter's value by one
    and we can get() the current value
    also we can reset() the value to the initial value
    Check if everything is working fine with the proper test
    Download main.cpp and use that instead of the default
    Without modifying anything in it, compile and run.
    Check the console output whether any of the tests failed.
 */

class Counter
{
public:
    Counter();
    Counter(int counter);

    int getCounter() const;

    void add(int number);
    void add();
    int get();
    void reset();

private:
    int _counter;
    int initCount = 0;
    void setCounter(int counter);
};


#endif //COUNTER_COUNTER_H
