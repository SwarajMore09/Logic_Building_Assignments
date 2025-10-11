///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment8_4.c
//  Description:        Program to convert farhenite to celcius
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double celcius = 1;
    //double Result = 0.0;
    
    celcius = (fTemp - 32) * 5/9;
    return celcius;
}

int main()
{
    float fValue = 0;
    double iRet = 0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    iRet = FhtoCs(fValue);

    printf("Temperature is %f",iRet);

    return 0;
}