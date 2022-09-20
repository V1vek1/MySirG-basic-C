//************W A P to print 3 greatest number**************
//Logic 1
// #include<stdio.h>

// int main()
// {
//    int a,b,c;
//    printf("Enter the number");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>=b && a>=c)
//    {
//       printf("%d",a);
//    }
//    else if(b>=a && b>=c)
//    {
//       printf("%d",b);
//    }
//    else if(c>=a && c>=b)
//    {
//       printf("%d",c);
//    }
//    return 0;
// }
//This is the right logic and program......
//Logic 2
// #include<stdio.h>

// int main()
// {
//    int a,b,c;
//    printf("Enter the number");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>b)
//    {
//       if(a>c)
//       printf("%d",a);
//       else
//       printf("%d",c);
//    }
//    else
//    {
//       if(b>c)
//       printf("%d",b);
//       else
//       printf("%d",c);
//    }
//    return 0;
// }

//Logic 3:- Using of conditional Operators
// #include<stdio.h>

// int main()
// {
//    int a,b,c;
//    printf("Enter the number");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>b)
//    a>b?printf("%d",a):printf("%d",c);
//    else
//    b>c?printf("%d",b):printf("%d",c);
//    return 0;
// }

//Logic 4:- 
// #include<stdio.h>

// int main()
// {
//     int a,b,c;
//     printf("Enter the number");
//     scanf("%d %d %d",&a,&b,&c);
//     a>b?a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c);
//     return 0;
// }

//Logic 5:- using of expression 
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the number");
    scanf("%d %d %d",&a,&b,&c);       //note:- printf me hum koi bhi expression store kar sakte h 
    printf("%d",a>b?a>c?a:c:b>c?b:c);
    return 0;
}