#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>
#include <string.h>
//#include  <stdio.h>

#include  <cstdio>
#include  <Windows.h>

using namespace std;

int NOD(int a, int b)
{
    if (b == 0)
        return a;
    if (a > b)
        return NOD(b, a % b);
    else
        return NOD(a, b % a);
}

void task1()
{
    cout << "Task1 : " << endl;
    cout << "Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел." << endl;
    cout << endl;

    int a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите втррое число: " << endl;
    cin >> b;
    cout << "Наибольльший общий делитель равен: " << NOD(a, b) << endl;

    cout << "------------------------------------------------------\n";
    cout << endl;
}

int code_sumdigit(int aa, int bb, int cc, int dd)
{
    return aa * 1000 + bb * 100 + cc * 10 + dd;
}

int random4digit(int random)
{
    int aa = rand() % 9 + 1;
    int bb = rand() % 9 + 1;
    int cc = rand() % 9 + 1;
    int dd = rand() % 9 + 1;
    cout << "Random=" << aa << bb << cc << dd << endl;

    random = code_sumdigit(aa, bb, cc, dd);

    return random;
}

void decode_sumdigit(int digit, int& aa, int& bb, int& cc, int& dd)
{
    aa = digit / 1000;
    digit -= digit / 1000 * 1000;
    bb = digit / 100;
    digit -= digit / 100 * 100;
    cc = digit / 10;
    digit -= digit / 10 * 10;
    dd = digit;

}

int rekurciyaCowBull(int random_user, int& counter)
{
    int n = 0;

    cout << "Enter the four digit:";
    cin >> n;

    int a, b, c, d;
    decode_sumdigit(n, a, b, c, d);
    int aa, bb, cc, dd;
    decode_sumdigit(random_user, aa, bb, cc, dd);

    counter++;
    int bull = 0;
    int cow = 0;


    if (aa == a)
    {
        bull++;
    }
    if (bb == b)
    {
        bull++;
    }
    if (cc == c)
    {
        bull++;
    }
    if (dd == d)
    {
        bull++;
    }
    cout << "the bulls: " << bull << endl;
    if (aa == b)
    {
        cow++;
    }
    if (aa == c)
    {
        cow++;
    }
    if (aa == d)
    {
        cow++;
    }

    if (bb == a)
    {
        cow++;
    }
    if (bb == c)
    {
        cow++;
    }
    if (bb == d)
    {
        cow++;
    }

    if (cc == b)
    {
        cow++;
    }
    if (cc == a)
    {
        cow++;
    }
    if (cc == d)
    {
        cow++;
    }

    if (dd == b)
    {
        cow++;
    }
    if (dd == c)
    {
        cow++;
    }
    if (dd == a)
    {
        cow++;
    }
    cout << "the cows: " << cow << endl;

    if (random_user == n)
    {

        //cout << "N=" << n << endl;
        return counter;
    }
    else
        return rekurciyaCowBull(random_user, counter);

}

void task2()
{
    cout << "Task2 : " << endl;
    cout << "Написать игру «Быки и коровы». Программа 'загадывает' четырёхзначное число и играющий должен угадать его." << endl;
    cout << "После ввода пользователем числа программа сообщает, сколько угадаых цифр несовпадают с позициями (коровы)" << endl;
    cout << "и сколько цифр стоит на нужном месте (быки)." << endl;
    cout << "После отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток." << endl;
    cout << "В программе необходимо использовать рекурсию." << endl;
    cout << endl;

    int random = 0;
    int counter = 0;
    random = random4digit(random);

    rekurciyaCowBull(random, counter);
    cout << "Counter=" << counter << endl;

    cout << "------------------------------------------------------\n";
    cout << endl;
}

//вивід массиву, друкуючого шахівницю
void printBoard(int array[][8], int hor, int ver)
{
    cout << endl;
    for (int j = 0; j < ver; j++)
    {
        for (int i = 0; i < hor; i++)
            cout << setw(4) << array[i][j];

        cout << endl << endl;
    }
}

