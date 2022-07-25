#include <stdio.h>

enum DAY
{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int main(int argc, char const *argv[])
{
    enum DAY day;
    day = WED;
    printf("%d", day);
    return 0;
}
