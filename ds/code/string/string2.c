#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[14] = "runoob";
    char str2[14] = "google";
    char str3[14];

    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );

    /* 连接 str1 和 str2 */
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );

    /* 连接后，str1 的总长度 */
    int len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );
    return 0;
}
