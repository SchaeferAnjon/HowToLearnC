#include <stdio.h>

int a = 20;

int sum(int a, int b);

int main()
{
    int a = 10;
    int b = 20;

    

    printf(" value of a in main() = %d\n", a);
    int c = sum(a, b);
    printf("value of c in main() = %d\n", c);
}

int sum(int a, int b)
{
    printf("sum value of a in sum() = %d\n", a);
    printf("sum value of b in sum() = %d\n", b);
    int c = a + b;
    return c;
}