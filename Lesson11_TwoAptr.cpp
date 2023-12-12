#include  <iostream>
#include  <math.h>
#include  <cstdlib>
#include  <stdio.h>
#include  <cstdio>
//#include  <unistd.h> // for use sleep();
#include  <string>
#include  <algorithm>
#include  <iomanip>
#include  <cmath>


#include <time.h>
#include <locale.h>
//#include  <random> //standart c++2011

//#include  <conio.h> //for linux no work

using namespace std;


void printSum(int* a, int* b)
{
    *a += *b;
    cout << "Sum:" << *a << endl;
}


int main()
{
    srand(time(0)); // генерация случайных чисел

    const int size = 10;
    //const int siz1=4;
    //const int siz2=6;
    int arrA[size] = { 10,20,30,40,50,60,70,80,90,100 };
    int arrB[size] = { 1,2,3,4,5,6,7,8,9,0 };
    int arrX[size] = { 1,2,3,4,5,6,7,8,9,0 };
    //int arrAA[siz1][siz2]={0};
    //int arrBB[siz1][siz2]={0};
    //int arrXX[siz1][siz2]={0};
    //int arrB0[size]={0};
    int arrC[size] = { 0 };
    int arrTemp[size] = { 0 };
    int* n = new int;
    int* m = new int;
    int* a = new int;
    int* b = new int;
    *n = 10;
    *m = 0;
    *a = 10;
    *b = 5;
    int c = 7;
    int d = 30;
    //int si1=0;
    //int si2=0;


    int* arrAPtr = arrA;
    int* arrBPtr = arrB;
    int* arrXPtr = arrX;
    //int* arrAAPtr=arrAA;
    //int* arrBBPtr=arrBB;
    //int* arrXXPtr=arrXX;
    //int* arrB0Ptr=arrB0;
    int* arrCPtr = arrC;
    int* arrTPtr = arrTemp;



    printSum(n, m);

    printSum(&c, &d);
    printSum(a, b);
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrAPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr = arrAPtr; dddArrPtr < arrAPtr + size; ++dddArrPtr)
    {
        cout << "arrAPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrBPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr = arrBPtr; dddArrPtr < arrBPtr + size; ++dddArrPtr)
    {
        cout << "arrBPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrBPtr = \t" << arrBPtr << endl;
    cout << "*arrBPtr = \t" << *arrBPtr << endl;
    cout << "------------------------------------------------------\n";
    //task1 Используя два указателя на массив целых чисел, скопировать один массив в другой.
    //      Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
    cout << "task1:\n";
    //for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrAPtr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    for (int* dddArrPtr = arrBPtr, *sssArrPtr = arrAPtr; dddArrPtr < arrBPtr + size; ++dddArrPtr, ++sssArrPtr)
    {
        *dddArrPtr = *sssArrPtr;
        cout << "dddArrPtr  B<=A = \t" << dddArrPtr << endl;
        cout << "*dddArrPtr B<=A = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";

    cout << "" << endl;
    for (int* dddArrPtr = arrBPtr; dddArrPtr < arrBPtr + size; ++dddArrPtr)
    {
        cout << "arrBPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;

    //task1 Двовимірний dynamik // Используя два указателя на массив целых чисел, скопировать один массив в другой.
    //      Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
    cout << "dvovumirnuy dunamichnuy:\n";
    int* si1 = new int; // динамическое выделение памяти под объект типа int
    int* si2 = new int; // динамическое выделение памяти под объект типа int
    //int *tempik = new int; // динамическое выделение памяти под объект типа int

    cout << "Enter ptrarray row:\n";
    cin >> *si1;
    cout << "Enter ptrarray column:\n";
    cin >> *si2;
    // динамическое создание двумерного массива вещественных чисел
    float** ptrarray = new float* [*si1]; //  строки в массиве
    for (int count = 0; count < *si1; count++)
    {
        ptrarray[count] = new float[*si2]; // и  столбцов
    }

    cout << "ptrarray[row][column]:\n";
    cout << "------------------------------------------------------" << endl;
    // заполнение массива
    for (int count_row = 0; count_row < *si1; count_row++)
    {
        for (int count_column = 0; count_column < *si2; count_column++)
        {
            int* ptrk = new int; // динамическое выделение памяти под объект типа int
            *ptrk = 0; // инициализация объекта через указатель
            //int k = 0;

            // объявление одномерного динамического массива на (*si1)*(*si2) элементов:
            float* ptrarrayone = new float[(*si1) * (*si2)  ];
            //  где ptrarray  – указатель на выделенный участок памяти под массив вещественных чисел  типа float
            //      в квадратных скобочках указываем размер массива

            while (true) //заполнение массива случайными числами shob ne povtorylus
            {
                *ptrk = rand() % ((*si1) * (*si2)) + 1;

                if (ptrarrayone[*ptrk] == 0)
                {

                    ptrarrayone[*ptrk] = 1;
                    ptrarray[count_row][count_column] = *ptrk; //заполнение массива случайными числами shob ne povtorylus
                    break;
                }
            }

            delete ptrk;

            // высвобождение памяти отводимой под одномерный динамический массив:
            delete[] ptrarrayone;

            //ptrarray[count_row][count_column] = rand() % ((*si1)*(*si2)); //заполнение массива случайными числами
        }
    }
    //cout << endl;



    // вывод массива
    for (int count_row = 0; count_row < *si1; count_row++)
    {
        for (int count_column = 0; count_column < *si2; count_column++)
            cout << setw(2) << setprecision(2) << ptrarray[count_row][count_column] << "   ";
        cout << endl;
    }
    //cout << endl;

    cout << "------------------------------------------------------" << endl;

    // динамическое создание двумерного массива вещественных чисел
    float** ptrarray2 = new float* [*si1]; //  строки в массиве
    for (int count = 0; count < *si1; count++)
    {
        ptrarray2[count] = new float[*si2]; // и  столбцов
    }

    cout << "ptrarray2[row][column]:\n";
    cout << "------------------------------------------------------" << endl;
    // заполнение массива
    for (int count_row = 0; count_row < *si1; count_row++)
    {
        for (int count_column = 0; count_column < *si2; count_column++)
        {
            int* ptrk2 = new int; // динамическое выделение памяти под объект типа int
            *ptrk2 = 0; // инициализация объекта через указатель
            //int k = 0;

            // объявление одномерного динамического массива на (*si1)*(*si2) элементов:
            float* ptrarrayone2 = new float[(*si1) * (*si2)];
            //  где ptrarray  – указатель на выделенный участок памяти под массив вещественных чисел  типа float
            //      в квадратных скобочках указываем размер массива

            while (true) //заполнение массива случайными числами shob ne povtorylus
            {
                *ptrk2 = rand() % ((*si1) * (*si2)) + 1;

                if (ptrarrayone2[*ptrk2] == 0)
                {

                    ptrarrayone2[*ptrk2] = 1;
                    ptrarray2[count_row][count_column] = *ptrk2; //заполнение массива случайными числами shob ne povtorylus
                    break;
                }
            }

            delete ptrk2;

            // высвобождение памяти отводимой под одномерный динамический массив:
            delete[] ptrarrayone2;

            //ptrarray2[count_row][count_column] = rand() % ((*si1)*(*si2)); //заполнение массива случайными числами
        }
    }
    //cout << endl;

    // вывод массива
    for (int count_row = 0; count_row < *si1; count_row++)
    {
        for (int count_column = 0; count_column < *si2; count_column++)
            cout << setw(2) << setprecision(2) << ptrarray2[count_row][count_column] << "   ";
        cout << endl;
    }
    //cout << endl;

    cout << "------------------------------------------------------" << endl;
    cout << "copy ptrarray[row][column] to ptrarray2[row][column]:\n";
    cout << "------------------------------------------------------" << endl;

    for (int count_row = 0; count_row < *si1; count_row++)
    {
        for (int count_column = 0; count_column < *si2; count_column++)
            ptrarray2[count_row][count_column] = ptrarray[count_row][count_column];
        //cout << endl;
    }
    // cout << endl;
    // вывод массива new
    for (int count_row = 0; count_row < *si1; count_row++)
    {
        for (int count_column = 0; count_column < *si2; count_column++)
            cout << setw(2) << setprecision(2) << ptrarray2[count_row][count_column] << "   ";
        cout << endl;
    }
    //cout << endl;

    cout << "------------------------------------------------------" << endl;
    /*
    cout  << "copy ptrarray2[row][column] to ptrarray1[row][column]:\n";
    cout  << "------------------------------------------------------" << endl;

    for (float *dddArrPtr=**ptrarray, *sssArrPtr=**ptrarray2; dddArrPtr < **ptrarray + *si1 ; ++dddArrPtr, ++sssArrPtr)
    {
        //for (float *dddArrPtr=*ptrarray, *sssArrPtr=*ptrarray2; dddArrPtr < *ptrarray + *si2 ; ++dddArrPtr, ++sssArrPtr)
        for (int count = 0; count < *si2 ; count++)
        {
            *dddArrPtr = *sssArrPtr;
            *(dddArrPtr+count)=*(sssArrPtr+count);
            //cout << "dddArrPtr  ptrarray<=ptrarray2 = \t" << dddArrPtr << endl;
            cout << setw(2) <<setprecision(2) << *(dddArrPtr+count) << " " ;
        }
        cout << endl;
    }
    //*/
    cout << "------------------------------------------------------" << endl;


    // удаление двумерного динамического массива
    for (int count = 0; count < *si1; count++)
        delete[]ptrarray[count];

    // удаление двумерного динамического массива
    for (int count = 0; count < *si1; count++)
        delete[]ptrarray2[count];


    delete si1; // высвобождение памяти
    delete si2; // высвобождение памяти

    //kinec dvovumirnogo
    /*
    cout  << "------------------------------------------------------" << endl;
    for (int y = 0, z = 0 ; y < sizeY ; ++y) //z for 1-y massiv
    {
        for (int x = 0 ; x < sizeX ; ++x)
        {

            arr[y][x] = doparr3[z++];

        }
        //cout << endl;
    }
    cout  << "------------------------------------------------------" << endl;

    cout  << "arrAAPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr=arrAAPtr ; dddArrPtr < arrAAPtr + size ; ++dddArrPtr)
    {
        for (int* dddArrPtr=arrAAPtr ; dddArrPtr < arrAAPtr + size ; ++dddArrPtr)

        {
            cout << "arrAAPtr = \t" << *dddArrPtr << endl;
        }
    }
    cout << endl;


    cout  << "task1:\n";
    //for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrAPtr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrAPtr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    {
        *dddArrPtr = *sssArrPtr;
        cout << "dddArrPtr  B<=A = \t" << dddArrPtr << endl;
        cout << "*dddArrPtr B<=A = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout  << "------------------------------------------------------\n";

    cout << "" << endl;
    for (int* dddArrPtr=arrBPtr ; dddArrPtr < arrBPtr + size ; ++dddArrPtr)
    {
        cout << "arrBPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    */

    //task2:zero Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
    //           Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
    cout << "task2:zero\n";
    cout << "arrAPtr:NEW:zero:\n";
    ////for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrB0Ptr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    //for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrB0Ptr, noconstsize=size-1; dddArrPtr-1 < arrBPtr + noconstsize ; --noconstsize, ++sssArrPtr)
    //////for (int* dddArrPtr=arrBPtr, noconstsize=size-1; dddArrPtr-1 < arrBPtr + noconstsize ; --noconstsize, ++dddArrPtr)
    for (int* dddArrPtr = arrBPtr, noconstsize = size - 1; dddArrPtr - 1 < arrBPtr + noconstsize; --noconstsize)
    {
        //*sssArrPtr = dddArrPtr[noconstsize];
        ////*sssArrPtr=*dddArrPtr; // v a zap b
        cout << "dddArrPtr  A<=B = \t" << (dddArrPtr + noconstsize) << endl;
        cout << "*dddArrPtr A<=B = \t" << *(dddArrPtr + noconstsize) << endl;
        cout << endl;
    }



    //task2 Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
    //      Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
    cout << "task2:\n";
    cout << "arrAPtr:NEW:\n";
    ////for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrAPtr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    for (int* dddArrPtr = arrBPtr, *sssArrPtr = arrTPtr, noconstsize = size - 1; dddArrPtr - 1 < arrBPtr + noconstsize; --noconstsize, ++sssArrPtr)
    {
        *sssArrPtr = dddArrPtr[noconstsize];
        ////*sssArrPtr=*dddArrPtr; // v a zap b
        //cout << "dddArrPtr  A<=B = \t" << sssArrPtr << endl;
        //cout << "*dddArrPtr A<=B = \t" << *sssArrPtr << endl;
    }
    ////for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrTPtr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    for (int* dddArrPtr = arrTPtr, *sssArrPtr = arrBPtr, noconstsize = size - 1; dddArrPtr - 1 < arrTPtr + noconstsize; ++dddArrPtr, ++sssArrPtr)
    {
        *sssArrPtr = *dddArrPtr;
        ////*sssArrPtr=*dddArrPtr; // v a zap b
        cout << "dddArrPtr  A<=B = \t" << sssArrPtr << endl;
        cout << "*dddArrPtr A<=B = \t" << *sssArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    //task3 Используя два указателя на массивы целых чисел, скопировать один массив в другой так,
    //      чтобы во втором массиве элементы находились в обратном порядке.
    //      Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
    cout << "task3:\n";
    cout << "------------------------------------------------------\n";
    cout << "arrCPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr = arrCPtr; dddArrPtr < arrCPtr + size; ++dddArrPtr)
    {
        cout << "arrСPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrBPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr = arrBPtr; dddArrPtr < arrBPtr + size; ++dddArrPtr)
    {
        cout << "arrBPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrBPtr = \t" << arrBPtr << endl;
    cout << "*arrBPtr = \t" << *arrBPtr << endl;
    cout << "------------------------------------------------------\n";
    cout << "task3:\n";
    ////for (int* dddArrPtr=arrBPtr, *sssArrPtr=arrAPtr; dddArrPtr < arrBPtr + size ; ++dddArrPtr, ++sssArrPtr)
    for (int* dddArrPtr = arrBPtr, *sssArrPtr = arrCPtr, noconstsize = size - 1; dddArrPtr - 1 < arrBPtr + noconstsize; --noconstsize, ++sssArrPtr)
    {
        *sssArrPtr = dddArrPtr[noconstsize];
        ////*sssArrPtr=*dddArrPtr; // v a zap b
        cout << "dddArrPtr  C<=B = \t" << sssArrPtr << endl;
        cout << "*dddArrPtr C<=B = \t" << *sssArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    //dodatkovo

    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrCPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr = arrCPtr; dddArrPtr < arrCPtr + size; ++dddArrPtr)
    {
        cout << "arrCPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << "arrBPtr:\n";
    cout << "" << endl;
    for (int* dddArrPtr = arrBPtr; dddArrPtr < arrBPtr + size; ++dddArrPtr)
    {
        cout << "arrBPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------\n";
    //task4 Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
    cout << "task4:\n";

    int* ptrvalue = new int; // динамическое выделение памяти под объект типа int
    *ptrvalue = 5; // инициализация объекта через указатель
    cout << "ptrvalue = " << *ptrvalue << endl;

    int* ptrvalue2 = new int; // динамическое выделение памяти под объект типа int
    *ptrvalue2 = 7; // инициализация объекта через указатель
    cout << "ptrvalue2 = " << *ptrvalue2 << endl;

    if (*ptrvalue > *ptrvalue2)
    {
        cout << "*ptrvalue > *ptrvalue2 " << *ptrvalue << endl;
    }
    else
    {
        cout << "*ptrvalue < *ptrvalue2 == " << *ptrvalue2 << endl;
    }

    delete ptrvalue; // высвобождение памяти
    delete ptrvalue2; // высвобождение памяти

    //task5 Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.
    cout << "task5:\n";

    int* ptrval = new int; // динамическое выделение памяти под объект типа int

    cout << "Enter *ptrval:\n";
    cin >> *ptrval;

    cout << "*ptrval = " << *ptrval << endl;
    cout << "ptrval : " << ptrval << endl;

    if (*ptrval < 0)
    {
        cout << "*ptrval < 0 : " << *ptrval << " = -" << endl;
        cout << "ptrval : " << ptrval << endl;
    }
    else
        //if ( *ptrvalue >= 0)

    {
        cout << "*ptrval >= 0 : " << *ptrval << " = + " << endl;
    }

    delete ptrval; // высвобождение памяти

    //task6 Используя указатели и оператор разыменования, обменять местами значения двух переменных.
    cout << "task6:\n";

    int* ptr1 = new int; // динамическое выделение памяти под объект типа int
    int* ptr2 = new int; // динамическое выделение памяти под объект типа int
    int* tempik = new int; // динамическое выделение памяти под объект типа int

    cout << "Enter *ptr1:\n";
    cin >> *ptr1;
    cout << "Enter *ptr2:\n";
    cin >> *ptr2;

    *tempik = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *tempik;

    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;

    delete ptr1; // высвобождение памяти
    delete ptr2; // высвобождение памяти
    delete tempik; // высвобождение памяти

    //task8 Используя указатель на массив целых чисел, посчитать сумму элементов массива.
    //      Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

    cout << "------------------------------------------------------\n";
    cout << "arrXPtr:\n";
    cout << "" << endl;
    int* Sum = new int;
    *Sum = 0;
    for (int* dddArrPtr = arrXPtr; dddArrPtr < arrXPtr + size; ++dddArrPtr)
    {
        *Sum += *dddArrPtr;
        cout << "arrXPtr = \t" << *dddArrPtr << endl;
    }
    cout << endl;
    cout << "Sum arrXPtr = \t" << *Sum << endl;
    //cout << "Sum arrXPtr = \t" << *dddArrPtr << endl;

    cout << endl;

    delete Sum;

    cout << "------------------------------------------------------\n";




    delete n;
    delete m;
    delete a;
    delete b;



    //system("pause");
    return 0;
}
