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




//char

template <typename TT, typename T>
TT arr(T arr[][6], int sizeY, int sizeX)
{


    const int size1 = 1;
    const int size2 = 2;
    const int sizeZ = 10;
    const int sizeZZ = 26;
    const int sizeZZZ = 36;
    int doparr1[sizeZ] = { 0 };
    int doparr2[sizeZZ] = { 0 };
    int do1[size1] = { 0 };
    int do2[size2] = { 0 };
    int doparr3[sizeZZZ] = { 0 };


    for (int z = 0; z < sizeZ; ++z)
    {
        int k = 0;

        while (true)
        {
            k = rand() % 10 + 65;

            if (do1[k] == 0)
            {

                do1[k] = 1;
                doparr1[z] = k;
                break;
            }
        }
    }
    cout << "doparr1" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int z = 0; z < sizeZ; ++z)
    {

        cout << setw(4) << static_cast<char>(doparr1[z]) << " ";
    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;

    for (int z = 0; z < sizeZZ; ++z)
    {
        int kk = 0;

        while (true)
        {
            kk = rand() % 26 + 97;

            if (do2[kk] == 0)
            {

                do2[kk] = 1;
                doparr2[z] = kk;
                break;
            }
        }
    }
    cout << "doparr2" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int z = 1; z < sizeZZ; ++z)
    {
        cout << setw(4) << static_cast<char>(doparr2[z - 1]) << " ";
        if (z % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;

    for (int z = 0; z < sizeZZZ; ++z)
    {
        doparr3[z] = doparr2[z];
        doparr3[z] = doparr1[z];

    }


    cout << "doparr3" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int z = 1; z < sizeZZZ; ++z)
    {
        cout << setw(4) << static_cast<char>(doparr3[z - 1]) << " ";
        if (z % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;

    cout << "From doparr3 to the matrix ( char ). " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0, z = 0; y < sizeY; ++y) //z for 1-y massiv
    {
        for (int x = 0; x < sizeX; ++x)
        {

            arr[y][x] = doparr3[z++];

        }
        //cout << endl;
    }
    cout << "------------------------------------------------------" << endl;

    cout << "The matrix ( char ). " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            cout << setw(4) << static_cast<char>(arr[y][x]) << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------------------" << endl;


    int counterr = 0;
    for (int yy = 0; yy < sizeY; ++yy)
    {


        for (int xx = 0; xx < sizeX; ++xx)
        {

            int tmp = 0;
            int counter = 0;
            //int counterr = 0;
            tmp = arr[yy][xx];
            counterr++;
            for (int y = 0; y < sizeY; ++y)
            {

                for (int x = 0; x < sizeX; ++x)
                {

                    //int counter = 0;
                    int memy = 0;
                    int memx = 0;
                    //int tmpp = 0;
                    //tmp = arr[y][x];
                    if (tmp == arr[y][x])
                    {
                        //tmp = arr[y][x];
                        memy = y;
                        memx = x;
                        counter++;
                        cout << setw(4) << counterr << " " << counter << " " << memy << " " << memx << " " << static_cast<char>(arr[memy][memx]) << endl;
                        //if (tmpp == arr[memy][memx]) {
                        //    arr[memy][memx] = rand()%9 + 65 ;
                        //}
                    }
                    //cout << setw(4) << memy << " "<< memx << " " << arr[memy][memx] << endl;


                    //arr[y][x]=rand()%25 + 97 ;

                }

            }

        }

    }

    //Сортировка элементов по возрастанию отдельно для каждой строки матрицы.
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            int j;
            int xx;
            for (j = sizeX - 1; j > x; j--)
            {
                // внутренний цикл прохода
                if (arr[y][j - 1] > arr[y][j])
                {
                    xx = arr[y][j - 1];
                    arr[y][j - 1] = arr[y][j];
                    arr[y][j] = xx;
                }
            }
        }
        //cout << endl;
    }



    cout << "Sort Ascending for each row of the matrix.(char) " << endl;
    cout << "------------------------------------------------------" << endl;
    for (int y = 0; y < sizeY; ++y)
    {
        for (int x = 0; x < sizeX; ++x)
        {
            cout << setw(4) << static_cast<char>(arr[y][x]) << " ";
            //cout << setw(4) << arr[y][x] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------------------" << endl;



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



        // Задание 1: Написать перегруженные функции (int, double, char) для выполнения следующих задач:
        //Инициализация квадратной матрицы;
        //Вывод матрицы на экран;
        //Определение максимального и минимального элемента на главной диагонали матрицы;
        //Сортировка элементов по возрастанию отдельно для каждой строки матрицы.
        cout << "Program 1." << endl;

        char s = 0;
        srand(time(0));

        const int sizeY = 6;
        const int sizeX = 6;
        //const int sizeYY = 4 ;
        //const int sizeXX = 7 ;

        //char matrix3[sizeY][sizeX]={122,121,120,119,118,117,116,115,114,113,112,111,110,109,108,107,106,105,104,103,102,101,100,99,98,97,74,73,72,71,70,69,68,67,66,65};
        int matrix3[sizeY][sizeX] = { 0 };

        //char matrix3[sizeY][sizeX];
        //char matrix3[sizeYY][sizeXX]={"z","y","x","w","v","u","t","s","r","q","p","o","n","m","l","k","j","i","h","g","f","e","d","c","b","a","0","1"};
        //char matrix3[sizeYY][sizeXX]={"z","y","x","w","v","u","t","s","r","q","p","o","n","m","l","k","j","i","h","g","f","e","d","c","b","a","0","1"};
        char en[] = { "abcdefghijklmnopqrstuvwxyz" };
        char ua[] = { "абвгґдеєжзиіїйклмнопрстуфхцчшщьюя" };
        //char ua[] = {"а", "б", "в", "г", "ґ", "д", "е", "є", "ж", "з", "и", "і", "ї", "й", "к", "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х", "ц", "ч", "ш", "щ", "ь", "ю", "я"};
        //char ua[] = {'а', 'б', 'в', 'г', 'ґ', 'д', 'е', 'є', 'ж', 'з', 'и', 'і', 'ї', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ь', 'ю', 'я', '\0'};

        cout << en << endl;
        cout << ua << endl;



        arr<int, int>(matrix3, sizeY, sizeX);

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

