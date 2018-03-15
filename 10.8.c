# include<stdio.h>
int main()
{
    int n,a[10],i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Enter a value");
        scanf("%d",&a[i]);
        if(a[i]!=i)
        {
            printf("%d",i);
            break;
        }
    }
     return 0;
}
    
    
