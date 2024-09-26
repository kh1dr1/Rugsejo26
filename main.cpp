#include <iostream>
#include <cstdlib>

using namespace std;

// 1-as uzduotis
void student()
{
    cout << "Studento vardas: Ilia\n";
    cout << "Studento studiju programa: Programu Sistemos\n";
    cout << "Studento argumentas: \"Pasirinkau Programu Sistemu studiju programa, nes noreciau tapti programuotoju.\"\n";
}

// 2-as uzduotis
void viko()
{
    cout << "Vilniaus kolegija\n";
}

void eif()
{
    cout << "Elektronikos ir informatikos fakultetas\n";
}

// 3-as uzduotis
int random_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

// 4-as uzduotis
int getDigit()
{
    int digit = 0;
    while (true)
    {
        cout << "Iveskite viena skaitmeni (0-9):";
        cin >> digit;

        if (digit >= 0 && digit <= 9)
            return digit;

        cout << "Klaidingas pasirinkimas. Bandykite is naujo.\n";
    }
}

int digit_sum(int digit_1, int digit_2)
{
    return digit_1 + digit_2;
}

int digit_diff(int digit_1, int digit_2)
{
    return digit_1 - digit_2;
}

int digit_mul(int digit_1, int digit_2)
{
    return digit_1 * digit_2;
}

float digit_div(int digit_1, int digit_2)
{
    return static_cast<float>(digit_1) / static_cast<float>(digit_2);
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
        cout << "Atsitiktinis skaicius #" << i + 1 << " yra: " << random_number(0, 20) << '\n';
    }

    cout << "\nUzduotis 4:\n";
    int d1 = getDigit();
    int d2 = getDigit();
    cout << "Skaitmenu suma: " << digit_sum(d1, d2) << '\n';
    cout << "Skaitmenu skirtumas: " << digit_diff(d1, d2) << '\n';
    cout << "Skaitmenu sandauga: " << digit_mul(d1, d2) << '\n';
    cout << "Skaitmenu dalmuo: " << digit_div(d1, d2) << '\n';

    return 0;
}
