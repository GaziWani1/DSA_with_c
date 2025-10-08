#include <stdio.h>

// A function is a named block of code that performs a specific task.
void hello()
{
    printf("Hello World\n");
}

// return_type function_name(parameter_list)
int square(int x)
{
    return x * x;
}

int main()
{
    hello();
    int sq = square(3);
    printf("%d\n", sq);
    return 0;
}