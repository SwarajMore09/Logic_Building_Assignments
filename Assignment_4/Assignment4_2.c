///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment4_2.c
//  Description:        Program to display factors in descending order
//  Author :            Swaraj Santoshrao More
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt <= iNo; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}