#include<stdio.h>
#define b int
b getparity(unsigned int n)
{
	b parity=0;
	while(n)
	{
		parity=!parity;
		n=n&(n-1);
	}
	return parity;
}
int main()
{

unsigned int n;
	printf("enter the unsigned int\n");
	scanf("%d",&n);
	printf("parity of %d=%s",n,(getparity(n)?"odd":"even"));
	getchar();
	return 0;
}
