#pragma once
#include<string>
#include<ostream>

class Pictura {
protected:
    int latime;
    int lungime;
    int pret;
    std::string culoriFolosite;
    std::string tehnica;
    std::string stil;

public:
    Pictura(int, int, int, std::string, std::string, std::string);
    Pictura(Pictura&);
    virtual void Evaluare() const;
    int get_pret()const;
    std::string get_tehnica()const;
    std::string get_stil()const;
    friend std::ostream &operator<<(std::ostream &os, const Pictura &pictura);
    ~Pictura();

};

