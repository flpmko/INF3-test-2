#include "DoublePole.h"

//operator priradenia
DoublePole& DoublePole::operator=(const DoublePole& zdroj)
{
    if (this != &zdroj)
    {
        DoublePole::~DoublePole();
        aData = new double* [100];
        for (int i = 0; i < 100; i++)
        {
            aData[i] = new double(*zdroj.aData[i]);
        }
    }
    return *this;
}

//kopirovaci konstruktor
DoublePole::DoublePole(const DoublePole& zdroj)
{
    aData = new double* [100];
    for (int i = 0; i < 100; i++)
    {
        aData[i] = new double(*zdroj.aData[i]);
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
