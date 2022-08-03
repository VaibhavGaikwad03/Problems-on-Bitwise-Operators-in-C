/*
Write a program which accepts one number from the user and toggle 8th and 12th bit of that number. return modified number.

Input : 2182
Output : 6

*/

#include<stdio.h>

int ToggleBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x00000880;

    iResult = iMask ^ iNo;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Number after toggling 8th and 12th bit : %d",iRet);

    return 0;
}