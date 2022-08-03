/*
Write a program which checks whether first and last bit is on or off. First means 1 and last bit means bit number 32.

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
    int iMask = 0x80000001;
    int iResult = 0;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        printf("First and Last bit is on\n");
    }
    else
    {
        printf("First and Last bit is off\n");
    }

    return 0;
}