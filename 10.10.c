#include<stdio.h>
intmain()
{
    int n,a,product=1;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        product=prodcut*a;
        n=n/10;
    }
        printf("%d",product);
        return 0;
    }
    
