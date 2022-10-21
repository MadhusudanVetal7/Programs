#include<stdio.h>
#include<stdlib.h>          // for malloc func.

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    printf("Element of array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;

    printf("Enter the number of element\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);           //Display(100);
    free(ptr);
    return 0;
}
