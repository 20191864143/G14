// 54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int English=0,space=0,math=0,other=0;
	char c;
	while((c=getchar())!='\n')
	{
		if('a'<=c&&c<='z'||'A'<=c&&c<='Z')
		{
			English+=1;
		}
		else if(c==' ')
		{
			space+=1;
		}
		else if('0'<=c&&c<='9')
		{
			math+=1;
		}
		else
		{
			other+=1;
			
		}
	}
	printf("Ӣ����ĸ��%d��\n",English);
	printf("�ո���%d��\n",space);
	printf("������%d��\n",math);
	printf("������%d��\n",other);
	return 0;
}

