///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment7_4.c
//  Description:        Program to print odd factorial of number
//  Author :            Swaraj Santoshrao More
//  Date:               16/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            //printf("%d\n",iCnt);
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is: %d\n",iRet);

    return 0;
}