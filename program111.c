

#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i= iRow, j = iCol;

    if(iRow != iCol)
    {
        printf("Number of rows and colums should be same\n");   
        return;
    }

    for(i=1;i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((i == 1) || (j==1) || (i==iRow) || (j == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows: \n");
    scanf("%d", &iValue1);

    printf("Enter Number of Columns: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;

}