#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[],int iSize)
{
    int iSum = 0,iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLengh = 0;
    int *ptr = NULL;
    int iCnt = 0,iRet = 0;

    printf("Enter number of elements \n");
    scanf("%d",&iLengh);

    ptr =(int*)malloc(sizeof(int)*iLengh);

    printf("Enter the value of array \n");

    for(iCnt = 0; iCnt<iLengh; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sumation(ptr, iLengh);

    printf("Addition is : %d\n",iRet);

    return 0;
}