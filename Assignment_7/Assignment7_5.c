///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment7_5.c
//  Description:        Program to print difference between Even and odd factorial
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iMult1 = 1;
    int iMult2 = 1;
    int iSub = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            //printf("%d\n",iCnt);
            iMult1 = iMult1 * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            //printf("%d\n",iCnt);
            iMult2 = iMult2 * iCnt;
        }
    }
    iSub = iMult1 - iMult2;
    return iSub;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d\n",iRet);

    return 0;
}