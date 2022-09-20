//********print *
//              **
//              ***
//              ****
// #include<stdio.h> 

// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//     {
//        for (j=1;j<=4;j++)
//        {
//            if (j<=i)
//                printf("*");
//            else
//             printf("$");// chahe to dusra Symbol bhi print kar sakte h 
//        }
//        printf("\n");
//     }
    
//     return 0;
// }

//*********Print    *
            //     ***
            //    *****
            //   *******
            //  *********

// #include<stdio.h>

// int main()
// {
//     int i,j;
//     for (i=1;i<=5;i++)
//     {
//        for (j=1;j<=9;j++)
//        {
//            if(j>=6-i && j<=4+i)
//                printf("*");
//            else
//             printf(" ");// chahe to dusra Symbol bhi print kar sakte h 
//        }
//        printf("\n");
//     }
//         return 0;
// }

//********Upper Ques. by User input******

// #include<stdio.h>

// int main()
// {
//     int i,j,lines;
//     printf("Enter the number");
//     scanf("%d",&lines);

//     for (i=1;i<=lines;i++)
//     {
//        for (j=1;j<=2*lines-1;j++)
//        {
//            if(j>=lines+1-i && j<=lines-1+i)
//                printf("*");
//            else
//             printf(" ");// chahe to dusra Symbol bhi print kar sakte h 
//        }
//        printf("\n");
//     }
//         return 0;
// }

//***Logic :-3

#include<stdio.h>

int main()
{
    int i,j,lines,k;
    printf("Enter the number");
    scanf("%d",&lines);

    for (i=1;i<=lines;i++)
    {     k=1;
       for (j=1;j<=2*lines-1;j++)
       {
           if(j>=lines+1-i && j<=lines-1+i)
             {
               printf("%3d",k);
               if(j<lines)
                  k++;
               else
                  k--;
             }
           else
            printf("  ");// chahe to dusra Symbol bhi print kar sakte h 
       }
       printf("\n");
    }
        return 0;
}