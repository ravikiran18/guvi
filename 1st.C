#include<stdio.h>
int main()
{
	long long int n;
	scanf("%d",&n);
	if(n>0)
	printf("Positive");
	else if(n<0)
	printf("Negative");
	else
	printf("Zero");
	return 0;
}
