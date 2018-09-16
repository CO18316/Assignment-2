#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b && b!=c && a!=c)
	printf("1\n");
	else
	printf("0\n");
}
