// zhishu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int y,m,d;
	scanf("%d,%d,%d",&y,&m,&d);
	if(m>12)
	{
	printf("月份错误,请重新输入");
	}
	if(d>31)
	{
	printf("日期错误，请重新输入");
	}
	if(( y%4==0&&y%100!=0)||y%400==0)
	{switch(m)
	 {
	 case 1:
		 printf("%d",d);break;
	 case 2:
		 printf("%d",d+31);break;
	 case 3:
		 printf("%d",d+60);break;
	 case 4:
		 printf("%d",d+91);break;
	 case 5:
		 printf("%D",d+121);break;
	 case 6:
		 printf("%d",d+152);break;
	 case 7:
		 printf("%d",d+182);break;
	 case 8:
		 printf("%d",d+213);break;
	 case 9:
		 printf("%d",d+244);break;
	 case 10:
		 printf("%d",d+274);break;
	 case 11:
		 printf("%d",d+305);break;
	 case 12:
		 printf("%d",d+335);break;

	 }
	}
else
{
switch(m)
	 {
	 case 1:
		 printf("%d",d);break;
	 case 2:
		 printf("%d",d+31);break;
	 case 3:
		 printf("%d",d+59);break;
	 case 4:
		 printf("%d",d+90);break;
	 case 5:
		 printf("%D",d+120);break;
	 case 6:
		 printf("%d",d+151);break;
	 case 7:
		 printf("%d",d+181);break;
	 case 8:
		 printf("%d",d+212);break;
	 case 9:
		 printf("%d",d+243);break;
	 case 10:
		 printf("%d",d+273);break;
	 case 11:
		 printf("%d",d+304);break;
	 case 12:
		 printf("%d",d+334);break;
	}


}
return 0;
}

