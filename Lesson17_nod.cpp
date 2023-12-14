#include  <iostream>
#include  <math.h>
#include  <cstdlib>
#include  <stdio.h>
#include  <cstdio>
//#include  <unistd.h> // for use sleep();
#include  <string>
#include  <algorithm>
#include  <iomanip>
#include  <cmath>


//#include  <conio.h> //for linux no work
using namespace std;

int nod(int number1, int number2) // рекурсивная функция нахождения наибольшего общего делителя НОД
{
    if (number2 == 0) //базовое решение
        return number1;
    return nod(number2, number1 % number2); // рекурсивное решение НОД
}


int main(int argc, char* argv[])
{
    for (int i = 0; ; ++i)
    {



        // Завдання 1:
        cout << "Program 1." << endl;

        char s = 0;

        int (*ptrnod)(int, int); // объявление указателя на функцию
        ptrnod = nod; // присваиваем адрес функции указателю ptrnod
        int a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "NOD = " << ptrnod(a, b) << endl; // обращаемся к функции через указатель

        cout << endl;
        cout << "------------------------------------------------------\n";
        cout << "Enter symbol Q to exit, to continue press 0: ";
        cin >> s;
        if (s == 'q')
        {
            cout << "Exit!" << endl;
            break;
        }
    }
    cout << endl;
    return 0;
}
