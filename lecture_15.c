//logic 1
// #include<stdio.h>

// int main()
// {
//     int month;
//     printf("Enter the number of month\n");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1:
//         printf("month january\n days 31");
//         break;
//     case 2:
//         printf("month february\n days 28");
//         break;
//     case 3:
//         printf("month march\n days 31");
//         break;
//     case 4:
//         printf("month april\n days 30");
//         break;
//     case 5:
//         printf("month may\n days 31");
//         break;
//     case 6:
//         printf("month june\n days 30");
//         break;
//     case 7:
//         printf("month july\n days 31");
//         break;
//     case 8:
//         printf("month august\n days 31");
//         break;
//     case 9:
//         printf("month september\n days 30");
//         break;
//     case 10:
//         printf("month october\n days 31");
//         break;
//     case 11:
//         printf("month november\n days 30");
//         break;
//     case 12:
//         printf("month december\n days 31");
//         break;                                          
//     default:
//         printf("Invalid month");
//         break;
//     }
//     return 0;
// }

//***************Logic :2 

// #include<stdio.h>

// int main()
// {
//     int month;
//     printf("Enter the number of month\n");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//         printf("days 31");
//         break;
//     case 2:
//         printf("month february\n days 28");
//         break;
//         case 4:
//         case 6:
//         case 9:
//         case 11: 
//         printf("days 30");
//         break;                                
//     default:
//         printf("Invalid month");
//         break;
//     }
//     return 0;
// }

//Logic 3

//W.A.P which takes marks obtained in an exam
//(out of 100) from user and display the appropriate
//grade
// 90<marks<=100 A
// 80<marks<=90  B
// 70<marks<=80  C
// 60<marks<=70  D
// 50<marks<=60  E
// marks<=50     F

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d",&marks);
    switch(marks)
    {
    case 91 ... 100:
        printf("grade A");
        break;
    case 81 ... 90:
        printf("grade B");
        break;
    case 71 ... 80:
        printf("grade C");
        break;
    case 61 ... 70:
        printf("grade D");
        break;
    case 51 ... 60:
        printf("grade E");
        break;
    case 50:
        printf("grade F");
        break;
    default:
        printf("Invalid number");
    }
    return 0;
}