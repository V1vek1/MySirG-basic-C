// #include<stdio.h>

// int main()
// {
//     int a,b;
//     for (a=1;a<=5;a++)
//     {
//         for ( b=1;b<=2*a-1;b++)
//         printf("%d",b);
//         printf("\n");
        
//     }
    
//     return 0;
// }

//W.A.P to check whether a given number is prime or not
// #include<stdio.h>

// int main()
// {
//     int a,n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if (a%a==0 && a%1==0)
//     {
//         printf("This is prime number%d",n);
//     }
//     else
//     {
//         printf("Not prime number");
//     }
//     return 0;
// }


//*****Logic 1

// #include<stdio.h>

// int main()
// {
//     int n,i;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for (i=2;i<n;i++)
//     if (n%i==0)
//        break;
//     if(i==n)
//        printf("This is prime number");
//     else
//     printf("This is not a prime number");     
//     return 0;
// }

//Logic 2
#include<stdio.h>

int main()
{
    int n,i,s;
    printf("Enter the number");
    scanf("%d",&n);
    s=sqrt(n);
    for (i=2;i<=s;i++)
    if (n%i==0)
       break;
    if(i==s+1)
       printf("This is prime number");
    else
    printf("This is not a prime number");     
    return 0;
}