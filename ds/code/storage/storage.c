#include <stdio.h>

int count1;
extern void write_extern();
void func1(void);

static int count = 10;

int main(int argc, char const *argv[])
{
    while (count--) {
        func1();
    }
    count1 = 5;
    write_extern();
    return 0;
}

void func1(void)
{
    static int thingy = 5;
    thingy++;
    printf(" thingy is %d, count is %d\n", thingy, count);
}
