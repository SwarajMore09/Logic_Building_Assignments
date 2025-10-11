///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment10_1.c
//  Description:        Program to count even digits from a number
//  Author :            Swaraj Santoshrao More
//  Date:               18/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }    
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}