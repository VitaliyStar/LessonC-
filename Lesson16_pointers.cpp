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




int main(int argc, char* argv[])
{
    for (int i = 0; ; ++i)
    {



        // Завдання 1:
        cout << "Program 1." << endl;

        char s = 0;

        int var = 123; // инициализация переменной var числом 123
        int* ptrvar = &var; // указатель на переменную var
        int** ptr_ptrvar = &ptrvar; // указатель на указатель на переменную var
        int*** ptr_ptr_ptrvar = &ptr_ptrvar;

        cout << " var\t\t= " << var << endl;
        cout << " &var\t\t= " << &var << endl;
        cout << "------------------------------------------------------\n";
        cout << " *ptrvar\t= " << *ptrvar << endl;
        cout << " ptrvar\t\t= " << ptrvar << endl;
        cout << " &ptrvar\t= " << &ptrvar << endl;
        cout << "------------------------------------------------------\n";
        cout << " **ptr_ptrvar\t= " << **ptr_ptrvar << endl;
        cout << " ptr_ptrvar\t= " << ptr_ptrvar << endl;
        cout << " &ptr_ptrvar\t= " << &ptr_ptrvar << endl;
        cout << "------------------------------------------------------\n";
        cout << " ***ptr_ptr_ptrvar= " << ***ptr_ptr_ptrvar << endl;
        cout << " ptr_ptr_ptrvar\t= " << ptr_ptr_ptrvar << endl;
        cout << " &ptr_ptr_ptrvar= " << &ptr_ptr_ptrvar << endl;
        cout << "------------------------------------------------------\n";
        cout << "------------------------------------------------------\n";
        cout << " var\t\t= " << var << endl;
        cout << " *ptrvar\t= " << *ptrvar << endl;
        cout << " **ptr_ptrvar   = " << **ptr_ptrvar << endl; // два раза разименовываем указатель, так как он второго порядка
        cout << " ***ptr_ptrvar  = " << ***ptr_ptr_ptrvar << endl; // указатель третьего порядка
        cout << "------------------------------------------------------\n";
        cout << " ptrvar\t= " << ptrvar << endl;
        cout << " ptr_ptrvar   = " << ptr_ptrvar << endl; // два раза разименовываем указатель, так как он второго порядка
        cout << " ptr_ptr_ptrvar  = " << ptr_ptr_ptrvar << endl; // указатель третьего порядка

        cout << "\n ***ptr_ptr_ptrvar -> **ptr_ptrvar -> *ptrvar    ->      var   -> " << var << endl;
        cout << "\t" << &ptr_ptr_ptrvar << " -> " << "  " << &ptr_ptrvar << " -> " << &ptrvar << " -> " << &var << " -> " << var << endl;

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
