#pragma once
#include<string>
#include<ostream>
#include "Pictura.h"

class Dimensiune:public Pictura{
    std::string rama;
public:
    void Evaluare() const  ;
};