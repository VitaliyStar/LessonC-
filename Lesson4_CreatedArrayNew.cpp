#include <iostream>
#include <time.h>

using namespace std;
// Дано цілочисельний одновимірний масив. Заповнити його, вивести на екран у прямому та зворотньому порядку
// та порахувати суму елементів з використанням вказівників та функцій.

int* Create(int size)
{
	int* Arr = new int[size];
	return Arr;
}

void FillArray(int* Arr, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 10;
	}
}

int Sum(int* Arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		temp += Arr[i];
	}
	return temp;
}

void PrintRevers(int* Arr, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << Arr[i] << "\t";
	}
	cout << "\n";
}

void Print(int* Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << "\t";
	}
	cout << "\n";
}

void Del(int* Arr)
{
	delete[] Arr;
}
int main()
{
	int size;
	cout << "Enter size: ";
	cin >> size;

	int* Array = Create(size);
	FillArray(Array, size);
	cout << "Output array: " << endl;
	Print(Array, size);
	cout << "Reverce array: " << endl;
	PrintRevers(Array, size);
	int sum = Sum(Array, size);
	cout << "The sum of numers array is: " << sum << endl;
	Del(Array);
	return 0;
}
