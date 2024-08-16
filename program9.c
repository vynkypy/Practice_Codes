// #include<stdio.h>
// #include<stdbool.h>
// //Algorithm
// //User is going to give only positive input
// /*
//     START
//         Accept one number as No
//         Divide that number by 3
//         If reminder is 0 
//         then display the result as Even Number
//         otherwise display the result as Odd Number
//     STOP
// */

// ////////////////////////////////////////////////////////////////////////


// bool CheckEvenOdd(unsigned int iNo)
// {
//     if(((iNo%3) == 0) && ((iNo % 5)== 0))
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }    
// }
// int main()
// {
//     unsigned int iValue = 0;
//     bool bRet = false;

//     printf("Enter Number : \n");
//     scanf("%d", &iValue);

//     bRet = CheckEvenOdd(iValue);

//     if(bRet == true)
//     {
//         printf("%d is divisible by 3 and 5 \n", iValue);
//     }
//     else
//     {
//         printf("%d is not divisible by either 3 or 5  \n", iValue);

//     }
//     return 0;
// }


// /*
//     Log

// */


#include<stdio.h> 
#include<stdlib.h>
int main()
{
int size = 0; int *p = NULL;
int icnt = 0;
printf("Enter number of elements\n"); scanf("%d", &size);
p = (int *)malloc(size* sizeof(int));

printf("Please enter elements");
for (icnt = 0; icnt < size; icnt++)
{
}
scanf("%d",&p[icnt]);
printf("Enntered elements are");
for(icnt = 0; icnt < size; icnt++)
printf("%d", p[icnt]);
{
}
free(p);
return 0;
}




struct hello
{
    float f;
    int i;
};

#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct hello {
    float f;
    int i;
};


class       Demo
{
    public      static      void        main    (String     Args[])
    {
            System      .out        .println    ("Jay Ganesh...");
    }
}