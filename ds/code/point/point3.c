#include <stdio.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

int main(int argc, char const *argv[])
{
    int (*p)(int, int) = & max;
    int a, b, c, d;

    printf("input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("max number is : %d\n", d);
    return 0;
}
