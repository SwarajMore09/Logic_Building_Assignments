///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment7_2.c
//  Description:        Program to convert US dollar to INR conversion
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;

    if (iNo > 0)
    {
        INR = iNo * 70;
    }
    return INR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}