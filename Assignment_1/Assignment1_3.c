///////////////////////////////////////////////////////////////////////////////
//
//  File name :         Assignment1_3.c
//  Description:        Program to print 5 to 1 numbers on screen
//  Author :            Swaraj Santoshrao More
//  Date:               11/05/2025
//
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Display()
{
    int i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}