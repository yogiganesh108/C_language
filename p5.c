#include <stdio.h>
void main()
{
        int i,j,n,count=0;
        printf("Enter n: ");
        scanf("%d",&n);
        for(i=1;n>=i;i++)
        {
            for(j=1;i>=j;j++)
                printf("%d\t",count++);
            printf("\n");
        }
}