#include <stdio.h>
void main()
{
        int i,j;
        printf("Enter n: ");
        scanf("%d",&i);
        for(;i>=1;i--)
        {
            for(j=1;i>=j;j++)
                printf("%d\t",j);
            printf("\n");
        }
}