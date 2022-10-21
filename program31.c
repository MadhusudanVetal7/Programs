

#include<stdio.h>

void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(((iNo % iCnt)) != 0)
        {
            printf("%d\n", iCnt);
        }

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayNonFactor(iValue);
    return 0;
}
// Time Complexity : O(N/2)