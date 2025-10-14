///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment5_2.c
//  Description:        Program to print numbers till that number
//  Author :            Swaraj Santoshrao More
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}