#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student()
{
}

Student::Student(char* paMeno, char* paPriezvisko, float paPriemer)
{
	int dlzka1 = strlen(paMeno);
	aMeno = new char[dlzka1+1];
	strcpy(aMeno, paMeno);
	
	int dlzka2 = strlen(paPriezvisko);
	aPriezvisko = new char[dlzka2+1];
	strcpy(aPriezvisko, paPriezvisko);

	this->aPriemer = paPriemer;
}

Student::Student(const Student& zdroj)
{
	int dlzka1 = strlen(zdroj.aMeno);
	aMeno = new char[dlzka1+1];
	strcpy(aMeno, zdroj.aMeno);

	int dlzka2 = strlen(zdroj.aPriezvisko);
	aPriezvisko = new char[dlzka2+1];
	strcpy(aPriezvisko, zdroj.aPriezvisko);

	this->aPriemer = zdroj.aPriemer;
}

Student& Student::operator=(const Student& zdroj)
{
	if (this != &zdroj)
	{
		Student::~Student();

		int dlzka1 = strlen(zdroj.aMeno);
		aMeno = new char[dlzka1+1];
		strcpy(aMeno, zdroj.aMeno);

		int dlzka2 = strlen(zdroj.aPriezvisko);
		aPriezvisko = new char[dlzka2+1];
		strcpy(aPriezvisko, zdroj.aPriezvisko);

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
	delete[] aMeno;
	aMeno = nullptr;
	delete[] aPriezvisko;
	aPriezvisko = nullptr;
	aPriemer = 0.0;
}
