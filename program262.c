#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            iCnt++;
        }
            str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string \n");
    scanf("%[^'\n']",arr);

    iRet = CountSmall(arr);

    printf("Small character are : %d\n",iRet);
    return 0;
}