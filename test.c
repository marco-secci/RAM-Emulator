#include <stdio.h>

void main()
{
    int x = 25;
    int y = 11;
    int k = 0;
    int z = 1;
    int t = 0;

    while (t != y)
    {

        if (z == x)
        {
            x = k;
            k = 0;
            z = 1;
            t++;
        }
        else
        {
            z++;
            k++;
        }

        printf("x: %d y: %d k: %d z: %d t: %d\n", x, y, k, z, t);
    }
    return x;
}