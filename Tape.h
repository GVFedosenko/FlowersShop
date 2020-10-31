#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tape() {
public:
    string colour;
    int length;

    Tape() {}
    Tape(string colour, int length){
        this->colour=colour;
        this->length=length;
    }
};