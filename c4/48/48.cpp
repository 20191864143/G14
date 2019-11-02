// 48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a;
	char b='A',c='B',d='C',e='D',f='E';
	scanf("%d",&a);
	printf("your garde:");
	if(a>=90&&a<=100)
	{
		printf("%c",b);
	}
	if(a>=80&&a<90)
	{
		printf("%c",c);
		
	}
	if(a>=70&&a<80)
	{
		printf("%c",d);
	}
	if(a>=60&&a<70)
	{
		printf("%c",e);
	}
	if(a<60)
	{
		printf("%c",f);
	}
		return 0;
}

