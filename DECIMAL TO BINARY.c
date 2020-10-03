#include<stdio.h>
#define SIZE 32
void decimalTobinary();
int main(void)
{
	int n;
	printf("Enter a decimal value :-");
	scanf("%d",&n);
	decimalTobinary(n);
	return 0;
}
void decimalTobinary(int n)
{
	int binary[SIZE],i=0,j,temp;
	temp=n;
	while(n)
	{
		binary[i]=n%2;
		n=n/2;
		i++;
	}
	printf("The Binary Value Of %d is :-",temp);
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
}
