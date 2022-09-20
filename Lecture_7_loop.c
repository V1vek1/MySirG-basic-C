//W.A.P to print first 10 natural number
// #include<stdio.h>

// int main()
// {
//     for (int i=1;i<=10; i++)
//     {
//         printf("%d\n",i--);
//     }
//       return 0;
// }

//*********W.A.P to print reverse of first 10 natural number******
//Logic:- 1
// #include<stdio.h>

// int main()
// {
//     for(int i=10;i>=1;i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }

//*********W.A.P to print reverse of first 10 natural number******
//Logic:-2

// #include<stdio.h>

// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//     printf("%d\n",11-i); 
//     i++;
//     }
//     return 0;
// }

//W.A.P to print first N odd natural number
// Logic :-1
// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=1;i<2*n;i++)
//     {
//         if (i%2!=0)
//         {
//            printf("%d\n",i);
//         }
        
//     }
//     return 0;
// }

//Logic :- 2

#include<stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
           printf("%d\n",2*i-1);
    }
    return 0;
}