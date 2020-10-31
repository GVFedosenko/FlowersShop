#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Flower(){
public:
    string name;

    Flower(){}
    Flower(string name) {
        this->name=name;
    }
};