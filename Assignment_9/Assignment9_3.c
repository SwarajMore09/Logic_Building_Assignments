///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment9_3.c
//  Description:        Program to count frequency of 2 from a number
//  Author :            Swaraj Santoshrao More
//  Date:               18/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

     while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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
    int bValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter a digit to count : ");
    scanf("%d",&bValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}