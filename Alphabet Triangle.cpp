#include<stdio.h>
 
int main()
{
        int i,j;
        
        printf("<Enis OZBEK>\n");
        
        for(i=1;i<=5;i++)
        {	
            for(j=1;j<=5-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%c",(j+64));
            }
            for(j=i-1;j>=1;j--)
            {
                printf("%c",(j+64));
            }
            printf("\n");
        }
}
