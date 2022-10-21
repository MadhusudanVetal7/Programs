#include<iostream>
using namespace std;

int StrlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String"<<endl;
    cin.getline(Arr,20);


    iRet = StrlenX(Arr);
    cout<<"String legth is :"<<iRet<<endl;

    return 0;
}