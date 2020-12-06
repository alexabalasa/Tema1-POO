#include<iostream>
#include "Tehnica.h"
#include "Pictura.h"

    void Tehnica::Evaluare()  const {
        int cost = 0;
        if (tehnica == "culori ulei") {
            cost = cost + 200;
        } else if (tehnica == "culori acrilice") {
            cost = cost + 120;
        } else if (tehnica == "creion") {
            cost = cost + 50;
        }
        if (material == "panza") {
            cost = cost + 10;
        } else if (material == "lemn") {
            cost = cost + 5;
        } else if (material == "sticla") {
            cost = cost + 15;
        }


    }


