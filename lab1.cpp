#include <iostream>
#include <fstream>
#include <time.h>
#define n 500 //размер решетки
#define m 3 //число дислокаций
using namespace std;

//генерация рандомных чисел
int random(int k) {
    float f = (rand() % n);
    return f;
}

int main()
{ 
    srand(time(NULL));
    ofstream outf("task1.txt", ios::app);

    int A[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = 1;
        }
    }

    int x = random(n);
    int y = random(n);
    A[x][y] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j];
        }
        cout << "\n";
    }
    bool end = 0;
    for (int step = 0; !end; ++step) {
        if ((x == 0) || (x == n - 1) || (y == 0) || (y == n - 1)) {
            outf << n << " " << step << "\n";
            end = 1;
        }
        else {
            int v = random(4);
            if (v == 0) {
                x++;
            }
            if (v == 1) {
                x--;
            }
            if (v == 2) {
                y++;
            }
            if (v == 3) {
                y--;
            }
        }
    }


}
