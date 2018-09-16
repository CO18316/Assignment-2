#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void romtodec()
{
	char roman[10];
	printf("Enter any roman numeral- ");
	scanf("%s",roman);
	int len=strlen(roman);
	int num[10],sum=0;
	for(int i=0;roman[i]!='\0';i++)
	{
		if(roman[i]=='i' || roman[i]=='I' )
		num[i]=1;
		else if(roman[i]=='v' || roman[i]=='V')
		num[i]=5;
		else if(roman[i]=='x' || roman[i]=='X')
		num[i]=10;
		else
		{
		printf("Invalid\n");
		exit(0);
		}
	}
	for(int j=0;j<len;j++)
	{
		if(num[j]==1)
		{
			if((j+1)<len && num[j+1]>1)
			num[j]=-1;
		}
	}
	for(int k=0;k<len;k++)
	{
		sum=sum+num[k];
	}
printf("\nValue of given roman number is %d\n",sum);
}
void dectorom()
{
	int num;
	printf("Enter any number- ");
	scanf("%d",&num);
	printf("Given number in roman numerals\n");
	int x=num%10;
	int y=num/10;
	for(int i=0;i<y;i++)
		printf("X");
	switch(x)
	{
		case 1:printf("I\n");break;
		case 2:printf("II\n");break;
		case 3:printf("III\n");break;
		case 4:printf("IV\n");break;
		case 5:printf("V\n");break;
		case 6:printf("VI\n");break;
		case 7:printf("VII\n");break;
		case 8:printf("VIII\n");break;
		case 9:printf("IX\n");break;
	}
}
void main()
{
	int c;
	printf("Enter 1 for roman to Decimal conversion\n");
	printf("Enter 2 for decimal to roman conversion\n");
	 scanf("%d",&c);
	switch(c)
	{
		case 1:romtodec();break;
		case 2:dectorom();break;
	}
}
