#include <iostream> 
#include <iomanip>
#include <time.h> 

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)

        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;

    cout << endl;
}

int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int main()
{
    srand((unsigned)time(NULL));  // ініціалізація генератора випадкових чисел 

    int n;
    cout << "n = "; cin >> n;
    int* a = new int[n];

    int Low;
    int High;
    cout << "Low = "; cin >> Low;
    cout << "High ="; cin >> High;

    Create(a, n, Low, High);
    Print(a, n);

    cout << "max = " << Max(a, n) << endl;
    cout << "min = " << Min(a, n) << endl;
    cout << "X = " << (Min(a, n) + Max(a, n)) / 2 << endl;
    delete[] a;

    return 0;
}
