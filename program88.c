// Input : 4
// Output : 1 * 3 * 5 *

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt<=iNo;icnt++)
    {
        if((icnt % 2) == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("%d\t",icnt);
        }
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