// 64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
    int a[11]={1,3,5,7,31,100,1000,10000,100000,1000000};

    int temp,i=0,j=0;

    scanf("%d",&temp);

    for(i=9;i>=0;i--)
    {
       if(temp<a[i]){
            a[i+1] = a[i];

       }else{
             a[i+1] = temp;
             break;      
       }

    }

    for(i=0;i<11;i++)
    {

        printf("%d   ",a[i]);              
     }

    return 0;
}

