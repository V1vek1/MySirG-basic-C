//******Dry Run********
// #include<stdio.h>

// int main()
// {
//     int i=1;
//     do
//     {
//         printf("%d",i);
//         i++;
//     }while(i=i-2);  //NOTE:- 0 is false in programming as we know
//     return 0;
// }

//********W.A.P to reverse a given number*******

// #include<stdio.h>

// int main()
// {
//     int n,x=0,k;
//     printf("Enter the number");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         k=n%10;
//         x=x*10+k;
//         n=n/10;
//     }
//     printf("%d",x);
//     return 0;
// }

#include<stdio.h>

int main()
{
    int n,x=0,k,count=0,lock=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        k=n%10;
        if(k==0&&lock)
           count++;
        else
           lock=0;
        x=x*10+k;
        n=n/10;
    }
    while(count--)
      printf("%c",0);
    printf("%d",x);
    return 0;
}