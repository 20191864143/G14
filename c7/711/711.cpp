// 711.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
void sort(char s[], int n);                      
int main()
{
	char str[11];
	printf("Please enter 10 charactor: ");       
	gets(str);
	sort(str, 10);                               
	system("pause");
	return 0;
}

void sort(char s[], int n)
{
	for (int i=0; i<n-1; i++)
		for (int j=0, t; j<n-1-i; s[j]>s[j+1]?t=s[j],s[j]=s[j+1],s[j+1]=t, j++ :j++);
	printf("Sort array: ");
	puts(s);
}