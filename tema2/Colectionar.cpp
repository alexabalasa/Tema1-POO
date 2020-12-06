#include "Colectionar.h"
Colectionar::Colectionar ( std::string nume, int buget=0, std::string tehnicaPreferata=" ", std::string stilColectionar=" "){
    this->nume=nume;
    this->buget=buget;
    this->tehnicaPreferata=tehnicaPreferata;
    this->stilColectionar=stilColectionar;

}

void Colectionar::compatibilitate(Pictura &pic)const{
    if(pic.get_pret()<=buget && pic.get_tehnica()==tehnicaPreferata && pic.get_stil()==stilColectionar){
        std::cout<<"Tabloul se potriveste perfect colectionarului"<<std::endl;
    }else{
        std::cout<<"Tabloul nu este intocmai potrivit colectionarului"<<std::endl;
    }
}

