#include <stdio.h>

int main()
{
    int published, impact;
    scanf("%d %d", &published, &impact);
    printf("%d\n", published * (impact - 1) + 1);
}