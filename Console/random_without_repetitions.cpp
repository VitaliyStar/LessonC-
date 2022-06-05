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

//#include  <conio.h> //for linux no work
using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 0; ; ++i)
    {
        // Завдання 1:
        cout << "Program 1." << endl;

        char s = 0;

        const int ROW = 8, COLUMN = 6;
        int MAS[ROW][COLUMN];
        int array1[ROW * COLUMN + 1];  // create an array in which the index array1 [k] will be stored 0 or 1
        int k; // proper index [k]

        for (int g = 0; g < ROW*COLUMN + 1; g++) {
            array1[g] = 0; 
        } // reset the array

        srand(time(NULL));
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COLUMN; j++)
            {

                //uniqueness check
                while (true)
                {
                    k = rand() % 52 + 1;
                    if (array1[k] == 0) { 
                        array1[k] = 1; MAS[i][j] = k; 
                        break; 
                    }
                }
                cout << setw(4) << MAS[i][j] << "  ";
            }
            if (i == (ROW / 2 - 1) ) {
                cout << endl;
                cout << "----------------------------------";
            }
            cout << endl;
            
        }

        //cout << endl;
        cout << "----------------------------------\n";
        cout << "Enter symbol Q to exit, to continue press 0: ";
        cin >> s;
        cout << endl;
        if (s == 'q')
        {
            cout << "Exit!" << endl;
            break;
        }
    }
    cout << endl;
    return 0;
}
