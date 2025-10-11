///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment6_5.c
//  Description:        Program to print table in reverse order
//  Author :            Swaraj Santoshrao More
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}