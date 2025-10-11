///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment8_3.c
//  Description:        Program to convert kilometer into meter
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMToMeter(int iNo)
{
    int KM = 0;

    if (iNo > 0)
    {
        KM = iNo * 1000;
    }
    return KM;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Kilometer Travelled %d",iRet);

    return 0;
}