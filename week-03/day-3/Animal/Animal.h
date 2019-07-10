#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

class Animal
{
public:
    Animal();

    int getHunger() const;
    int getThirst() const;
    void eat();
    void drink();
    void play();

private:
    int _hunger;
    int _thirst;
    void setThirst(int thirst);
    void setHunger(int hunger);
};


#endif //ANIMAL_ANIMAL_H
