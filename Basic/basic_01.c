#include <stdio.h>

int main()
{
    char name[50];

    // Ask for user input
    printf("Enter your name: ");
    scanf("%s", name);

    // Display output
    printf("Hello, %s! Welcome to C programming.\n", name);

    return 0;
}
