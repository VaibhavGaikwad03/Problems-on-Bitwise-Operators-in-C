/*
Write a program which checks whether 7th, 8th and 9th bit is on or off

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
    int iMask = 0x000001C0;
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
        printf("7th, 8th and 9th bit is on\n");
    }
    else
    {
        printf("7th, 8th and 9th bit is off\n");
    }

    return 0;
}