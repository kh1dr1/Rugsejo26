#include <iostream>
#include <cstdlib>

using namespace std;

void student()
{
    cout << "Studento vardas: Ilia\n";
    cout << "Studento studiju programa: Programu Sistemos\n";
    cout << "Studento argumentas: \"Pasirinkau Programu Sistemu studiju programa, nes noreciau tapti programuotoju.\"\n";
}

void viko()
{
    cout << "Vilniaus kolegija\n";
}

void eif()
{
    cout << "Elektronikos ir informatikos fakultetas\n";
}

int random_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    cout << "Uzduotis 1:\n";
    student();
    student();

    cout << "\nUzduotis 2:\n";
    viko();
    eif();

    cout << "\nUzduotis 3:\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << "Atsitiktinis skaicius #" << i + 1 << " yra: " << random_number(10, 20) << '\n';
    }

    return 0;
}
