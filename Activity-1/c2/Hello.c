#include <stdio.h>
#include <string.h>

void greet(char name[])
{
    printf("Welcome, %s!\n", name);
}

int main()
{
    char name[] = "Poornima";

    greet(name);

    return 0;
}