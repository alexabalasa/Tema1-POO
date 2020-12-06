#include<iostream>
#include "Dimensiune.h"
#include "Pictura.h"
void Dimensiune::Evaluare()  const {
    int cost = 0;
    if (latime < 50 && lungime < 70) {
        cost = cost + 50;
    } else if ((latime > 50 && latime < 100) && (lungime > 70 && lungime < 120)) {
        cost = cost + 100;
    } else if (latime > 100 && lungime > 120) {
        cost = cost + 150;
    } else {
        cost = cost + 30;
    }
    if (rama == "rotunda") {
        cost = cost + 1;
    } else if (rama == "patrata") {
        cost = cost + 2;

    }
}