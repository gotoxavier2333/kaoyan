#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 20;
    int *ip;

    ip = &var;

    printf("var address : %p\n", &var);

    printf("ip address : %p\n", ip);

    printf("*ip vaule : %d\n", *ip);

    return 0;
}