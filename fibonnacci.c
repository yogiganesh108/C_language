#include <stdio.h>

int main()
{
    int f1=0,f2=1,f3,i=0,n;
    scanf("%d",&n);
    printf("%d\t%d\t",f1,f2);
    while(n>i)
    {
        f3=f1+f2;
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
        i++;
    }

    return 0;
}
