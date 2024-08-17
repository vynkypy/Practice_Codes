/*
    0 to 35     Fail                            (35 is exclusive)                   
    35 to 50    Pass Class                      (50 is exclusive)
    50 to 60    Second Class                    (60 is exclusive)
    60 to 75    First Class                     (75 is exclusive)
    75 to 100   First Class with Distiction     (100 is exclusive)


*/

#include<stdio.h>

//User defined macro

#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3
#define RET_SECOND 4
#define RET_FIRST 5
#define RET_DISTINCTION 6


int DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks >100.0f))    //Filter -- Input validation
    {
        return RET_INVALID;
    }
    
    
    else if ((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if ((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
        return RET_PASS;
    }
    else if ((fMarks >= 50.0f) && (fMarks < 60.0f))
    {
        return RET_SECOND;
    }
    else if ((fMarks >= 60.0f) && (fMarks < 75.0f))
    {
        return RET_FIRST;
    }
    else if ((fMarks >= 75.0f) && (fMarks <= 100.0f))
    {
        return RET_DISTINCTION;
    }


}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage: ");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);

    switch(iRet)
    {
        case RET_FAIL:
            printf("Student is FAIL\n");
        break;
        
        case RET_PASS:  
            printf("Student is having PASS CLASS\n");
        break;
        
        case RET_SECOND:
            printf("Student is having SECOND CLASS\n");
        break;
        
        case RET_FIRST:
            printf("Student is having FIRST CLASS\n");
        break;

        case RET_DISTINCTION:
            printf("Student is having FIRST CLASS with DISTINCTION\n");
        break;

        case RET_INVALID:
            printf("INVALID INPUT");
        break;
    }

    return 0;
}
