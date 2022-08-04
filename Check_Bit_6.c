/*
Write a program which accept one number from user and checks whether 9th or 12th bit is on or off

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
    int iMask1 = 0x00000100;
    int iMask2 = 0x00000800;
    int iResult1 = 0;
    int iResult2 = 0;

    iResult1 = iMask1 & iNo;
    iResult2 = iMask2 & iNo;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
        printf("9th or 12th bit is on\n");
    }
    else
    {
        printf("9th and 12th bit is off\n");
    }

    return 0;
}