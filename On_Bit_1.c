/*
Write a program which accepts one number from the user and on its first 4 bits. return modified number.

Input : 73
Output : 79

*/

#include<stdio.h>

int OnBits(int iNo)
{
    int iResult = 0;
    int iMask = 0x0000000f;

    iResult = iMask | iNo;

    return iResult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = OnBits(iValue);

    printf("Number after on first four bits : %d",iRet);

    return 0;
}