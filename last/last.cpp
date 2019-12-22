// last.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdlib.h>
#include<io.h>
#include<string.h>
#define N 100
struct student 
{
	char no[11]; 
	char name[10];
	char grade[10];
	char pro[20];
	float score[10];
	float ave;
	float sum;
	int year;
}stu[N];
int num;

int find(char sno[]); 
int findname(char cname[]);
int findname(char cname[]);
void findyear(int cyear); 
void outputx(int); 
void change(int,int); 
void panduani(int); 
void xgcj(int); 
void delete1(); 
void tongji(); 
void tongji1(); 
void tongji2(); 
void paixu1(); 
void paino(); 
void paiave(); 
void output(); 
void init(); 
void newfile(); 
void read1(); 
void guanli();
void new1(); 
void xiugai();
void paidkcj(); 
void find1(); 
void save(); 
void stop(); 

void stop()
{
	printf("Press CR Key To Continue...\n");
	getchar();
}
void output()
{
	int i,j;
	printf("===================================================================\n");
	printf("学号 姓名 班级 专业 入学年 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
	printf("===================================================================\n");
	for(i=0;i<num;i++){
		printf("%s %s %s %s %d",stu[i].no,stu[i].name,stu[i].grade,stu[i].pro,stu[i].year);
		for(j=0;j<10;j++)
			printf(" %.1f",stu[i].score[j]);
		printf("\n");
	}
	stop();
}
void init()
{
	if(access("stu.dat",0))
		newfile();
	else
		read1();
}
void newfile()
{
	int i;
	FILE *fp;
	if((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("创建文件失败，请重新运行程序.\n");
		exit(0);
	}
	stop();
	printf("请输入学生人数：");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	printf("请输入第 %d个学生的学号:",i+1);  getchar(); 
	gets(stu[i].no);
	printf("姓名:"); 
	gets(stu[i].name);
	printf("班级:"); 
	gets(stu[i].grade);
	printf("专业:");
	gets(stu[i].pro);
	printf("入学年n:");
	scanf("%d",&stu[i].year);
	printf("d1成绩:");
	scanf("%f",&stu[i].score[0]);
	printf("d2成绩:");
	scanf("%f",&stu[i].score[1]);
	printf("d3成绩:");
	scanf("%f",&stu[i].score[2]);
	printf("d4成绩:");
	scanf("%f",&stu[i].score[3]);
	printf("d5成绩:");
	scanf("%f",&stu[i].score[4]);
	printf("d6成绩:");
	scanf("%f",&stu[i].score[5]);
	printf("d7成绩:");
	scanf("%f",&stu[i].score[6]);
	printf("d8成绩:");
	scanf("%f",&stu[i].score[7]);
	printf("d9成绩:");
	scanf("%f",&stu[i].score[8]);
	printf("d10成绩:");
	scanf("%f",&stu[i].score[9]);
	fwrite(&stu[i],1,sizeof(struct student),fp); 
	}
	fclose(fp);
	printf("========================\n");
	printf(" 刚才输入的 %d 个数据为：\n",num);
	printf("========================\n\n");
	output();
}
void read1() 
{
	FILE *fp;
	num=0; 
	fp=fopen("stu.dat","r");
	if(fp==NULL) 
	{
		printf("文件打开失败！重新运行程序\n"); 
		exit(0);
	}
	while(!feof(fp)) 
	{
	fread(&stu[num],1,sizeof(struct student),fp);
	num++;
	}
	num--;
	fclose(fp);
	output();
}
void guanli()
{
	char c1;
	while(1){
		printf("\n\n\n\t\t\t************************\n");
		printf("\t\t\t* 维护 *\n");
		printf("\t\t\t* 1. 录入 *\n"); 
		printf("\t\t\t* 2. 删除 *\n"); 
		printf("\t\t\t* 3. 修改 *\n"); 
		printf("\t\t\t* 4. 返回 *\n"); 
		printf("\t\t\t************************\n");
		printf("\t\t\t 请选择：\n");
		c1=getchar();
		getchar();
		if(c1=='4')
		break;
		switch(c1){
			case '1':new1();break;
			case '2':delete1();break;
			case '3':xiugai();break;
			default:printf("选择有误，请重选！\n");
		}
	}
}
void new1() 
{
	printf("请输入学号:");
	gets(stu[num].no);
	printf("姓名:");
	gets(stu[num].name);
	printf("班级:");
	gets(stu[num].grade);
	printf("专业:"); 
	gets(stu[num].pro);
	printf("入学年:");
	scanf("%d",&stu[num].year);
	printf("d1成绩:");
	scanf("%f",&stu[num].score[0]);
	printf("d2成绩:");
	scanf("%f",&stu[num].score[1]);
	printf("d3成绩:");
	scanf("%f",&stu[num].score[2]);
	printf("d4成绩:");
	scanf("%f",&stu[num].score[3]);
	printf("d5成绩:");
	scanf("%f",&stu[num].score[4]);
	printf("d6成绩:");
	scanf("%f",&stu[num].score[5]);
	printf("d7成绩:");
	scanf("%f",&stu[num].score[6]);
	printf("d8成绩:");
	scanf("%f",&stu[num].score[7]);
	printf("d9成绩:");
	scanf("%f",&stu[num].score[8]);
	printf("d10成绩:");
	scanf("%f",&stu[num].score[9]);
	num++;
	output();
}
void xiugai() 
{
	char xg[11];
	int i;
	printf("\n请输入要修改学生的学号:\n\n");
	gets(xg);
	for(i=0;i<num;i++)
	if(strcmp(stu[i].no,xg)==0)break;
	if(i==num)
	{
	printf("\n数据文件无该生信息!\n\n请重新输入学号.\n\n");
	stop();
	return;
	}
	xgcj(i);
}	
void xgcj(int x) 
{
	char xueke[10][10]={"d1","d2","d3","d4","d5","d6","d7","d8","d9","d10"};
	char (*p)[10],c;
	int j,k;
	p=xueke;
	for(;;)
	{
		printf("\n");
		printf("\t\t\t************************************\n\n");
		printf("\t\t\t 成绩 \n");
		printf("\t\t\t 1.d1 \n");
		printf("\t\t\t 2.d2 \n"); 
		printf("\t\t\t 3.d3 \n");
		printf("\t\t\t 4.d4 \n"); 
		printf("\t\t\t 5.d5 \n"); 
		printf("\t\t\t 6.d6 \n");
		printf("\t\t\t 7.d7 \n");
		printf("\t\t\t 8.d8 \n");
		printf("\t\t\t 9.d9 \n");
		printf("\t\t\t 0.d10 \n");
		printf("\t\t\t b.返回 \n\n"); 
		printf("\t请选择要修改的成绩(按 1.2.3.4.5......):\n");
		c=getchar();
		getchar();
		if(c=='b')break;
		else if (c>='0'&&c<='9')
		{
			k=c-49;
			printf("\n请输入 %s 成绩:\n",p+k);
			scanf("%f",&stu[x].score[k]);
			printf("\n修 息为:\n");
			printf("学号 姓名 班级 专业 入学年 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
			printf("===================================================================\n");
			printf("%s %s %s %s %d",stu[x].no,stu[x].name,stu[x].grade,stu[x].pro,stu[x].year);
			for(j=0;j<10;j++)
				printf(" %.1f",stu[x].score[j]);
			printf("\n");
		}
		else printf("\n选择有误，请重选!\n\n");
			stop();
	}
}
int find(char sno[])
{
	int i;
	for(i=0;i<num;i++)
	if(strcmp(stu[i].no,sno)==0) 
	return i;
	return -1;
}
void delete1() 
{
	char cno[11];
	int i,j;
	printf("请输入要删除的学生学号:"); 
	gets(cno);
	i=find(cno);
	if(i!=-1)
	{
		for(j=i;j<num;j++)
		stu[j]=stu[j+1];
		num--;
		printf("现有%d 个学生的成绩:\n",num); 
		output();
	}
	else 
	{
	printf("请输入正确的学号. \n");
	stop();
	}
}
void tongji() 
{
	int i;
	char c2;
	while(1)
	{
		printf("\n\n\n\t\t\t*******************************\n");
		printf("\t\t\t* 统计 *\n");
		printf("\t\t\t* 1. 学生平均分 *\n"); 
		printf("\t\t\t* 2. 课程平均分 *\n"); 
		printf("\t\t\t* 3. 返回 *\n"); 
		printf("\t\t\t*******************************\n");
		printf("\t\t\t请选择:\n");
		c2=getchar();
		getchar();
		if(c2=='3') break;
		switch(c2)
		{
			case '1':tongji1();
			printf("\n\n学生平均分为:\n");
			printf("===========================================\n");
			printf("学号 姓名 入学年 平均分\n");
			printf("===========================================\n");
			for(i=0;i<num;i++)
				printf("%s %s %d %.2f\n",stu[i].no,stu[i].name,stu[i].year,stu[i].ave); stop();
			break;
			case '2':tongji2();break;
			default:printf("选择有误，请重选\n");
		}
	}
}
void tongji1() 
{
	int i,j;
	for(i=0;i<num;i++)
	{
		stu[i].sum=0; 
		stu[i].ave=0;
		for(j=0;j<10;j++)
			stu[i].sum+=stu[i].score[j];
		stu[i].ave=stu[i].sum/10;
	}
}
void tongji2() 
{
	int i,j;
	float sum;
	float avec[10]; 
	for(j=0;j<10;j++)
	{
		sum=0;
		for(i=0;i<num;i++)
			sum+=stu[i].score[j];
		avec[j]=sum/num;
	}
	printf("\n\n各科平均分：\n");
	printf("===================================\n");
	printf("d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
	printf("===================================\n");
	for(i=0;i<10;i++)
		printf("%-7.1f",avec[i]);
	printf("\n");
	stop();
}
void paixu1() 
{
	char c3;
	for(;;)
	{
		printf("\n\n\n");
		printf("\t\t\t***********************************\n");
		printf("\t\t\t* 排序 * \n");
		printf("\t\t\t* 1. 按学号排序 * \n"); 
		printf("\t\t\t* 2. 按平均分排序 * \n"); 
		printf("\t\t\t* 3. 按单科成绩排序 * \n"); 
		printf("\t\t\t* 4. 返回 * \n"); 
		printf("\t\t\t***********************************\n\n");
		printf("\t请选择:\n");
		c3=getchar();
		getchar();
		if(c3=='4') break;
		switch(c3)
		{
			case '1':paino();break;
			case '2':paiave();break;
			case '3':paidkcj();break;
			default:printf("\n选择有误，请重选!\n\n");stop();
		}
	}
}
void paino() 
{ 
	int i,j;
	for(i=0;i<num;i++)
		for(j=0;j<num-1-i;j++)
			if(strcmp(stu[j].no,stu[j+1].no)>0)
				change(j,j+1);
	printf("\n排序后为:\n");
	output();
}
void paiave()
{ 
	int i,j;
	tongji1(); 
	for(i=0;i<num;i++)
		for(j=0;j<num-i-1;j++)
			if(stu[j].ave<stu[j+1].ave)
				change(j,j+1);
	printf("\n\t排序后为:\n"); 
	printf("\t===============================================\n");
	printf("\t学号 姓名 入学年 平均分 排名\n");
	printf("\t===============================================\n");
	for(i=0;i<num;i++)
		printf("\t%s %s %d %.2f %4d\n",stu[i].no,stu[i].name,stu[i].year,stu[i].ave,i+1);
	stop();
}
void paidkcj() 
{
	char c;
	int i,j,k;
	while(1)
	{
		printf("\n");
		printf("\t\t\t************************************\n\n");
		printf("\t\t\t 单科成绩 \n");
		printf("\t\t\t 1.d1 \n"); 
		printf("\t\t\t 2.d2 \n"); 
		printf("\t\t\t 3.d3 \n"); 
		printf("\t\t\t 4.d4 \n"); 
		printf("\t\t\t 5.d5 \n"); 
		printf("\t\t\t 6.d6 \n");
		printf("\t\t\t 7.d7 \n");
		printf("\t\t\t 8.d8 \n");
		printf("\t\t\t 9.d9 \n");
		printf("\t\t\t 0.d10 \n");
		printf("\t\t\t b.返回 \n\n");
		printf("\t\t\t************************************\n\n");
		printf("\t请选择:\n");
		c=getchar();
		getchar();
		if(c=='b')break;
		else if (c>='0'&&c<='9')
		{
			k=c-49;
			for(i=0;i<num;i++)
				for(j=0;j<num-1-i;j++)
					if(stu[j].score[k]<stu[j+1].score[k])
						change(j,j+1);
			outputx(k);
		}
		else 
			printf("\n选择有误，请重选!\n\n");
		stop();
	}
}
void change(int i,int j) 
{
	struct student temp;
	temp=stu[i];
	stu[i]=stu[j];
	stu[j]=temp;
}
void outputx(int k) 
{
	char xueke[10][10]={"d1","d2","d3","d4","d5","d6","d7","d8","d9","d10"};
	char (*p)[10]; 
	int i;
	p=xueke;
	printf("\n\t排序后为:\n");
	printf("\t===============================================\n");
	printf("\t学号 姓名 入学年 %s 排名\n",p+k);
	printf("\t===============================================\n");
	for(i=0;i<num;i++)
		printf("\t%s  %s  %d  %f  %d\n",stu[i].no,stu[i].name,stu[i].year,stu[i].score[k],i+1);
}
void find1() 
{
	char c4;
	char cno[11],cname[10];
	int i,cyear;
	while(1)
	{
		printf("\t\t\t*************************************\n");
		printf("\t\t\t* 查找 *\n");
		printf("\t\t\t* 1. 按学号查找 *\n"); 
		printf("\t\t\t* 2. 按姓名查找 *\n"); 
		printf("\t\t\t* 3. 返回 *\n"); 
		printf("\t\t\t*************************************\n");
		printf("\t\t\t请选择:\n");
		c4=getchar();
		getchar();
		if(c4=='3') break;
			switch(c4)
			{
				case '1':printf("输入学号:\n");gets(cno);i=find(cno);panduani(i);break;
				case '2':printf("输入姓名:\n");gets(cname);i=findname(cname);panduani(i);break;
				default:printf("选择有误，请重选!\n");
			}
	}
}
int findname(char cname[]) 
{
	int i;
	for(i=0;i<num;i++)
	if(strcmp(stu[i].name,cname)==0)
		return i;
	return -1;
}
void panduani(int i) 
{
	int j;
	if(i==-1)
	{
		printf("要查找的学生不存在\n");
		stop();
	}
	else
	{
	printf("查找到的学生信息为：\n");
	printf("学号 姓名 班级 专业 入学年 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
	printf("===================================================================\n");
	printf("%s %s %s %s %d",stu[i].no,stu[i].name,stu[i].grade,stu[i].pro,stu[i].year);
	for(j=0;j<10;j++)
		printf(" %.1f",stu[i].score[j]);
	printf("\n");
	stop();
	}
}
void save() 
{
	int i;
	FILE *fp;
	if((fp=fopen("stu.dat","wb"))==NULL) 
	{
		printf("创建文件失败，请重新运行程序.\n"); 
		exit(0); 
	}
	for(i=0;i<num;i++)
		fwrite(&stu[i],1,sizeof(struct student),fp);
	fclose(fp);
}
int main() 
{
	char c;
	init();
	while(1)
	{
		printf("\t\t***********欢迎登陆学生成绩管理系统**************\n");
		printf("\t\t*          G14：王洪欣 孟朝阳 吴畅              *\n") ;
		printf("\t\t*                                               *\n") ;
		printf("\t\t*                                               *\n") ;
		printf("\t\t*                                               *\n") ;
		printf("\t\t*************************************************\n");
		printf("\t\t* 1. 管理                                       *\n");
		printf("\t\t* 2. 统计                                       *\n");  
		printf("\t\t* 3. 查找                                       *\n"); 
		printf("\t\t* 4. 排序                                       *\n"); 
		printf("\t\t* 5. 保存并退出                                 *\n"); 
		printf("\t\t*************************************************\n");
		printf("\t\t请选择:\n");
		c=getchar();
		getchar();
		switch(c)
		{
			case '1':guanli();break;
			case '2':tongji();break;
			case '3':find1();break;
			case '4':paixu1();break;
			case '5':save();exit(0);break;
			default:printf("选择有误，请重选!\n");
		} 
	} 
}


