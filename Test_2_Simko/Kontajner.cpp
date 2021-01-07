#include "Kontajner.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Kontajner::Kontajner()
{
	this->aPocetZapisanych = 0;
	for (int i = 0; i < 10; i++)
	{
		this->zoznam[i] = new Student();
	}
}

void Kontajner::PridajStudenta(char* paNazovSuboru)
{
	ifstream input;
	input.open(paNazovSuboru);
	if (input.is_open())
	{
		string meno;
		string priezvisko;
		float priemer = 0;

		int i = 0;
		string text;

		while (!input.eof())
		{
			input >> text;
			switch (i)
			{
			case 0:
				priezvisko = text;
				break;
			case 1:
				meno = text;
				break;
			case 2:
				priemer = stof(text);
				this->zoznam[this->aPocetZapisanych++] = new Student((char*)meno.c_str(), (char*)priezvisko.c_str(), priemer);
				i = -1;
				break;
			}
			i++;
		}
	}
	input.close();
}

void Kontajner::Vypis()
{
	for (int i = 0; i < 10; i++)
	{
		this->zoznam[i]->Vypis();
	}
}

void Kontajner::Zorad()
{
	for (int i = 0; i < aPocetZapisanych - 1; i++)
	{
		for (int j = 0; j < aPocetZapisanych - i - 1; j++)
		{
			if (this->zoznam[j]->getPriemer() > this->zoznam[j + 1]->getPriemer())
			{
				Vymen(*this->zoznam[j], *this->zoznam[j + 1]);
			}
		}
	}
}

void Kontajner::Vymen(Student& a, Student& b)
{
	Student c = a;
	a = b;
	b = c;
}

Kontajner::~Kontajner()
{
	/*for (int i = 0; i < aPocetZapisanych; i++)
	{
		delete this->zoznam[i];
	}
	delete[] zoznam;*/
}
