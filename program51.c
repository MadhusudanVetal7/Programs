#include<stdio.h>

int DisplayEven(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)== 0)
        {
        printf("%d\n",iDigit);
        }
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);


    printf("Number of digits are : %d\n",iRet);
    DisplayEven(iValue);

    return 0;
}