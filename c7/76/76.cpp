// 76.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int str(char a[20],char b[10])
{
	strcat(a,b);
	return 0;
}
int main(int argc, char* argv[])
{
	char a[20],b[20];
	gets(a);
	gets(b);
	str(a,b);
	puts(a);
	return 0;

}

