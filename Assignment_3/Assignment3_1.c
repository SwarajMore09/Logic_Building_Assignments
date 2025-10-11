///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment3_1.c
//  Description:        Program to print even number on screen till given number
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void PrintEven(int iNo)
{
   int i = 0;
   for (i = 1; i <= iNo; i++)
   {
        if ((i % 2) == 0)
        {
            printf("%d \t",i);
        }
   }
   
}

int main()
{
    int iValue = 0;
    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}