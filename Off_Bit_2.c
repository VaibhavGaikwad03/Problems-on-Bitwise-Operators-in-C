/*
Write a program which accepts one number from the user and off 7th and 10th bit of that number if it is on. return modified number.

Input : 577
Output : 1

*/

#include<stdio.h>

int OffBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x00000240;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        iResult = iMask ^ iNo;

        return iResult;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    if(iRet == iValue)
    {
        printf("7th or 10th bit is already off\n");
    }
    else
    {
        printf("Number after off 7th and 10th bit : %d",iRet);
    }

    return 0;
}