int rekurciya(int board[][8], int accessibility[][8], int horizontal[8], int vertical[8], int currentRow, int currentColumn, int moveNumber, int counter, int mainRow, int mainColumn, int Row, int Column, int hor, int ver)
{

    board[mainRow][mainColumn] = ++counter;

    //робимо рівним максимально можливій доступності
    int minAccessibility = 8;
    //тимчасові змінні для вивчення субдоступності
    int minA = 8, minB = 8;

    //зменшуєм доступність на одину клітинку, розміщених в одном ходу від вибраної
    for (moveNumber = 0; moveNumber <= 7; moveNumber++)
    {
        //запамятовуєм положення коня на досці перед модифікацією для зміни доступності
        currentRow = mainRow;
        currentColumn = mainColumn;

        //вивчаєм доступність всіх можливих ходів не виходячи за межі дошки
        currentRow += horizontal[moveNumber];
        currentColumn += vertical[moveNumber];

        //не виходить, часом, за межі дошки
        if (currentRow >= 0 && currentRow <= 7 && currentColumn >= 0 && currentColumn <= 7)
        {
            //зменшуєм доступність всіх клітинок в одному ходу
            accessibility[currentRow][currentColumn]--;
            //printBoard(accessibility,hor,ver);//temp

            //якщо доступність більше, змінюєм на меньшу
            if (minAccessibility > accessibility[currentRow][currentColumn] && board[currentRow][currentColumn] == 0)
            {
                //знайшли мінімальну доступность і її координати
                minAccessibility = accessibility[currentRow][currentColumn];

                //якщо не ходили на неї ще, то робимо хід на неї
                if (board[currentRow][currentColumn] == 0)
                {
                    //підготовили координати к ходу на цю клітинку
                    Row = currentRow;
                    Column = currentColumn;
                }
                //тимчасова змінна для знахождения мінімальної доступності у тих, що меньше
                int RowA = currentRow, ColumnA = currentColumn;

                for (int moveA = 0; moveA <= 7; moveA++)
                {
                    RowA += horizontal[moveA];
                    ColumnA += vertical[moveA];

                    if (RowA >= 0 && RowA <= 7 && ColumnA >= 0 && ColumnA <= 7)
                    {
                        if (minA >= accessibility[RowA][ColumnA] && board[RowA][ColumnA] == 0)
                            //наіменьша доступність наступного хода
                            minA = accessibility[RowA][ColumnA];
                    }
                }
            }

            //якщо доступності рівні
            if (minAccessibility == accessibility[currentRow][currentColumn] && board[currentRow][currentColumn] == 0)
            {
                minAccessibility = accessibility[currentRow][currentColumn];

                //тимчасові змінні для знаходження мінімальної доступності у тих, що рівні
                int RowB = currentRow, ColumnB = currentColumn;

                for (int moveB = 0; moveB <= 7; moveB++)
                {
                    RowB += horizontal[moveB];
                    ColumnB += vertical[moveB];

                    if (RowB >= 0 && RowB <= 7 && ColumnB >= 0 && ColumnB <= 7)
                    {
                        if (minB >= accessibility[RowB][ColumnB] && board[RowB][ColumnB] == 0)
                            //найменьша доступність наступного хода
                            minB = accessibility[RowB][ColumnB];
                    }
                }

                //якщо не ходили на неї ще то робимо на неї хід
                if (board[currentRow][currentColumn] == 0 && minB < minA)
                {
                    //змінюєм підготовлені для наступного хода координати у випадку, якщо доступність наступного хода меньше
                    Row = currentRow;
                    Column = currentColumn;
                }
            }
        }
    }
    cout << "Enter the key - 'Enter' ( view up ):";
    cin.get();
    cout << endl;
    system("clear");
    printBoard(board, hor, ver);
    mainRow = Row;
    mainColumn = Column;

    if (counter == 64)
        return 0;
    else
        return rekurciya(board, accessibility, horizontal, vertical, currentRow, currentColumn, moveNumber, counter, mainRow, mainColumn, Row, Column, hor, ver);
}

void task3()
{
    cout << "Task3 : " << endl;
    cout << "Дана шахматная доска размером 8х8 и шахматный конь. Программа должна запросить у пользователя координаты клетки поля" << endl;
    cout << "и поставить туда коня. Задача программы найти и вывести путь коня, при котором он обойдет все клетки доски, " << endl;
    cout << "становясь в каждую клетку только один раз. (Так как процесс отыскания пути для разных начальных клеток может затянуться," << endl;
    cout << "то рекомендуется сначала опробовать задачу на поле размером 6х6). В программе необходимо использовать рекурсию." << endl;
    cout << endl;

    //константи що визначають розмір масиву board
    const int hor = 8, ver = 8;
    //виділяємо память для масиву, що емітує шахівницю
    int board[hor][ver] = { 0 };
    //описуємо двома масивами хід конем на дошці(їх разом вісім від 0 до 7)
    int horizontal[hor] = { 2, 1,-1,-2,-2,-1, 1, 2 };
    int vertical[ver] = { -1,-2,-2,-1, 1, 2, 2, 1 };
    //масив доступності ходів конем
    int accessibility[hor][ver] = { {2,3,4,4,4,4,3,2},
                                   {3,4,6,6,6,6,4,3},
                                   {4,6,8,8,8,8,6,4},
                                   {4,6,8,8,8,8,6,4},
                                   {4,6,8,8,8,8,6,4},
                                   {4,6,8,8,8,8,6,4},
                                   {3,4,6,6,6,6,4,3},
                                   {2,3,4,4,4,4,3,2} };
    //переміщення, що запамятовує поточні координати знаходження коня
    int currentRow, currentColumn;
    //змінна, що визначає варіант ходу конем(від 0 до 7)
    int moveNumber = 0;
    //лічильник ходів конем
    int counter = 0;

    cout << "The array of accessibility!" << endl;
    printBoard(accessibility, hor, ver);

    //Вводимо координати знаходження коня по горизонталі
    cout << "Enter a horizontal coordinate(0 - 7): ";
    //збереження в перемінну
    cin >> currentRow;
    //Вводимо координати знаходження коня по вертикалі
    cout << "Enter a vertical coordinate(0 - 7): ";
    //сохранение данных ввода
    cin >> currentColumn;

    //змінні currentRow і currentColumn модифікуються для зміни доступностей, тому зберігаємо їх
    int mainRow = currentRow, mainColumn = currentColumn;
    //переменные для записи координат следующего хода конем
    int Row = 0;
    int Column = 0;

    //починаєм пошук рішення
    rekurciya(board, accessibility, horizontal, vertical, currentRow, currentColumn, moveNumber, counter, mainRow, mainColumn, Row, Column, hor, ver);

    //system("clear");
    //cout << "Show chessboard:" << endl;
    //виклик функції для друку массива, моделюючого шахівницю
    //printBoard(board,hor,ver);
    cout << "The End!" << endl;

    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << endl;
}

