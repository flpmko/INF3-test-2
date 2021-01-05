#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
}

Student::Student(char* paMeno, char* paPriezvisko, float paPriemer)
{
	this->aMeno = paMeno;
	this->aPriezvisko = paPriezvisko;
	this->aPriemer = paPriemer;
}

Student::Student(const Student& zdroj)
{
	this->aMeno = zdroj.aMeno;
	this->aPriezvisko = zdroj.aPriezvisko;
	this->aPriemer = zdroj.aPriemer;
}

Student& Student::operator=(const Student& zdroj)
{
	if (this != &zdroj)
	{
		this->aMeno = zdroj.aMeno;
		this->aPriezvisko = zdroj.aPriezvisko;
		this->aPriemer = zdroj.aPriemer;
	}
	return *this;
}

void Student::Vypis()
{
	cout << this->aPriemer << " " << this->aPriezvisko << " " << this->aMeno << endl;
 }

float Student::getPriemer()
{
	return this->aPriemer;
}

Student::~Student()
{
	/*delete[] aMeno;
	aMeno = nullptr;
	delete[] aPriezvisko;
	aPriezvisko = nullptr;
	aPriemer = 0.0;*/
}
