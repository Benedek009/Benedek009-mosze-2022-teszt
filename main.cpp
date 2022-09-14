#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; //hibas nev
    std::cout << '1-100 ertekek duplazasa' //nincs idezojel es pontosvesszo 
        for (int i = 0;) //hianyos for ciklus
        {
            b[i] = i * 2;
        }
    for (int i = 0; i; i++) //hianyos ciklus
    {
        std::cout << "Ertek:" //nincs pontosvesszo
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //nincs pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
