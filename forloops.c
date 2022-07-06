 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    if (a < 1 || b < a || a >= 10000000)
    {
        return 0;
    }

    char *numbersChars[19] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n < b + 1; n++)
    {
        if (n <= 9)
        {
            for (int i = 0; i < 9; i++)
            {
                if (n == atof(numbersChars[i]))
                {
                    printf("%s\n", numbersChars[i + 9]);
                }
            }
        }
        if (n > 9)
        {
            if (n % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
    return 0;
}
