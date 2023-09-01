#include<stdio.h>
int main()
{
    int amount, total, notes100, notes10, notes2, notes1;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes100= amount/100;
    amount= amount%100;

    notes10= amount/10;
    amount= amount%10;

    notes2= amount/2;
    amount= amount%2;

    notes1= amount/1;
    amount= amount%1;

    total= notes100+ notes10+ notes2+ notes1;
    printf("Total numbers of notes: %d\n", total);
    printf("100 tk notes: %d\n10 tk notes: %d\n2 tk notes: %d\n1 tk notes: %d\n", notes100, notes10, notes2, notes1);
    return 0;
}
