#include<iostream>
#include "Pictura.h"
#include "Colectionar.h"
int main() {
    Pictura p(20, 80, 200, "rosu, verde, albastru", "culori ulei", "old");
    p.Evaluare();
    Colectionar col("Paul", 500, "culori ulei", "old" );
    col.compatibilitate(p);

}