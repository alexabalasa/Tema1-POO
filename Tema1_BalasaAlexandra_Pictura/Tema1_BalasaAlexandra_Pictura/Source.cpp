#include<iostream>
#include<string>
using namespace std;
/// am ales clasa numita pictura
class Pictura {
	int latime;
	int lungime;
	int pret;
	string culoriFolosite;
	string tehnica;
	string stil;

public:
	Pictura(int, int, int, string, string, string);
	Pictura(Pictura&);
	~Pictura();
	void Evaluare() const;
};

////////////////////////////
Pictura::Pictura(int latime = 0, int lungime = 0, int pret = 0, string culoriFolosite = " ", string tehnica = " ", string stil = " ") {
	this->latime = latime;
	this->lungime = lungime;
	this->pret = pret;
	this->culoriFolosite = culoriFolosite;
	this->tehnica = tehnica;
	this->stil = stil;
	cout << "latimea tabloului: " << this->latime << endl;;
	cout << "lungimea tabloului: " << this->lungime << endl;;
	cout << "pretul tabloului: " << this->pret << endl;
	cout << "culorile folosite pentru realizarea tabloului: " << this->culoriFolosite << endl;
	cout << "tehnica folosita: " << this->tehnica << endl;
	cout << "stilul folosit: " << this->stil << endl;

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

Pictura::~Pictura() {
	cout << " ~~~~~~~~~~~~ " << endl;
}

void Pictura::Evaluare() const {
	cout << "Costul de realizare al unui tablou variaza in functie de urmatoarele:dimensiune, tehnica si stil" << endl;
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
	if (stil == "modernist") {
		cost = cost + 50;

	}
	else if (stil == "abstract") {
		cost = cost + 100;
	}
	cout << "Costul estimativ este: " << cost << endl;
	
}

int main() {
	Pictura p(20, 80, 200, "rosu, verde, albastru", "culori ulei", "modernist");
	p.Evaluare();

}
