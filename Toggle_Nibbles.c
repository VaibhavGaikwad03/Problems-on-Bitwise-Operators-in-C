/*
Write a program which accepts one number from the user and toggle contents of first and last nibble of the number. return modified number.

*/

#include<stdio.h>

int ToggleNibble(int iNo)
{
    long int iResult = 0;
    int iMask = 0xf000000f;

    iResult = iMask ^ iNo;

    return iResult;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = ToggleNibble(iValue);

    printf("Number after toggling First and Last nibble : %d",iRet);

    return 0;
}