#include<iostream>
#include "Pictura.h"
Pictura::Pictura(int latime , int lungime = 0, int pret = 0, std::string culoriFolosite = " ", std::string tehnica = " ", std::string stil = " ") {
    this->latime = latime;
    this->lungime = lungime;
    this->pret = pret;
    this->culoriFolosite = culoriFolosite;
    this->tehnica = tehnica;
    this->stil = stil;
}
Pictura::Pictura(Pictura& pictura)
{
    this->latime = pictura.latime;
    this->lungime = pictura.lungime;
    this->pret = pictura.pret;
    this->culoriFolosite = pictura.culoriFolosite;
    this->tehnica = pictura.tehnica;
    this->stil = pictura.stil;
}


int Pictura::get_pret()const{return pret;};
std::string Pictura::get_tehnica()const{return tehnica;};
std::string Pictura::get_stil()const{return stil;};

std::ostream &operator<<(std::ostream &os, const Pictura &pictura) {
    os << "latime: " <<std::endl;
    os<< pictura.latime <<std::endl;
    os<<" lungime: " <<std::endl;
    os<< pictura.lungime<<std::endl;
    os<< " pret: " <<std::endl;
    os<<pictura.pret<<std::endl;
    os<<" culoriFolosite: "<<std::endl;
    os<< pictura.culoriFolosite <<std::endl;
    os<<" tehnica: " <<std::endl;
    os<<pictura.tehnica <<std::endl;
    os<<" stil: " <<std::endl;
    os<<pictura.stil<<std::endl;
    return os;
}

void Pictura::Evaluare() const {
    std::cout << "Costul de realizare al unui tablou variaza in functie de urmatoarele:dimensiune, tehnica si stil" << std::endl;
    int cost = 0;
    /// <summary>
    /// ///////in functie de dimensiune
    /// </summary>
    if (latime < 50 && lungime <70 ) {
        cost = cost + 50;
    }
    else if ((latime > 50 && latime < 100) && (lungime > 70 && lungime < 120)) {
        cost=cost+100;
    }
    else if (latime > 100 && lungime > 120) {
        cost=cost+150;
    }
    else {
        cost = cost + 30;
    }
    /////////in functie de tehnica
    if (tehnica == "culori ulei") {
        cost=cost+200;
    }
    else if (tehnica == "culori acrilice") {
        cost = cost + 120;
    }
    else if (tehnica == "creion") {
        cost = cost + 50;
    }
    ///////in functie stil
    if (stil == "old") {
        cost = cost + 50;

    }
    else if (stil == "abstract") {
        cost = cost + 100;
    }
    std::cout << "Costul estimativ este: " << cost << std::endl;

}
Pictura& Pictura::operator=(const Pictura& p1){
    latime = p1.latime;
    lungime = p1.lungime;
    pret = p1.pret;
    culoriFolosite = p1.culoriFolosite;
    tehnica = p1.tehnica;
    stil = p1.stil;
}

Pictura::~Pictura() {
    std::cout << " ~~~~~~~~~~~~ " << std::endl;
}


