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
//#include <locale.h>
//#include  <random> //standart c++2011

//#include  <conio.h> //for linux no work
using namespace std;


template <typename TT, typename T>
TT arr1(T arr[], int sizeY)
{
    for (int y = 0; y < sizeY; ++y)
    {
        arr[y] = rand() % (69 + 69) - 69;
    }

    cout << "The matrix. " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        cout << setw(4) << arr[y] << " ";
    }
    cout << endl;

    cout << "------------------------------------------------------" << endl;

    T maxx = arr[0];

    for (int y = 0; y < sizeY; ++y)
    {
        if (arr[y] > maxx)
        {
            maxx = arr[y];
        }

    }


    cout << "Max : " << maxx << endl;



    return 0;
}

template <typename TT, typename T>
TT  arr2(T arr[], int sizeY)
{
    for (int y = 0; y < sizeY; ++y)
    {
        arr[y] = (rand() % 10000) / 100.0; // число с двома знаками после запятой
    }
    cout << "The matrix ( double ). " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        cout << fixed << setprecision(2) << setw(6) << arr[y] << " ";
    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;

    T maxx = arr[0];

    for (int y = 0; y < sizeY; ++y)
    {
        if (arr[y] > maxx)
        {
            maxx = arr[y];
        }
    }

    cout << setprecision(2) << "Max : " << maxx << endl;


    return 0;
}

//char

template <typename TT, typename T>
TT  arr3(T arr[], int sizeY)
{

    cout << "The matrix ( char ). " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        cout << setw(4) << arr[y] << " ";

    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    //int sum = 0 ;
    T maxx = arr[0];

    for (int y = 0; y < sizeY; ++y)
    {
        if (arr[y] > maxx)
        {
            maxx = arr[y];
        }
    }

    cout << "Max : " << maxx << endl;

    return 0;
}

template <typename TT, typename T>
TT  arr4(T arr[][6], int sizeY, int sizeX)
{
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            arr[y][x] = rand() % (69 + 69) - 69;
        }

    }
    cout << "The matrix. " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            cout << setw(4) << arr[y][x] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------------------" << endl;

    int maxx = arr[0][0];

    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {

            if (arr[y][x] > maxx)
            {
                maxx = arr[y][x];
            }

        }
    }

    cout << "Max : " << maxx << endl;



    return 0;
}

template <typename TT, typename T>
TT  arr5(T arr[][6], int sizeY, int sizeX)
{
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            arr[y][x] = (rand() % 10000) / 100.0; // число с двома знаками после запятой
        }

    }
    cout << "The matrix ( double ). " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            cout << fixed << setprecision(2) << setw(6) << arr[y][x] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------------------" << endl;

    T maxx = arr[0][0];

    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {

            if (arr[y][x] > maxx)
            {
                maxx = arr[y][x];
            }

        }
    }

    cout << setprecision(2) << "Max : " << maxx << endl;


    return 0;
}

//char

template <typename TT, typename T>
TT  arr6(T arr[][6], int sizeY, int sizeX)
{

    cout << "The matrix ( char ). " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            cout << setw(4) << arr[y][x] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------------------" << endl;
    //int sum = 0 ;
    T maxx = arr[0][0];

    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {

            if (arr[y][x] > maxx)
            {
                maxx = arr[y][x];
            }

        }
    }


    cout << endl;

    cout << "Max : " << maxx << endl;

    return 0;
}

int main(int argc, char* argv[])
{
    //setlocale(LC_ALL, "C");
    setlocale(LC_ALL, "ukr");
    setlocale(LC_CTYPE, "ukr");
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);

    for (int i = 0; ; ++i)
    {



        // Задание 2: Написать перегруженные функции и протестировать их в основной программе:
        //Нахождения максимального значения в одномерном массиве;
        //Нахождения максимального значения в двумерном массиве;

        //Нахождения максимального значения двух целых;
        //Нахождения максимального значения трёх целых;
        cout << "Program 1." << endl;

        char s = 0;
        srand(time(0));

        const int sizeY = 6;
        const int sizeX = 6;
        //const int sizeYY = 4 ;
        //const int sizeXX = 7 ;
        int odn[sizeY] = { 0 };
        double odn2[sizeY] = { 0 };
        char odn3[sizeY] = { 70,69,68,67,66,65 };
        int matrix[sizeY][sizeX] = { 0 };
        double matrix2[sizeY][sizeX] = { 0 };
        char matrix3[sizeY][sizeX] = { 122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101,100,99,98,97,74,73,72,71,70,69,68,67,66,65 };
        //char matrix3[sizeYY][sizeXX]={"z","y","x","w","v","u","t","s","r","q","p","o","n","m","l","k","j","i","h","g","f","e","d","c","b","a","0","1"};
        //char matrix3[sizeYY][sizeXX]={"z","y","x","w","v","u","t","s","r","q","p","o","n","m","l","k","j","i","h","g","f","e","d","c","b","a","0","1"};
        char en[] = { "abcdefghijklmnopqrstuvwxyz" };
        char ua[] = { "абвгґдеєжзиіїйклмнопрстуфхцчшщьюя" };
        //char ua[] = {"а", "б", "в", "г", "ґ", "д", "е", "є", "ж", "з", "и", "і", "ї", "й", "к", "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х", "ц", "ч", "ш", "щ", "ь", "ю", "я"};
        //char ua[] = {'а', 'б', 'в', 'г', 'ґ', 'д', 'е', 'є', 'ж', 'з', 'и', 'і', 'ї', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ь', 'ю', 'я', '\0'};

        cout << en << endl;
        cout << ua << endl;

        arr1<int, int>(odn, sizeX);
        arr2<double, double>(odn2, sizeX);
        arr3<char, char>(odn3, sizeX);
        arr4<int, int>(matrix, sizeY, sizeX);
        arr5<double, double>(matrix2, sizeY, sizeX);
        arr6<char, char>(matrix3, sizeY, sizeX);

        cout << endl;
        cout << "------------------------------------------------------\n";
        cout << "Enter symbol Q to exit, to continue press 0: ";
        cin >> s;
        if (s == 'q')
        {
            cout << "Exit!" << endl;
            break;
        }
    }
    cout << endl;
    return 0;
}

