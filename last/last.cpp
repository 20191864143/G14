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
	printf("ѧ�� ���� �༶ רҵ ��ѧ�� d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
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
		printf("�����ļ�ʧ�ܣ����������г���.\n");
		exit(0);
	}
	stop();
	printf("������ѧ��������");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	printf("������� %d��ѧ����ѧ��:",i+1);  getchar(); 
	gets(stu[i].no);
	printf("����:"); 
	gets(stu[i].name);
	printf("�༶:"); 
	gets(stu[i].grade);
	printf("רҵ:");
	gets(stu[i].pro);
	printf("��ѧ��n:");
	scanf("%d",&stu[i].year);
	printf("d1�ɼ�:");
	scanf("%f",&stu[i].score[0]);
	printf("d2�ɼ�:");
	scanf("%f",&stu[i].score[1]);
	printf("d3�ɼ�:");
	scanf("%f",&stu[i].score[2]);
	printf("d4�ɼ�:");
	scanf("%f",&stu[i].score[3]);
	printf("d5�ɼ�:");
	scanf("%f",&stu[i].score[4]);
	printf("d6�ɼ�:");
	scanf("%f",&stu[i].score[5]);
	printf("d7�ɼ�:");
	scanf("%f",&stu[i].score[6]);
	printf("d8�ɼ�:");
	scanf("%f",&stu[i].score[7]);
	printf("d9�ɼ�:");
	scanf("%f",&stu[i].score[8]);
	printf("d10�ɼ�:");
	scanf("%f",&stu[i].score[9]);
	fwrite(&stu[i],1,sizeof(struct student),fp); 
	}
	fclose(fp);
	printf("========================\n");
	printf(" �ղ������ %d ������Ϊ��\n",num);
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
		printf("�ļ���ʧ�ܣ��������г���\n"); 
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
		printf("\t\t\t* ά�� *\n");
		printf("\t\t\t* 1. ¼�� *\n"); 
		printf("\t\t\t* 2. ɾ�� *\n"); 
		printf("\t\t\t* 3. �޸� *\n"); 
		printf("\t\t\t* 4. ���� *\n"); 
		printf("\t\t\t************************\n");
		printf("\t\t\t ��ѡ��\n");
		c1=getchar();
		getchar();
		if(c1=='4')
		break;
		switch(c1){
			case '1':new1();break;
			case '2':delete1();break;
			case '3':xiugai();break;
			default:printf("ѡ����������ѡ��\n");
		}
	}
}
void new1() 
{
	printf("������ѧ��:");
	gets(stu[num].no);
	printf("����:");
	gets(stu[num].name);
	printf("�༶:");
	gets(stu[num].grade);
	printf("רҵ:"); 
	gets(stu[num].pro);
	printf("��ѧ��:");
	scanf("%d",&stu[num].year);
	printf("d1�ɼ�:");
	scanf("%f",&stu[num].score[0]);
	printf("d2�ɼ�:");
	scanf("%f",&stu[num].score[1]);
	printf("d3�ɼ�:");
	scanf("%f",&stu[num].score[2]);
	printf("d4�ɼ�:");
	scanf("%f",&stu[num].score[3]);
	printf("d5�ɼ�:");
	scanf("%f",&stu[num].score[4]);
	printf("d6�ɼ�:");
	scanf("%f",&stu[num].score[5]);
	printf("d7�ɼ�:");
	scanf("%f",&stu[num].score[6]);
	printf("d8�ɼ�:");
	scanf("%f",&stu[num].score[7]);
	printf("d9�ɼ�:");
	scanf("%f",&stu[num].score[8]);
	printf("d10�ɼ�:");
	scanf("%f",&stu[num].score[9]);
	num++;
	output();
}
void xiugai() 
{
	char xg[11];
	int i;
	printf("\n������Ҫ�޸�ѧ����ѧ��:\n\n");
	gets(xg);
	for(i=0;i<num;i++)
	if(strcmp(stu[i].no,xg)==0)break;
	if(i==num)
	{
	printf("\n�����ļ��޸�����Ϣ!\n\n����������ѧ��.\n\n");
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
		printf("\t\t\t �ɼ� \n");
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
		printf("\t\t\t b.���� \n\n"); 
		printf("\t��ѡ��Ҫ�޸ĵĳɼ�(�� 1.2.3.4.5......):\n");
		c=getchar();
		getchar();
		if(c=='b')break;
		else if (c>='0'&&c<='9')
		{
			k=c-49;
			printf("\n������ %s �ɼ�:\n",p+k);
			scanf("%f",&stu[x].score[k]);
			printf("\n�� ϢΪ:\n");
			printf("ѧ�� ���� �༶ רҵ ��ѧ�� d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
			printf("===================================================================\n");
			printf("%s %s %s %s %d",stu[x].no,stu[x].name,stu[x].grade,stu[x].pro,stu[x].year);
			for(j=0;j<10;j++)
				printf(" %.1f",stu[x].score[j]);
			printf("\n");
		}
		else printf("\nѡ����������ѡ!\n\n");
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
	printf("������Ҫɾ����ѧ��ѧ��:"); 
	gets(cno);
	i=find(cno);
	if(i!=-1)
	{
		for(j=i;j<num;j++)
		stu[j]=stu[j+1];
		num--;
		printf("����%d ��ѧ���ĳɼ�:\n",num); 
		output();
	}
	else 
	{
	printf("��������ȷ��ѧ��. \n");
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
		printf("\t\t\t* ͳ�� *\n");
		printf("\t\t\t* 1. ѧ��ƽ���� *\n"); 
		printf("\t\t\t* 2. �γ�ƽ���� *\n"); 
		printf("\t\t\t* 3. ���� *\n"); 
		printf("\t\t\t*******************************\n");
		printf("\t\t\t��ѡ��:\n");
		c2=getchar();
		getchar();
		if(c2=='3') break;
		switch(c2)
		{
			case '1':tongji1();
			printf("\n\nѧ��ƽ����Ϊ:\n");
			printf("===========================================\n");
			printf("ѧ�� ���� ��ѧ�� ƽ����\n");
			printf("===========================================\n");
			for(i=0;i<num;i++)
				printf("%s %s %d %.2f\n",stu[i].no,stu[i].name,stu[i].year,stu[i].ave); stop();
			break;
			case '2':tongji2();break;
			default:printf("ѡ����������ѡ\n");
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
	printf("\n\n����ƽ���֣�\n");
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
		printf("\t\t\t* ���� * \n");
		printf("\t\t\t* 1. ��ѧ������ * \n"); 
		printf("\t\t\t* 2. ��ƽ�������� * \n"); 
		printf("\t\t\t* 3. �����Ƴɼ����� * \n"); 
		printf("\t\t\t* 4. ���� * \n"); 
		printf("\t\t\t***********************************\n\n");
		printf("\t��ѡ��:\n");
		c3=getchar();
		getchar();
		if(c3=='4') break;
		switch(c3)
		{
			case '1':paino();break;
			case '2':paiave();break;
			case '3':paidkcj();break;
			default:printf("\nѡ����������ѡ!\n\n");stop();
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
	printf("\n�����Ϊ:\n");
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
	printf("\n\t�����Ϊ:\n"); 
	printf("\t===============================================\n");
	printf("\tѧ�� ���� ��ѧ�� ƽ���� ����\n");
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
		printf("\t\t\t ���Ƴɼ� \n");
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
		printf("\t\t\t b.���� \n\n");
		printf("\t\t\t************************************\n\n");
		printf("\t��ѡ��:\n");
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
			printf("\nѡ����������ѡ!\n\n");
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
	printf("\n\t�����Ϊ:\n");
	printf("\t===============================================\n");
	printf("\tѧ�� ���� ��ѧ�� %s ����\n",p+k);
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
		printf("\t\t\t* ���� *\n");
		printf("\t\t\t* 1. ��ѧ�Ų��� *\n"); 
		printf("\t\t\t* 2. ���������� *\n"); 
		printf("\t\t\t* 3. ���� *\n"); 
		printf("\t\t\t*************************************\n");
		printf("\t\t\t��ѡ��:\n");
		c4=getchar();
		getchar();
		if(c4=='3') break;
			switch(c4)
			{
				case '1':printf("����ѧ��:\n");gets(cno);i=find(cno);panduani(i);break;
				case '2':printf("��������:\n");gets(cname);i=findname(cname);panduani(i);break;
				default:printf("ѡ����������ѡ!\n");
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
		printf("Ҫ���ҵ�ѧ��������\n");
		stop();
	}
	else
	{
	printf("���ҵ���ѧ����ϢΪ��\n");
	printf("ѧ�� ���� �༶ רҵ ��ѧ�� d1 d2 d3 d4 d5 d6 d7 d8 d9 d10\n");
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
		printf("�����ļ�ʧ�ܣ����������г���.\n"); 
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
		printf("\t\t***********��ӭ��½ѧ���ɼ�����ϵͳ**************\n");
		printf("\t\t*          G14�������� �ϳ��� �⳩              *\n") ;
		printf("\t\t*                                               *\n") ;
		printf("\t\t*                                               *\n") ;
		printf("\t\t*                                               *\n") ;
		printf("\t\t*************************************************\n");
		printf("\t\t* 1. ����                                       *\n");
		printf("\t\t* 2. ͳ��                                       *\n");  
		printf("\t\t* 3. ����                                       *\n"); 
		printf("\t\t* 4. ����                                       *\n"); 
		printf("\t\t* 5. ���沢�˳�                                 *\n"); 
		printf("\t\t*************************************************\n");
		printf("\t\t��ѡ��:\n");
		c=getchar();
		getchar();
		switch(c)
		{
			case '1':guanli();break;
			case '2':tongji();break;
			case '3':find1();break;
			case '4':paixu1();break;
			case '5':save();exit(0);break;
			default:printf("ѡ����������ѡ!\n");
		} 
	} 
}


