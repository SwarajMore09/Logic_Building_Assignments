///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment8_1.c
//  Description:        Program to calculate area of a circle
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double Area = 0.0;
    
    Area = PI * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is :%f",dRet);

    return 0;
}