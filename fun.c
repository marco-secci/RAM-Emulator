#include "fun.h"
#include <stdbool.h>

// Returns true if the comparison is true;
// Returns false if the comparison is false.
bool cmp(int a, int b)
{
    if (a == b)
        return true;
    return false;
}

// Sets the address of the given value to 0 (the first available).
void set_zero(int a)
{
    int *ptr = &a;
    *ptr = 0;
}

// Goes one address forward.
int plus_one(int a)
{
    int *ptr = &a;
    return *ptr + 1;
}

// Assigns to an address the value of another memory address.
void equalizer(int a, int b)
{
    int *ptr_a = &a, *ptr_b = &b;
    ptr_b = ptr_a;
}