int pow(int a, int n)
{
    if (n == 0) return 1;
    if (n == 1) return a;
    else    return a * pow(a, n - 1);

}

void task4()
{
    cout << "Task4 : " << endl;
    cout << "Написать рекурсивную функцию нахождения степени числа." << endl;
    cout << endl;

    int digit = 0;
    int power = 0;

    cout << "Enter the digit: ";
    cin >> digit;
    cout << "Enter the power digit: ";
    cin >> power;

    cout << "Rezalt: " << pow(digit, power) << endl;

    cout << "------------------------------------------------------\n";
    cout << endl;
}

int star(int nn)
{
    if (nn > 0)
    {
        cout << "* ";

        return star(nn - 1);
    }
    else
        return 0;
}

void task5()
{
    cout << "Task5 : " << endl;
    cout << "Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. Проиллюстрируйте работу функции примером." << endl;
    cout << endl;

    int nn = 0;
    cout << "Enter the star : ";
    cin >> nn;
    cout << endl;

    star(nn);

    cout << endl;
    cout << "------------------------------------------------------\n";
    cout << endl;
}

int summ(int a, int b)
{

    return (a == b) ? b : a + summ(a + 1, b);

}

void task6()
{
    cout << "Task6 : " << endl;
    cout << "Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b. Пользователь вводит a и b. Проиллюстрируйте работу функции примером." << endl;
    cout << endl;

    int a = 0;
    int b = 0;

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    cout << "Rezalt: " << summ(a, b) << endl;

    cout << "------------------------------------------------------\n";
    cout << endl;

}

int rrand(int range_min, int range_max)
{
    return rand() % (range_max - range_min + 1) + range_min;
}

int min10(int a[], int MAX, int n, int& p)
{
    int s = 0;
    for (int i = n; i < n + 10; ++i) s += a[i];
    cout << "Position: " << n << "\t ==> Summa: " << s << endl;
    if (MAX - n == 10)
    {
        p = n;
        return s;
    }
    else
    {
        int s1 = min10(a, MAX, n + 1, p);
        if (s <= s1)
        {
            p = n;
            return s;
        }
        else return s1;
    }
}

void task7()
{
    cout << "Task7 : " << endl;
    cout << "Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел заполненных случайным образом и находит позицию," << endl;
    cout << "с которой начинается последовательность из 10 чисел, сумма которых минимальна." << endl;
    cout << endl;

    const int MIN = 1;
    const int MAX = 100;
    int a[MAX];
    int p;

    int con = 0;
    cout << "To continue enter the 0:";
    cin >> con;
    for (int i = 0; i < 10; ++i)
    {
        cout << setw(3) << i << " ";

    }
    cout << "\n---------------------------------------\n";
    for (int i = 0; i < MAX; ++i) a[i] = rrand(MIN, MAX);
    for (int i = 0; i < MAX; ++i)
    {
        cout << setw(3) << a[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << "---------------------------------------\n";

    min10(a, MAX, 0, p);
    cout << "---------------------------------------\n";
    cout << "Minimum position: " << p << endl;

    cout << "---------------------------------------\n";

}





int main()
{
    srand(time(0));

    SetConsoleCP(1251); // встановлення кодування Windows-1251 в  потік введення
    SetConsoleOutputCP(1251); // встановлення кодування Windows-1251 в  потік виведення

    task7();

    task1();

    task2();

    task3();

    task4();

    task5();

    task6();






    //system("pause");
    return 0;


}
