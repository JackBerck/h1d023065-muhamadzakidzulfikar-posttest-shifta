#include <stdio.h>

#define true 0
#define false 1

int main(void)
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int left = 0;
    int right = 9;
    int middle = 0;
    int number = 0;
    int bsearch = false;
    int i = 0;

    printf("ARRAY: ");
    for (i = 1; i <= 10; i++)
    {
        printf("[%d], i");
    }
    printf("\n Nomor yang dicari: ");
    scanf("%d", &number);

    while (bsearch == false && left <= right)
    {
        middle = (left + right) / 2;

        if (number == array[middle])
        {
            bsearch = true;
            printf("** ketemu **");
        }
        else
        {
            if (number < array[middle])
                right = middle - 1;
            if (number > array[middle])
                left = middle + 1;
        }
    }

    if (bsearch == false)
    {
        printf("-- Nomor Tidak Ditemukan --\n");
        return 0;
    }
}