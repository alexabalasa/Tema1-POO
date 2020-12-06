#include<iostream>
#include "Colectionar.h"
#include "Stil.h"
void Stil::Evaluare()  const {
    int cost = 0;
    if (stilColectionar == "old") {
        cost = cost + 50;

    }
    else if (stilColectionar == "abstract") {
        cost = cost + 100;
    }
    if(perioada<2000){
        cost=cost+5;
    }else if(perioada>2000){
        cost=cost+10;
    }
}
