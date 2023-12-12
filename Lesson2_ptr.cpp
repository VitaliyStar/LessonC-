#include <iostream>
#include <time.h>

using namespace std;
// Ввести 3 числа з клавіатури. Оголосити вказівники на ці числа. 
// Отримати добуток цих трьох заданих чисел, середє арифметичне, найменше з них, 
// користуючись непрямим доступом до чисел(через вказівники).

int main()
{
	int a, b, c;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	int* aPtr = &a;
	int* bPtr = &b;
	int* cPtr = &c;

	int min = 0;

	cout << "The product of three numbers is: " << (*aPtr) * (*bPtr) * (*cPtr) << endl;
	cout << "The arithmetic mean of the three numbers is: " << ((*aPtr) + (*bPtr) + (*cPtr)) / 3 << endl;
	cout << "The minimus of three numders is: " << (*aPtr < *bPtr&&* aPtr < *cPtr ? min = *aPtr : *bPtr < *aPtr&&* bPtr < *cPtr ? min = *bPtr : min = *cPtr) << endl;

	return 0;
}
