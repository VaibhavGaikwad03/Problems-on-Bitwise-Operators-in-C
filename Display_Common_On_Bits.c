/*
Write a program which accepts two numbers from the user and display position of common ON bits from that two numbers.

Input : 10 15
Output : 2 4

*/

#include<stdio.h>

void CommonOnBits(int iNo1, int iNo2)
{
    int iResult1 = 0;
    int iResult2 = 0;
    int i = 0;
    int iMask1 = 0;
    int iMask2 = 0;

    for(i = 1; i <= 32; i++)
    {
        iMask1 = 0x00000001;
        iMask2 = 0x00000001;

        iMask1 = iMask1<<(i - 1);

        iMask2 = iMask2<<(i - 1);

        iResult1 = iMask1 & iNo1;

        iResult2 = iMask2 & iNo2;

        if(iResult1 == iResult2 && iResult1 != 0 && iResult2 != 0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;
    
    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    CommonOnBits(iValue1, iValue2);

    return 0;
}