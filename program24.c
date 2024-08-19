#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;                           //1
    while( iCnt<= iNo)                    //2
    {
        printf("Jay Hanuman...\n");     //4
        iCnt++;                         //3
    }

}
int main()
{   
    int iValue = 0;
    printf("Number of time you want to display Jay Hanuman on Screen : \n");
    scanf("%d", &iValue);  
    Display(iValue);
    return 0;
}


