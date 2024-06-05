#include <iostream>
using namespace std;

// Fungsi Linear Search
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, m, x;
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    // Input array A
    for (int i = 0; i < n; i++)
    {
        cin >> array_A[i];
    }

    // Input array B
    for (int i = 0; i < m; i++)
    {
        cin >> array_B[i];
    }

    // Input nilai yang dicari
    cin >> x;

    // Pencarian
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);

    // Output hasil pencarian : Isilah Output sesuai Deskripsi Soal
    // ...

    return 0;
}