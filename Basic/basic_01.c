#include <stdio.h>

int main()
{
    int a = 23;
    printf("%d\n", a);

    float c = 123456.123456;
    printf("%f\n", c);

    double b = 23.10e1;
    printf("%lf\n", b);

    char elf = 'A';
    printf("%c\n", elf);

    char name[40] = "gazi";
    printf("%s\n", name);

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(char));

    return 0;
}