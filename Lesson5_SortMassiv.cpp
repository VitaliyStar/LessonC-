#include <iostream>
#include <time.h>

using namespace std;
// Створити два масиви, впорядкованих по зростанню: А[n] і B[m]. 
// Сформуйте масив C[n + m], який складається з елементів масивів А і В, 
// впорядкованих по зростанню.Все робити через вказівники та функції

int* Create(int size)
{
	int* Arr = new int[size];
	return Arr;
}

void FillArray(int* Arr, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 100;
	}
}

void Sort(int* Arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (Arr[j] < Arr[i])
			{
				swap(Arr[i], Arr[j]);
			}
		}
	}
}

int* Adding(int* Arr1, int* Arr2, int n, int m)
{
	int* Arr3 = new int[n + m];
	for (int i = 0; i < n; i++)
	{
		Arr3[i] = Arr1[i];
		// cout << C[i] << "\t";
	}
	for (int i = 0; i < m; i++)
	{
		//C[i] = A[i];
		Arr3[i + n] = Arr2[i];
		//cout << C[i] << "\t";
	}
	return Arr3;
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
	int n, m;
	cout << "Enter n: ";
	cin >> n;

	srand(time(NULL));

	cout << "Enter m: ";
	cin >> m;

	cout << "First array:" << endl;
	int* Arr1 = Create(n);
	FillArray(Arr1, n);
	Print(Arr1, n);

	cout << "Second array:" << endl;
	int* Arr2 = Create(m);
	FillArray(Arr2, m);
	Print(Arr2, m);

	cout << "New array:" << endl;
	int* Arr3 = Adding(Arr1, Arr2, n, m);
	int size = n + m;
	Print(Arr3, size);

	cout << "Sort new array:" << endl;
	Sort(Arr3, size);
	Print(Arr3, size);

	Del(Arr1);
	Del(Arr2);
	Del(Arr3);

	return 0;
}
