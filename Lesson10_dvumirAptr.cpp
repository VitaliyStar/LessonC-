#include <iostream>
#include <math.h>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

int* createLinearIntArray(const int arrSize)
{
	return new int[arrSize];
}

void fillLinearArray(int* arrPtr, const int arrSize)
{
	for (int* it = arrPtr; it < arrPtr + arrSize; ++it)
	{
		*it = rand() % 10;
	}
}

int** create2DimIntArray(const int x, const int y)
{
	int** arr = new int* [y];

	for (int** arrIt = arr; arrIt < arr + y; ++arrIt)
	{
		*arrIt = createLinearIntArray(x);
	}
	return arr;
}

void fill2DimIntArr(int** arrPtr, const int x, const int y)
{
	for (int** arrIt = arrPtr; arrIt < arrPtr + y; ++arrIt)
	{
		fillLinearArray(*arrIt, x);
	}
}

void printLinearIntArr(int* const arrPtr, const int arrSize)
{
	for (int* arrIt = arrPtr; arrIt < arrPtr + arrSize; ++arrIt)
	{
		cout << *arrIt << " ";
	}
}

void print2DimIntArray(int** const arrPtr, const int x, const int y)
{
	for (int** arrIt = arrPtr; arrIt < arrPtr + y; ++arrIt)
	{
		printLinearIntArr(*arrIt, x);
		cout << endl;
	}
}

void deleteLinearArr(int* arrPtr)
{
	if (arrPtr != nullptr)
	{
		delete[] arrPtr;
		arrPtr = nullptr;
	}
}

void delete2DimArr(int** arrPtr, int y)
{
	if (arrPtr != nullptr)
	{
		for (int** arrIt = arrPtr; arrIt < arrPtr + y; ++arrIt)
		{
			deleteLinearArr(*arrIt);
		}
		delete arrPtr;
		arrPtr = nullptr;
	}
}

void MoveLineDown(int** arrPtr, int y)
{
	for (int i = y - 1; i > 0; --i)
	{
		swap(arrPtr[i], arrPtr[i - 1]);
	}
}

void MoveLineDown(int** arrPtr, int y, int count)
{
	count %= y;

	for (int i = 0; i < count; ++i)
	{
		MoveLineDown(arrPtr, y);
	}
}



int main()
{
	srand(time(0));
	const int arrX = 15;
	const int arrY = 8;

	for (int i = 0; i < 20; ++i)
	{
		auto arr2Dim = create2DimIntArray(arrX, arrY);
		fill2DimIntArr(arr2Dim, arrX, arrY);

		cout << "Before:" << endl;
		//print2DimIntArray(arr2Dim, arrX, arrY);

		MoveLineDown(arr2Dim, arrY, 3);

		cout << "After:" << endl;
		//print2DimIntArray(arr2Dim, arrX, arrY);
		delete2DimArr(arr2Dim, arrY);
	}


	auto arr = createLinearIntArray(arrX);
	fillLinearArray(arr, arrX);
	cout << "Before:" << endl;
	printLinearIntArr(arr, arrX);


	cout << "After:" << endl;
	printLinearIntArr(arr, arrX);

	cout << "After 2 :" << endl;
	printLinearIntArr(arr, arrX);

	system("pause");
}


