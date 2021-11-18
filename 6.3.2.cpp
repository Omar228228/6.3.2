#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CreateArray(int* a, const int n, int Low, int High, int i) {
    a[i] = Low + rand() % (High - Low + 1);

    if (i < n - 1)
    {
        CreateArray(a, n, Low, High, i + 1);
    }
}

template<typename T>
void CreateArray(T* a, const int n, int Low, int High, int i) {
    a[i] = (T)Low + rand() % (High - Low + 1);

    if (i < n - 1) 
    {
        Create(a, n, Low, High, i + 1);
    }
}

void PrintArray(int* a, const int n, int i) {
    cout << setw(4) << a[i];

    if (i < n - 1) 
    {
        PrintArray(a, n, i + 1);
    }
    else
        cout << endl;
}

template <typename T>
void PrintArray(T* a, const int n, int i) {
    cout << setw(4) << a[i];

    if (i < n - 1) 
    {
        Print(a, n, i + 1);
    }
    else
        cout << endl;
}

int Min(int* a, const int n, int min, int i) {
    if (a[i] < min) 
    {
        min = a[i];
    }
    if (i < n - 1) 
    {
        return Min(a, n, min, i + 1);
    }
    else
        return min;
}

template <typename T>
int Min(T* a, const int n, int min, int i) {
    if (a[i] < min) 
    {
        min = a[i];
    }
    if (i < n - 1) 
    {
        return Min(a, n, min, i + 1);
    }
    else
        return min;
}

int main()
{
    srand((unsigned)time(NULL));

    int n;

    cout << "n = "; cin >> n;

    int* a = new int[n];

    int Low;

    cout << "Low = "; cin >> Low;

    int High;

    cout << "High = "; cin >> High;

    CreateArray(a, n, Low, High, 0);

    PrintArray(a, n, 0);

    cout << " min = " << Min(a, n, 0, 0) << endl;

    delete[] a;

    a = nullptr;

    return 0;
}