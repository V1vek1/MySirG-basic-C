//***********Yeh Lecture important h**********
//*******Logic 1*************
// #include<stdio.h>

// int main()
// {
//     int x=(1,2,3);
//     while (x)
//     {
//         printf("%d ",x);
//         x--;
//     }
    
//     return 0;
// }

//********Logic 2********** 

// #include<stdio.h>

// int main()
// {
//     int x;
//     x=(1,2,3);
//     while (x)
//     {
//         printf("%d ",x);
//         x--;
//     }
    
//     return 0;
// }

// //*******Logic 3********** 

// #include<stdio.h>

// int main()
// {
//     int x;
//     x=1,2,3;
//     while (x)
//     {
//         printf("%d ",x);
//         x--;
//     }
    
//     return 0;
// }

//W.A.P to calculate sum of first N odd Natural numbers
// #include<stdio.h>

// int main()
// {
//     int n,i,s=0;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for(int i=1;n>=i;i++)
//     {
//         s=s+2*i-1;
//     }
//     printf("Sum is %d ",s);
//     return 0;
// }

//*******Dry Run*********
// #include<stdio.h>

// int main()
// {
//     int x=128;
//     for(;x;x>>=1)    //>> isko x rightshift assign 1 padenge iska mtlb bhi yehi h
//     printf("%d ",x);
//     return 0;
// }

//*******Dry Run*********

#include<stdio.h>

int main()
{
    int x=1,a,s;
    for (s=0,a=5;a;x<<=1,a--)
    {
        s=s+x;
    }
    printf("%d ",s);
    return 0;
}