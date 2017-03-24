#include<stdio.h>

main()
{

    int n,sum=0,i;

    printf("\n Enter the limit(n):\n");

    scanf("%d",&n);

    for(i=0;i<=n;++i)
    {
        sum=sum+i;
    }

    printf("\nThe sum of %d natural nos is %d",n,sum);
}
