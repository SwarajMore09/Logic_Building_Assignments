///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment10_1.c
//  Description:        Program to print difference between sum of even digits 
//                      and sum of odd digits 
//  Author :            Swaraj Santoshrao More
//  Date:               18/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }    
        else
        {
            iSum2 = iSum2 + iDigit;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int bRet = 0;
    int cRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    cRet = iRet - bRet;

    printf("%d",cRet);

    return 0;
}