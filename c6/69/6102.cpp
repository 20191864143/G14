// 6102.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char a[4][81]={'\0'};
	int E=0,e=0,math=0,space=0,other=0,i,j;
	printf("输入三段文字:\n");
	for(i=1;i<=3;i++)
	{
		for(j=0;(a[i][j]=getchar())!='\n';j++)
		{
			
			if(a[i][j]==' ')
				space++;
			else if(a[i][j]>='A'&&a[i][j]<='Z')
				E++;
			else if(a[i][j]>='a'&&a[i][j]<='z')
				e++;
			else if(a[i][j]>=0&&a[i][j]<=9)
				math++;
			else 
				other++;			
			
		}
	}
	printf("大写英文为%d\n小写英文为%d\n数字为%d\n空格为%d\n其他为%d\n",E,e,math,space,other);
	return 0;

}

