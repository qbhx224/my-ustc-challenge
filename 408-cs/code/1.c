#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i < 5; i *= 2)
        for (int j = 0; j < i; j++)
            sum++;
    printf("sum = %d\n", sum);
    return 0;
}