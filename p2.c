#include <stdio.h>
void main()
{
        int i,j,n;
        printf("Enter n: ");
        scanf("%d",&n);
        for(i=1;n>=i;i++)
        {
            for(j=1;i>=j;j++)
                printf("%c\t",j+64);
            printf("\n");
        }
}