///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_5.c
//  Description:        Program to print first 5 multiples of N
//  Author :            Swaraj Santoshrao More
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt <= 5)
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}