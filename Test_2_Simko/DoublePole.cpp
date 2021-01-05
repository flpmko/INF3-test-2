#include "DoublePole.h"

//operator priradenia
DoublePole& DoublePole::operator=(const DoublePole& zdroj)
{
    if (this != &zdroj)
    {
        DoublePole::~DoublePole();
        this->aData = zdroj.aData;
    }
    return *this;
}

//kopirovaci konstruktor
DoublePole::DoublePole(const DoublePole& zdroj)
{
    if (!this->aData)
    {
        this->aData = zdroj.aData;
    }
}

//destruktor
DoublePole::~DoublePole()
{
    for (int i = 0; i < 100; i++)
    {
        delete aData[i];
    }
    delete[] aData;
}
