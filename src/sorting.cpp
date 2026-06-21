#include "../include/sorting.h"
#include <iostream>

using namespace std;

void tampilkan_larik(int data[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
        cout << data[i] << " ";
    cout << "\n";
}

int partisi(int data[], int awal, int akhir)
{
    int i, j, simpan;
    i = awal;
    j = akhir;
    while (1)
    {
        while (data[i] < data[awal])
            i = i + 1;

        while (data[j] > data[awal])
            j = j - 1;

        if (i < j)
        {
            // tukarkan data
            simpan = data[i];
            data[i] = data[j];
            data[j] = simpan;
        }
        else
            return j;
    }
}

void quick_sort(int data[], int awal, int akhir)
{
    int q;
    if (awal < akhir)
    {
        q = partisi(data, awal, akhir);
        quick_sort(data, awal, q);
        quick_sort(data, q + 1, akhir);
    }
}