#include <iostream>
#include <time.h>

using namespace std;
// Виконати попередню задачу з використанням універсалього вказівника void*.
// Ще той маразм )))
int main()
{
	int a, b, c;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	void* voidPtrA = &a;
	void* voidPtrB = &b;
	void* voidPtrC = &c;

	int min = 0;

	cout << "The product of three numbers is: " << (*((int*)voidPtrA)) * (*((int*)voidPtrB)) * (*((int*)voidPtrC)) << endl;
	cout << "The arithmetic mean of the three numbers is: " << ((*((int*)voidPtrA)) + (*((int*)voidPtrB))
		+ (*((int*)voidPtrC))) / 3 << endl;
	cout << "The minimus of three numders is: " << ((*(int*)voidPtrA) 
		< (*(int*)voidPtrB) && (*(int*)voidPtrA) < (*(int*)voidPtrC) ? 
		min = (*(int*)voidPtrA) : (*(int*)voidPtrB) < (*(int*)voidPtrA) && (*(int*)voidPtrB) 
		< (*(int*)voidPtrC) ? min = (*(int*)voidPtrB) : min = (*(int*)voidPtrC)) << endl;

	return 0;
}
