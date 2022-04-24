#include <stdio.h>
void main()
{
        int i,j,n;
        printf("Enter n: ");
        scanf("%d",&n);
        for(i=1;n>=i;i++)
        {
            for(j=1;n>=j;j++)
                printf("%d\t",i);
            printf("\n");
        }
}

