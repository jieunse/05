#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c;
    int num = 0;

    printf("Input characters : ");

    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            num++;
    }

    printf("The number of digit is %i.\n", num);

    system("PAUSE");
    return 0;
}