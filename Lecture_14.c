//Print   ABCDEDCBA
//        ABCD DCBA
//        ABC   CBA
//        AB     BA
//        A       A

#include<stdio.h>

int main()
{
    int i,j,lines,k;
    printf("Enter the number");
    scanf("%d",&lines);

    for (i=1;i<=lines;i++)
    {     k='A';
       for (j=1;j<=2*lines-1;j++)
       {
           if(j<=lines+1-i || j>=lines-1+i)
             {
               printf("%c",k);
               j<lines?k++:k--;
             }
           else
           {
            printf(" ");// chahe to dusra Symbol bhi print kar sakte h 
              if (j==lines)
              k--;
           }
           }
       printf("\n");
    }
        return 0;
}