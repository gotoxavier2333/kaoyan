#include <stdio.h>

int a = 20;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int c = 0;
    int sum(int, int);

    printf("value of a in main() = %d\n", a);
    c = sum(a, b);
    printf("value of c in main() = %d\n", c);
    
    return 0;
}

int sum(int a, int b)
{
    printf("value of a in sum() = %d\n", a);
    printf("value of a in sum() = %d\n", b);
    return a + b;
}