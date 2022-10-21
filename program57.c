// Input : 2 4
// Output : 16
#include<stdio.h>

unsigned long int power(int iNo1, int iNo2)

{
    unsigned long int iMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;

    }
    return iMult;

}
int main()

{

    int iValue1 = 0, iValue2 = 0;
    long int lRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    lRet = power(iValue1,iValue2);

    printf("Result is : %d\n",lRet);
    return 0;
}