//****W.A.P to print English Alphabets in lower case****
// #include<stdio.h>

// int main()
// {
//     for ( char i='a'; i<='z';i++)
//     {
//         printf("%c ",i);
//     }   
//     return 0;
// }

//****W.A.P to calculate the sum of first N natural Number****
//Logic 1
// #include<stdio.h>

// int main()
// {
//     int i,s=0,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for ( i=1;i<=n;i++)
//     {
//        s=s+i;
//     }
//       printf("sum is %d\n",s);
//     return 0;
// }

//Logic 2
// #include<stdio.h>

// int main()
// {
//     int i,s,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for ( i=1,s=0;i<=n;s=s+i,i++)
//     {  
       
//     }
//       printf("sum is %d\n",s);
//     return 0;
// }

//****W.A.P to print first N terms of the series:- 1,3,6,10,15....****
// #include<stdio.h>

// int main()
// {
//     int i,s,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for ( i=1,s=0;i<=n;i++)
//     {  
//         s=s+i;
//        printf("%d",s);
//     }
//       //printf("sum is %d\n",s);
//     return 0;
// }

//****W.A.P to print first N terms of the series:- 2 5 10 17 26....****

#include<stdio.h>

int main()
{
  int i,s,n;
  printf("Enter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",i*i+1);
  }
  return 0;
}
