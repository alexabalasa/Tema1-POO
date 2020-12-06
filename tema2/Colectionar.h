#pragma once
#include<iostream>
#include "Pictura.h"
class Colectionar{
protected:
    std::string nume;
    int buget;
    std::string tehnicaPreferata;
    std::string stilColectionar;
public:
    Colectionar(std::string, int, std::string, std::string);
    void compatibilitate(Pictura&) const;

};
