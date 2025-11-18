///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment4_4.c
//  Description:        Program to print summation of all its non factors
//  Author :            Swaraj Santoshrao More
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of factors is: %d\n",iRet);

    return 0;
}