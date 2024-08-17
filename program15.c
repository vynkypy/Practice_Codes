#include<stdio.h>

int DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks >100.0f))    //Filter -- Input validation
    {
        return 1;
    }
    
    
    else if ((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage: ");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);

    if(iRet == 1)
    {
        printf("Your Input is Invalid \n");

    }
    else if(iRet == 2)
    {
        printf("Student is FAIL in exam\n");

    }
    else if(iRet == 3)
    {
        printf("Student is PASS in exam\n");

    }

    return 0;
}
