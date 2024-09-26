#include <iostream>

using namespace std;

void printStudentInfo()
{
    cout << "Studento vardas: Ilia\n";
    cout << "Studento studiju programa: Programu Sistemos\n";
    cout << "Studento argumentas: \"Pasirinkau Programu Sistemu studiju programa, nes noreciau tapti programuotoju.\"\n";
}

void printViko()
{
    cout << "Vilniaus kolegija\n";
}

void printEIF()
{
    cout << "Elektronikos ir informatikos fakultetas\n";
}

int main()
{
    cout << "Uzduotis 1:\n";
    printStudentInfo();
    printStudentInfo();

    cout << "\nUzduotis 2:\n";
    printViko();
    printEIF();

    return 0;
}
