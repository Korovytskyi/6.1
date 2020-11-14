#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* P, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        P[i] = Low + rand() % (High - Low + 1);
}

void Print(int* P, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << P[i];
    cout << endl;
}

int Sum(int* P, const int size)
{
    int j = 0;
    int S = 0;
    for (int i = 0; i < size; i++)
        if ((P[i] > 0) || (i % 2 == 0))
            S += P[i];
    return S;
}

void Replacing(int* P, const int size)
{
    for (int i = 0; i < size; i++)
        if ((P[i] > 0) || (i % 2 == 0))
            cout << 0 << "  ";
        else
            cout << P[i] << "  ";
}

int Count(int* P, const int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
        if ((P[i] > 0) || (i % 2 == 0))
            j++;
    return j;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int P[n];
    int j;

    int Low = -10;
    int High = 14;

    Create(P, n, Low, High);
    cout << "Original masive" << endl;
    Print(P, n);
    cout << endl;

    cout << "Calculating sum" << endl;
    cout << "S = " << Sum(P, n) << endl;
    cout << endl;

    cout << "Calculating count" << endl;
    cout << "j = " << Count(P, n) << endl;
    cout << endl;

    cout << "Replaced elements" << endl;
    Replacing(P, n);
    cout << endl;

    system("pause");
    return 0;
}