#pragma once
class DoublePole
{
private:
    double** aData = nullptr;
    void vymaz();
public:
    DoublePole() : aData(new double* [100])
    {
        for (int i = 0; i < 100; i++)
        {
            aData[i] = new double(0.0);
        }
    }
    DoublePole& operator = (const DoublePole& zdroj);
    DoublePole(const DoublePole& parameter);
    ~DoublePole();
};