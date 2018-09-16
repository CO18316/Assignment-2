#include <stdio.h>
void main()
{
	int m,n;
	printf("Enter 2 digits ");
	scanf("%d %d",&m,&n);
	if(m%n==0)
		printf("%d\n",m/n);
	else
		printf("0\n");
}
