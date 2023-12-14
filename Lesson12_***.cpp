#include  <iostream>
#include  <math.h>
#include  <cstdlib>
#include  <stdio.h>
#include  <cstdio>
//#include  <unistd.h> // for use sleep();
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>


//#include  <conio.h> //for linux no work
using namespace std;

int main(int argc, char* argv[])
{

	//Задание 1. Вывести на экран фигуры заполненные звездочками. Диалог с пользователем реализовать при помощи меню.

	cout << "ClassWork 9." << endl;
	cout << endl;
	for (int i = 1; ; ++i)
	{

		char s = 0;
		int height = 0;
		int var = 0;

		cout << "Enter height triangle:";
		cin >> height;
		var = height;
		cout << endl;


		//****
		for (int i = height; i > 0; i--, var--)			// ***
		{                                              			//  **
			for (int j = 1; j < i; j++)				//   *
			{
				cout << "  ";
			}
			for (int i = height; i >= var; i--)
			{
				cout << " *";
			}
			cout << endl;
		}

		cout << endl;
		cout << "Enter symbol Q to exit, to continue press 0: ";
		cin >> s;
		if (s == 'q')
		{
			cout << "Exit!" << endl;
			break;
		}
	}
	cout << "--------------------------------------------------------------------------\n";


	return 0;
}
