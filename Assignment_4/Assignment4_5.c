///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment4_5.c
//  Description:        Program to print summation of all factors and non factors
//  Author :            Swaraj Santoshrao More
//  Date:               14/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 0;
    int iFact2 = 0;
    int Result = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                iFact1 = iFact1 + iCnt;
            }
        }
        
        for(iCnt = 1 ;iCnt <= (iNo/2) ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFact2 = iFact2 + iCnt;
            }
        }
         
    Result = iFact2 - iFact1;
    return Result;   
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d",iRet);

    return 0;
}