// 78.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<string.h>

int main()

{

	void num_space(char a[],char b[]);

	char a[100],b[100]="";

	printf("请输入任意四位数：");

		gets(a);
		num_space(a,b);

		printf("%s\n",b);

		return 0;

}

void num_space(char a[100],char b[100])

{

	int i,j=0;

	for(i=0;a[i]!='\0';i++)

	{

		b[j++]=a[i];

		b[j++]=' ';

	}

}