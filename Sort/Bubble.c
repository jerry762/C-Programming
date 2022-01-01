#include <stdio.h>
#define length 10

int main()
{

    int a[length];

    for (int i = 0; i < length; i++)
    {
        printf("Enter number:");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length - 1; i++)
    {
        int temp = 0;

        for (int j = 0; j < length - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%3d ", a[i]);
    }
}