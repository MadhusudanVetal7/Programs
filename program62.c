#include<stdio.h>

int main()
{
    // Arr is one dimentional array
    //Which contain 5 elements
    // and each elements is of type int
    auto int Arr[5];

    printf("Enter Elements :\n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Element of array are : \n");

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);


    return 0;
}
