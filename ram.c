#include <stdio.h>

c(int *ptr, int *cmp)
{
}

int main(void)
{
    int x = 3;
    int y = 1;
    int k = 0;
    int z = 0;

    c(&x, &k);
    for (int i = 0; i < y; i++)
    {
        x++;
    }

    for (int i = 1; i < 5; i++)
    {
        k++;
    }
    return k;
}
