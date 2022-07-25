#include <stdio.h>
#include <string.h>

struct 
{
    unsigned int widthValidated;
    unsigned int heightValidate;
} status1;

struct 
{
    unsigned int widthValidate : 1;
    unsigned int heightValidate : 1;
} status2;

int main(int argc, char const *argv[])
{
    printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %d\n", sizeof(status2));
    return 0;
}

