#pragma once
#include <string>

using namespace std;

class Student
{
private:
	char* aMeno = nullptr;
	char* aPriezvisko = nullptr;
	float aPriemer = 0.0;
public:
	Student();
	Student(char* paMeno, char* paPriezvisko, float paPriemer);
	Student(const Student& zdroj);
	Student& operator = (const Student& zdroj);
	void Vypis();
	float getPriemer();
	~Student();
};

