#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
