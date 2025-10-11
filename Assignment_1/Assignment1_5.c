///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment1_5.c
//  Description:        Program to print number of * on screen
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}