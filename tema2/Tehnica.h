#pragma once
#include<string>
#include<ostream>
#include "Pictura.h"

class Tehnica:public Pictura {
    std::string material; // lemn/panza/sticla

public:
    void Evaluare() const  ;
};