// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    for(icnt = -iNo; icnt <= iNo; icnt++)
    {
        printf("%d\t",icnt);
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