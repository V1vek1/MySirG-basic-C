//****Dry Run karke dekhna hai****

// #include<stdio.h>

// int main()
// {
//     int i,j;
//     for (i=1;i<5;i++)
//     for (j=i+1;j<=4;j++)
//       printf("%d ",2*j-1);
//     return 0;
// }

//*********************************
// #include<stdio.h>

// int main()
// {
//     int i=5,j=1;
//     while (i)
//     {
//         j=i*j;
//         i--;
//     }
//     printf("%d %d\n",i,j);
//     return 0;
// }

//**********************************
// #include<stdio.h>

// int main()
// {
//     int x=1,y=10;
//     while (x<y)
//     {
//         x++;
//         y--;
//     }
//         printf("%d %d",x,y);
//     return 0;
// }

//****************************************

#include<stdio.h>

int main()
{
    int i=2,x=36;
    while (x>1)
    {
    while (x%i==0)
    {
        x/=i;      //Compound Assign. Operator hai ye iska matlab h yha per x=x/i;
        printf("%d ",i);
    }
    i++;
    }
    return 0;
}