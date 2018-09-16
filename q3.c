#include <stdio.h>
void main()
{
	float a,b,c;
	printf("Enter 3 side's lengths \n");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b)>=c && (b+c)>=a && (a+c)>=b)
		printf("1\n");
	else
		printf("0\n");
}
