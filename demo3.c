#include <stdio.h>
void main()
{
    int i,c,n;
    printf("enter a number");
    scanf("%d",&n);
    c+0;
    for(i=1;i<=n;i++)
        if(n%i==0)
        c++;
    if(c==2)
        printf("\n prime");

    else
        printf("\nNot prime");

}
