///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment6_1.c
//  Description:        Program to print small,medium and large number
//  Author :            Swaraj Santoshrao More
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{

    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}