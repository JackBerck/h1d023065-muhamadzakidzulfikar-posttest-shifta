#include <stdio.h>

void changeValue(int *arr, int val, int sumVal)
{
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == val)
        {
            arr[i] += sumVal;
        }
    }
}

int main()
{
    // Definisikan array dan pointer yang digunakan
    int arr[6] = {1, 6, 13, 16, 25, 26};

    // Cetak isi array sebelum perubahan
    printf("Daftar halaman Sebelum Perubahan: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    // Ubah value pada array
    // BAB 2 bertambah 2 halaman
    changeValue(arr, 6, 2);
    // BAB 3 bertambah 3 halaman
    changeValue(arr, 13, 3);
    // BAB 5 bertambah 1 halaman
    changeValue(arr, 25, 1);

    // Cetak isi array setelah perubahan
    printf("\nDaftar Halaman Setelah Perubahan: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}