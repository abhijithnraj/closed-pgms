#include<stdio.h>

void main()
{
        int a,b,i,j;
        int p=1;

        printf("Enter the two limits smaller and then larger (a and b ,where a<b)");
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {   if(a==1)
        {
            printf(" 1 is neither prime nor composite\n");
            i++;
            a++;
        }
            p=1;
            for (j=2;j<i;j++)
            {
                if(i%j==0)
                {
                p=0;
                break;
                }
            }

            if(p==1)
            printf("\n%d",i);
        }
}
