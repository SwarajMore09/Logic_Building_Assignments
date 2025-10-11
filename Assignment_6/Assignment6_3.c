///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment6_3.c
//  Description:        Program to print factorial of given number
//  Author :            Swaraj Santoshrao More
//  Date:               15/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    for(iCnt = iNo ;iCnt >= 1; iCnt--)
    {
        {
            iMult = iMult * iCnt;
            printf("%d\n",iCnt);
        }
    }
    return iMult;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Multiplication of factors is: %d\n",iRet);

    return 0;
}