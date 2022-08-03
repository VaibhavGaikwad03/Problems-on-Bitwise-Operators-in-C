/*
Write a program which accepts one number from the user and toggle count number of ON(1) bits in it.

Input : 11
Output : 3

*/

#include<stdio.h>

int CountOnBits(int iNo)
{
    int iResult = 0, Count = 0;
    int iMask = 0;

    for(int i = 1; i <= 32; i++)
    {
        iMask = 0x00000001;

        iMask = iMask << (i -1);

        iResult = iMask & iNo;

        if(iResult == iMask)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountOnBits(iValue);

    printf("Count of on bits is : %d",iRet);

    return 0;
}