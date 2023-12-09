#include "instruction.h"
#include "memtape.h"
#include <stdio.h>
// Zero instruction: The selected register's value is overwritten by a 0.
void z(MemCell memcell, int reg)
{
    while (memcell->reg != reg)
    {
        memcell = memcell->next;
    }
    if (memcell->reg == reg)
        memcell->value = 0;        
}

