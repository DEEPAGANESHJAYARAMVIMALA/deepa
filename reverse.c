#include <stdio.h>
int main()
{
    int n, reversednumber = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n%10;
        reversednumber = reversednumber*10 + rem;
        n /= 10;
    }

    printf("Reversed Number = %d", reversednumber);

    return 0;
}
