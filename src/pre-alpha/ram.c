#include <stdio.h>

// Internal files:
#include "fun.h"
#include "ram.h"

int sum(int a, int b)
{
q0:
    if (cmp(a, b))
        goto q99;

    else
        goto q1;

q1:
    plus_one(a);
    goto q0;

q99:
    return a;
}
