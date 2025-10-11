///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment3_1.c
//  Description:        Program to check number contains zero or not
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>   

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    //{
       // iDigit = iNo % 10;
        //iCnt++;
        //iNo = iNo / 10;
    //}
    if(iDigit == 0)
    {
        return TRUE;
    }
    //else
    //{
    //    return FALSE;
    //}

}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}