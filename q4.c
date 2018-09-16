#include <stdio.h>
#include <string.h>
void main()
{
	char arr[30];
	int n,x=-1;
	printf("Enter a number- ");
	scanf("%d",&n);
	printf("Enter a sequence (terminating with a -1)\n");
	scanf("%s",arr);
	for(int j=0;arr[j]!='-';j++)
	{
		if((arr[j]-'0')==n)
		x=j+1;
	}
	if(x!=-1)
	printf("Found at %d\n",x);
	else
	printf("-1\n");
}
