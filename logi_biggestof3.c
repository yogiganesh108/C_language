
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a Number: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is bigger",a);
    else if (b>c)
        printf("%d id bigger",b);
    else
        printf("%d is bigger",c);
    return 0;
}
