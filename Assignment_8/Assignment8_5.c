///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment8_5.c
//  Description:        Program to conver square feet to square meter
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iNo)
{
    float square = 1;

    square = iNo * 0.0929;
    return square;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square feet is: %f",dRet);

    return 0;
}