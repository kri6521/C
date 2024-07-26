#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }
    printf("sum of harmonic series upto %d is %.2f\n", n, sum);

    return 0;
}