///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment8_2.c
//  Description:        Program to calculate area of a rectangle
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float PI = 3.14f;
    double Area = 0.0;
    
    Area = fWidth * fHeight;
    return Area;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%f",&fValue1);

    printf("Enter number : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Circle is :%f",dRet);

    return 0;
}