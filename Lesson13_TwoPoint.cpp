#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
//#include <string.h>
using namespace std;

int main(int argc, char* argv[])
{

    // динамическое создание двумерного массива вещественных чисел
    int sizeZ = 2;
    int sizeY = 6;
    int sizeX = 9;
    int num = 0; // для заполнения динамического массива
    int num2 = 0; // для заполнения динамического массива
    // заполнение массива
    cout << "=====================================================================" << endl;
    int** dynMatrix = new int* [sizeY];
    for (int** matrixPtr = dynMatrix; matrixPtr < dynMatrix + sizeY; ++matrixPtr)
    {
        *matrixPtr = new int[sizeX];
        for (int* linePtr = *matrixPtr; linePtr < *matrixPtr + sizeX; ++linePtr)
        {
            *linePtr = ++num;
        }

    }
    // вывод массива
    cout << "=====================================================================" << endl;
    for (int** matrixPtr = dynMatrix; matrixPtr < dynMatrix + sizeY; ++matrixPtr)
    {
        for (int* linePtr = *matrixPtr; linePtr < *matrixPtr + sizeX; ++linePtr)
        {
            cout << setw(4) << setprecision(2) << *linePtr << "   ";
        }
        cout << endl;
    }


    cout << "=====================================================================" << endl;
    int** dynMatrix2 = new int* [sizeY];
    for (int** matrixPtr2 = dynMatrix2; matrixPtr2 < dynMatrix2 + sizeY; ++matrixPtr2)
    {
        *matrixPtr2 = new int[sizeX];
        for (int* linePtr2 = *matrixPtr2; linePtr2 < *matrixPtr2 + sizeX; ++linePtr2)
        {
            *linePtr2 = ++num2+100;
        }

    }
    // вывод массива
    cout << "=====================================================================" << endl;
    for (int** matrixPtr2 = dynMatrix2; matrixPtr2 < dynMatrix2 + sizeY; ++matrixPtr2)
    {
        for (int* linePtr2 = *matrixPtr2; linePtr2 < *matrixPtr2 + sizeX; ++linePtr2)
        {
            cout << setw(4) << setprecision(2) << *linePtr2 << "   ";
        }
        cout << endl;
    }

    cout << "=====================================================================" << endl;
    for (int** matrixPtr2 = dynMatrix2, **matrixPtr = dynMatrix; matrixPtr2 < dynMatrix2 + sizeY, matrixPtr < dynMatrix + sizeY; ++matrixPtr2, ++matrixPtr)
    {
        for (int* linePtr2 = *matrixPtr2, *linePtr = *matrixPtr; linePtr2 < *matrixPtr2 + sizeX, linePtr < *matrixPtr + sizeX; ++linePtr2, ++linePtr)
        {
            (*linePtr2) = (*linePtr);
        }
        
    }
    cout << "=====================================================================" << endl;


    cout << "=====================================================================" << endl;

    // вывод массива
    cout << "=====================================================================" << endl;
    for (int** matrixPtr2 = dynMatrix2; matrixPtr2 < dynMatrix2 + sizeY; ++matrixPtr2)
    {
        for (int* linePtr2 = *matrixPtr2; linePtr2 < *matrixPtr2 + sizeX; ++linePtr2)
        {
            cout << setw(4) << setprecision(2) << *linePtr2 << "   ";
        }
        cout << endl;
    }



    cout << "=====================================================================" << endl;


    // удаление двумерного динамического массива
    for (int** matrixPtr = dynMatrix; matrixPtr < dynMatrix + sizeY; ++matrixPtr)
    {
        delete[] * matrixPtr;
    }
    delete[] dynMatrix;


    cout << "=====================================================================" << endl;

    cout << "DEL:1 array" << endl;

    // удаление двумерного динамического массива
    for (int** matrixPtr2 = dynMatrix2; matrixPtr2 < dynMatrix2 + sizeY; ++matrixPtr2)
    {
        delete[] * matrixPtr2;
    }
    delete[] dynMatrix2;
    
    cout << "DEL:2 array" << endl;
    

    system("pause"); // для Visual Studio
    return 0;
}
