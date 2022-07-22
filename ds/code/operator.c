#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);
 
int main()
{
   int a = 21;
   int b = 10;
   int c ;
 
   c = a + b;
   printf("Line 1 - c vaule is %d\n", c );
   c = a - b;
   printf("Line 2 - c vaule is %d\n", c );
   c = a * b;
   printf("Line 3 - c vaule is %d\n", c );
   c = a / b;
   printf("Line 4 - c vaule is %d\n", c );
   c = a % b;
   printf("Line 5 - c vaule is %d\n", c );
   c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
   printf("Line 6 - c vaule is %d\n", c );
   c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
   printf("Line 7 - c vaule is %d\n", c );

   int d;
   int e = 10;
   d = e++; 
   printf("assignment first :\n");
   printf("Line 1 - d vaule is %d\n", d );
   printf("Line 2 - e vaule is %d\n", e );
   e = 10;
   d = e--; 
   printf("Line 3 - d vaule is %d\n", d );
   printf("Line 4 - e vaule is %d\n", e );
 
   printf("operator first :\n");
   e = 10;
   d = ++e; 
   printf("Line 5 - d vaule is %d\n", d );
   printf("Line 6 - e vaule is %d\n", e );
   e = 10;
   d = --e; 
   printf("Line 7 - d vaule is %d\n", d );
   printf("Line 8 - e vaule is %d\n", e );
 
}

void func1(void)
{
    int a = 5;
    int b = 20;
    int c ;

    if ( a && b )
    {
        printf("Line 1 - 条件为真\n" );
    }
    if ( a || b )
    {
        printf("Line 2 - 条件为真\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        printf("Line 3 - 条件为真\n" );
    }
    else
    {
        printf("Line 3 - 条件为假\n" );
    }
    if ( !(a && b) )
    {
        printf("Line 4 - 条件为真\n" );
    }
}

void func2(void)
{
    unsigned int a = 60;    /* 60 = 0011 1100 */  
    unsigned int b = 13;    /* 13 = 0000 1101 */
    int c = 0;           

    c = a & b;       /* 12 = 0000 1100 */ 
    printf("Line 1 - c 的值是 %d\n", c );

    c = a | b;       /* 61 = 0011 1101 */
    printf("Line 2 - c 的值是 %d\n", c );

    c = a ^ b;       /* 49 = 0011 0001 */
    printf("Line 3 - c 的值是 %d\n", c );

    c = ~a;          /*-61 = 1100 0011 */
    printf("Line 4 - c 的值是 %d\n", c );

    c = a << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - c 的值是 %d\n", c );

    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - c 的值是 %d\n", c );
}

void func3(void)
{
    int a = 21;
    int c ;

    c =  a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );

    c +=  a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );

    c -=  a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );

    c *=  a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );

    c /=  a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );

    c  = 200;
    c %=  a;
    printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );

    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );

    c >>=  2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );

    c &=  2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );

    c ^=  2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );

    c |=  2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
}