// 612.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char a[10];
	int i;
	printf("Please input ten :");
	for(i=0;i<=9;i++)
	{
	scanf("%c",&a[i]);
	if(a[i]>='A'&&a[i]<='Z')
	{
		a[i]=155-a[i];
	}
	else if(a[i]>='a'&&a[i]<'z')
	{
		a[i]=219-a[i];
	}
	else
	{
		a[i]=a[i];
	}
	printf("%c",a[i]);
		
	}
	return 0;


}

