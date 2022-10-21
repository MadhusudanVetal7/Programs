#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchFirstOccurrence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}


int main()
{
    int iSize = 0, iCnt = 0,  iValue = 0, iRet;
    int *ptr = NULL;

    printf("Enter number of element\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurrence(ptr, iSize, iValue);
    if (iRet == -1)
    {
        printf("Element is there in array\n");
    }
    else
    {
        printf("Element first occurred at : %d\n",iRet);
    }
    free(ptr);

    return 0;
}