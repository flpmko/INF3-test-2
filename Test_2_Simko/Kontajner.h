#pragma once
#include "Student.h"

class Kontajner
{private:
	Student* zoznam[10];
	int aPocetZapisanych;

public:
	Kontajner();
	void PridajStudenta(char* paNazovSuboru);
	void Vypis();
	void Zorad();
	void Vymen(Student& a, Student& b);
	~Kontajner();
};

