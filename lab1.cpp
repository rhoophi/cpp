#include <iostream>
#define n 5 //размер решетки
#define m 3 //число дислокаций
using namespace std;

//генерация рандомных чисел
int random(int k) {
    srand(time(NULL));
    int f = (rand() % m);
    return f;
}

int main()
{ 
    int A[n][n] = {
        { 1, 1, 1, 1 ,1},
        { 1, 1, 1, 1 ,1},
        { 1, 1, 1, 1 ,1},
        { 1, 1, 1, 1 ,1},
        { 1, 1, 1, 1 ,1} };

    int x = random(n);
    int y = random(n);
    A[x][y] = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j];
        }
        cout << "\n";
    }
    
}
