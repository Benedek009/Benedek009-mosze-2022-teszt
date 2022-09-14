#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; //hibas nev
    std::cout << "1-100 ertekek duplazasa"; //nincs idezojel es pontosvesszo 
    for (int i = 0; i < N_ELEMENTS; i++) //hianyos for ciklus
    {
        b[i] = (i + 1) * 2;
    }
    std::cout << "Ertek: " << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++) //hianyos ciklus
    {
        std::cout << b[i] << ", "; //nincs pontosvesszo
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; //nincs pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << std::string("END") << std::endl;
    return 0;
}
