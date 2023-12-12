/*
Функція отримує три вказівники A, B, C (адреси масивів) і розмір масивів (всі масиви однакового розміру).
Функція шукає суму (по елементах) масивів A та B і записує у масив C.

*/

#include <iostream>
#include <ctime>

using namespace std;

void FillArray( int* const arrPtr, int arrLen)
{
	for (auto it = arrPtr; it != arrPtr + arrLen; ++it)
	{
		*it = rand() % 10;
	}
}

void sumArrays( int* const arrRes1Ptr, const int* const arrSrc2Ptr, const int* const arrSrc3Ptr, const int arrLen)
{
	for (int i = 0; i < arrLen; ++i)
	{
		*(arrRes1Ptr + i) = *(arrSrc2Ptr + i) + *(arrSrc3Ptr + i);
	}
}

void PrintArray(int* const arrPtr, int arrLen)
{
	for (auto it = arrPtr; it != arrPtr + arrLen; ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void main()
{

	srand(time(0));
	const int arrsLen = 10;

	#pragma region === arrays define ===

	int* arrAPtr = new int[arrsLen];
	int* arrBPtr = new int[arrsLen];
	int* arrCPtr = new int[arrsLen];

	#pragma endregion

	FillArray(arrBPtr, arrsLen);
	PrintArray(arrBPtr, arrsLen);
		
	FillArray(arrCPtr, arrsLen);
	PrintArray(arrCPtr, arrsLen);

	sumArrays(arrAPtr, arrBPtr, arrCPtr, arrsLen);
	PrintArray(arrAPtr, arrsLen);


	#pragma region === delete arrays ===

	delete arrAPtr;
	delete arrBPtr;
	delete arrCPtr;

	#pragma endregion
	system("pause");

}
