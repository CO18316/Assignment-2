#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char ip[20];
	int num=0,x,ctr=0;
	printf("Enter the IPV4 address\n");
	scanf("%s",ip);
	int i=0;
	while(ip[i]!='\0')
	{
		while(ip[i]!='.'&& ip[i]!='\0')
		{
			x=ip[i]-'0';
			num=(num*10)+x;
			i++;
		} 
		if(num<0 || num>255 || (ip[i]=='.'&&ip[i+1]=='.'))
		{
			printf("Invalid IPV4 address\n");
			exit(0);
		}
		if(ip[i]=='.')
			ctr++;
		if(ip[i]=='\0')
			break;
		i++;
		num=0;
	}
	if(ctr==3)
	printf("Valid IPV4 address\n");
	else
	printf("Invalid IPV4 address\n");
}
