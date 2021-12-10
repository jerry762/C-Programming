#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    printf("Guess Number Game ! (number 1 ~ 100)\n");
    int random = 0, answer = 0, count = 1;
    char jud;
    srand(time(0));
    do
    {
        random = rand() % 100 + 1;
        while (1)
        {
            printf("input you guess:");
            scanf("%d", &answer);
            if (answer > random)
            {
                printf("Too big !\n");
                count++;
            }
            if (answer < random)
            {
                printf("Too small !\n");
                count++;
            }
            if (answer == random)
            {
                printf("Correct !\n\n");
                break;
            }
            if (count == 11)
            {
                printf("Failure !\n\n");
                break;
            }
        }

        printf("play again ? < y / n > :");
        fflush(stdin);
        scanf("%c", &jud);
        count = 1;

    } while (jud == 'y' || jud == 'Y');

    printf("exited !\n");
    system("pause");

    return 0;
}