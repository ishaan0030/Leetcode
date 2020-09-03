#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max_of_four(int, int, int, int);

int main()
{
    int a, b, c, d, max;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    max = max_of_four(a, b, c, d);
    printf("%d", max);
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    int max = 0;
    if (a > b && a > c && a > d)
    {
        max = a;
    }
    else if (b > a && b > c && b > d)
    {
        max = b;
    }
    else if (c > a && c > b && c > d)
    {
        max = c;
    }
    else if (d > a && d > b && d > c)
    {
        max = d;
    }
    return max;
}