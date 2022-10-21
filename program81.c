// Input : 5
// Output : * * * * *

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt<=iNo; icnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}