#include <iostream>

#include <stdint.h>

using namespace std;


// прототипы функций - функции производят схожие действия
void functionO(int);
void function1(int);
void function2(int);

int main()
{
	// инициализировать массив из 3 указателей на функции, каждая
	//из которых принимает аргумент типа int и возвращает void
	void (*f[3])(int) = { functionO, function1, function2 };

	int choice;

	cout << "Enter a number between 0 and 2, 3 to end: ";
	cin >> choice;

	// обработать выбор пользователя
	while ((choice >= 0) && (choice < 3))
	{
		// вызвать функцию в позиции choice массива f
		//и передать choice в качестве аргумента
		(*f[choice])(choice);

		cout << "Enter a number between 0 and 2, 3 to end: ";
		cin >> choice;
	} // конец while

	cout << "Program execution completed." << endl;

	return 0; // показывает успешное завершение
} // конец main

void functionO(int a)
{
	cout << "You entered " << a << " so functionO was called\n\n";
} // конец функции functionO

void function1(int b)
{
	cout << "You entered " << b << " so function1 was called\n\n";
} // конец функции functionl

void function2(int c)
{
	cout << "You entered " << c << " so function2 was called\n\n";
} // конец функции function2
