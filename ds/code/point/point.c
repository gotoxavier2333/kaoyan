#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var_runoob = 10;
    int *p;
    p = &var_runoob;

    printf("var_runoob var address : %p\n", p);
    
    return 0;
}
