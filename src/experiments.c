#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void fflush_experiment()
{
    char str[20] = "";
    for (int i = 0; i < 2; i++)
    {
        char curr[20];
        scanf("%s", curr);
        //printf("%s\n", str);

        strcat(str, curr);

        fflush(stdin);
    }

    printf("%d", strlen(str));
}
*/

/*

int tisCube(int x)
{
    for (int i = 0; i < x; i++)
    {
        if (pow(i, (1/3)) == x){
            return 1;
        }
    }

    return 0;
}
*/

int isPerfectCube(long long num)
{
    long long left = 0;
    long long right = num;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long cube = mid * mid * mid;
        if (cube == num) {
            return 1;
        }
        else if (cube < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return 0;
}

int main()
{
    for (long long i = 0; i < 1000000000; i++)
    {
        long long a = pow(i, 3) + pow(i + 1, 3) + pow(i + 2, 3);

        printf("Check: a = %lli, b = %lli, c = %lli\n", i, i + 1, i + 2);


        if (isPerfectCube(a))
        {
            printf("Solution: a = %lli, b = %lli, c = %lli\n", i, i + 1, i + 2);
            int wa;
            scanf("%d", &wa);
        }
    }
}