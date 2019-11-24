// 68.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	int a[16],i,j,t,a1,mid,a2;
	printf("按由大到小的顺序输入15个数:");
	for(i=1;i<=15;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入查找的数:");
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
		printf("第一个元素");
	else if(t==a[15])
		printf("第十五个元素");
	else if(a[mid]==t)
		printf("第%d个元素",mid);
	else 
		printf("无");
	return 0;

		
}

