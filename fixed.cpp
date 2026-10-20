#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int number;
    cout << "Vvedite chislo: ";
    cin >> number; // ИСПРАВЛЕНО: используем number
    cin.ignore();
    cout << "Vi vveli: " << number << "\n"; // ИСПРАВЛЕНО: используем number
    cin.get();
    
    return 0; // ИСПРАВЛЕНО: добавлен возврат
}