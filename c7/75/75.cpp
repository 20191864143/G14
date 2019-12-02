// 75.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
void reverse(char a[]);                    
main()
{
    char str[20];
    gets(str);                               
    reverse(str);                            
    puts(str);                               
    return 0;
}
void reverse(char a[])
{
    int i, j, k;
    char t;
    k=strlen(a);
    for (i=0, j=k-1; i<k/2; i++, j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}