/*
Write a program which accepts one number and position from user and off that bit and return modified number.

Input : 10, 2
Output : 8

*/

#include<stdio.h>

int OffBit(int iNo, int iPos)
{
    int iResult = 0;
    int iMask = 0x00000001;

    iMask = iMask << (iPos -1);

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
    int iValue = 0, pos = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the position : \n");
    scanf("%d", &pos);

    iRet = OffBit(iValue, pos);

    if(iRet == iValue)
    {
        printf("Bit is already off at that position\n");
    }
    else
    {
        printf("Number after the bit off : %d", iRet);
    }
    
    return 0;
}