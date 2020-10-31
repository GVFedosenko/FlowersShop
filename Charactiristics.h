#pragma once
#include <iostream>
using namespace std;

class Characteristics(){
public:
    int quantity;
    string colour;
    string stemLength;

    Characteristics() {}

    Characteristics(int quantity, string colour, string stemLength) {
        this->quantity = quantity;
        this->colour = colour;
        this->stemLength = stemLength;
    }
};