///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment4_1.c
//  Description:        Program to perform multiplication of factors
//  Author :            Swaraj Santoshrao More
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
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

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n",iRet);

    return 0;
}