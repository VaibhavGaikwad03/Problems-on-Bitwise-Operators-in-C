/*
Write a program which accepts one number and position from user and check whether bit at that position is on or off. If bit is one return true otherwise return false.

Input : 10, 2
Output : True

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo, int iPos)
{
    int iResult = 0;
    int iMask = 0x00000001;

    iMask = iMask << (iPos -1);

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
    int iValue = 0, pos = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the position : \n");
    scanf("%d", &pos);

    bRet = CheckBit(iValue, pos);

    if(bRet == TRUE)
    {
        printf("Bit is on at that position\n");
    }
    else
    {
        printf("Bit is off at that position\n");
    }
    
    return 0;
}