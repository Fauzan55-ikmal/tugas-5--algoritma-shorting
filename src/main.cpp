#include "../include/sorting.h"
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, data[100];

    cout << "masukkan banyak data= ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "data ke-" << i << " = ";
        cin >> data[i];
    }

    cout << "Data sebelum diurut: " << endl;
    for (j = 1; j <= n; j++)
    {
        cout << data[j] << " ";
    }

    quick_sort(data, 1, n);

    // hasil pengurutan
    cout << endl;
    cout << endl;
    cout << "hasil pengurutan:\n";
    tampilkan_larik(data, n);

    return 0;
}