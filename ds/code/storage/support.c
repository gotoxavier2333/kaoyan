#include <stdio.h>

extern int count1;

void write_extern(void)
{
    printf("count is %d\n", count1);
}