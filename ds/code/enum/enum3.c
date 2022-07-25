#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    enum color {red=1, green, blue};

    enum color favorite_color;

    printf("1. red, 2. green, 3. blue: ");
    scanf("%u", &favorite_color);

    switch (favorite_color)
    {
    case red:
        printf("your favorte_color is red");
        break;
    case green:
        printf("your favorte_color is green");
        break;    
    case blue:
        printf("your favorte_color is blue");
        break;    
    default:
    printf("your favorte_color is null");

    }

    return 0;
}
