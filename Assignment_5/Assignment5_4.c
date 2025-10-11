///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_4.c
//  Description:        Program to print all odd numbers upto N
//  Author :            Swaraj Santoshrao More
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}