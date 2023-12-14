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
	int** dynMatrix = new int*[sizeY];
	for (int **matrixPtr = dynMatrix; matrixPtr < dynMatrix + sizeY; ++matrixPtr)
	{
		*matrixPtr = new int[sizeX];
		for (int *linePtr = *matrixPtr; linePtr < *matrixPtr + sizeX; ++linePtr)
		{
			*linePtr = ++num;
		}

	}
    // вывод массива
	cout << "=====================================================================" << endl;
    for (int **matrixPtr = dynMatrix; matrixPtr < dynMatrix + sizeY; ++matrixPtr)
	{
		for (int *linePtr = *matrixPtr; linePtr < *matrixPtr + sizeX; ++linePtr)
		{
			cout << setw(4) << setprecision(2) << *linePtr << "   " ;
		}
		cout << endl;
	}
    // заполнение массива
	cout << "=====================================================================" << endl;
    int*** dynMatrix3 = new int**[sizeZ];
	for (int ***matrixPtr3 = dynMatrix3; matrixPtr3 < dynMatrix3 + sizeZ; ++matrixPtr3)
	{
        *matrixPtr3 = new int*[sizeY];
        for (int **tomatrixPtr = *matrixPtr3; tomatrixPtr < *matrixPtr3 + sizeY; ++tomatrixPtr)
        {
            *tomatrixPtr = new int[sizeX];
            for (int *linePtr = *tomatrixPtr; linePtr < *tomatrixPtr + sizeX; ++linePtr)
            {
                *linePtr = ++num2; // індексація тривимірного масиву
            }
        }
    }
    // вывод массива
	cout << "=====================================================================" << endl;
	for (int ***matrixPtr3 = dynMatrix3; matrixPtr3 < dynMatrix3 + sizeZ; ++matrixPtr3)
	{
        for (int **tomatrixPtr = *matrixPtr3; tomatrixPtr < *matrixPtr3 + sizeY; ++tomatrixPtr)
        {
            for (int *linePtr = *tomatrixPtr; linePtr < *tomatrixPtr + sizeX; ++linePtr)
            {
                cout << setw(4) << setprecision(2) << *linePtr << "   " ;
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "=====================================================================" << endl;
    // удаление двумерного динамического массива
	for (int** matrixPtr = dynMatrix; matrixPtr < dynMatrix + sizeY; ++matrixPtr)
    {
        delete[] *matrixPtr;
    }
    delete[] dynMatrix;
    cout << "DEL:1 array" << endl;
    // удаление трьохмерного динамического массива
    for (int ***matrixPtr3 = dynMatrix3; matrixPtr3 < dynMatrix3 + sizeZ; ++matrixPtr3)
	{
        for (int **tomatrixPtr = *matrixPtr3; tomatrixPtr < *matrixPtr3 + sizeY; ++tomatrixPtr)
        {
            delete [] *tomatrixPtr;
        }
        delete [] *matrixPtr3;
    }
    delete[] dynMatrix3;
    cout << "DEL:2 array" << endl;

system("pause"); // для Visual Studio
	return 0;
}
