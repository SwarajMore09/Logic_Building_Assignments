///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment4_3.c
//  Description:        Program to display all non factors
//  Author :            Swaraj Santoshrao More
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    NonFact(iValue);

    return 0;
}