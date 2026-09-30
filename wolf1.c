#include <stdio.h>
void main()
{
    int i,j,n,k,num;
    printf("Enter no.of rows in pascal traingle");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {

        printf(" ");
    }

    num=1;
    for(j=1;j<=i;j++)
        {
        printf(" %d",num);
        num=num*(i-j)/j;

    }
        printf("\n");
}
}

