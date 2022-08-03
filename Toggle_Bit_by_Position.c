/*
Write a program which accepts one number and position from user and toggle that bit and return modified number.

Input : 10, 3
Output : 14

*/

#include<stdio.h>

int ToggleBit(int iNo, int iPos)
{
    int iResult = 0;
    int iMask = 0x00000001;

    iMask = iMask << (iPos -1);

    iResult = iMask ^ iNo;

    return iResult;

}

int main()
{
    int iValue = 0, pos = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the position : \n");
    scanf("%d", &pos);

    iRet = ToggleBit(iValue, pos);

    printf("Number after toggling the bit : %d",iRet);
    
    return 0;
}