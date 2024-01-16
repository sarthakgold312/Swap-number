#include<stdio.h>
int main()
{
    int a,b;

    // enter two integer
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);

    // before swapping values:
    printf("\nBefore swapping values are \n A=%d\n B=%d",a,b);
    int temp = a;                // swapping...
            a = b;
          b = temp;

    // after swapping values:
    printf("\nAfter swaping values are \n A=%d\n B=%d",a,b);
    return 0;
}