// 68.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	int a[16],i,j,t,a1,mid,a2;
	printf("���ɴ�С��˳������15����:");
	for(i=1;i<=15;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("��������ҵ���:");
	scanf("%d",&t);
	a1=1;
	a2=15;
	while(fabs(a1-a2)!=1)
	{
	mid=(a1+a2)/2;
	if(a[mid]>t)
		a2=mid;
	else if(a[mid]<t)
		a1=mid;
	else
		break;
	}
	if(t==a[1])
		printf("��һ��Ԫ��");
	else if(t==a[15])
		printf("��ʮ���Ԫ��");
	else if(a[mid]==t)
		printf("��%d��Ԫ��",mid);
	else 
		printf("��");
	return 0;

		
}

