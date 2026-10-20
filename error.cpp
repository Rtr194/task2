#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int number;
    cout << "Vvedite chislo: ";
    cin >> num; // ОШИБКА 1: переменная называется number
    cin.ignore();
    cout << "Vi vveli: " << num << "\n"; // ОШИБКА 1: снова num
    cin.get();
} // ОШИБКА 2: отсутствует return 0;