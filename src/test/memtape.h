#include <stdio.h>

// Tape of infinite length, representing an idea of the compiler's memory.
typedef struct
{
    // Register number:
    int *reg;
    // Value stored in the register:
    int *value;
    // Pointer to the next value in the tape:
    MemCell *next;
} *MemCell;
