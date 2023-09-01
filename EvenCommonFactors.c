#include<stdio.h>
int main()
{
    int a, b, i, min, count=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        min=a;
    else
        min= b;
    printf("Common even factors: ");
    for(i=2; i<=min; i++)
    {
        if(a%i==0 && b%i==0 && i%2==0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nThere are %d even common factors.\n", count);
}

