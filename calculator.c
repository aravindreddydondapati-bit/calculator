
#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int a, b;
	char ch;
	printf("enter the equation: ");
	scanf("%d %c %d", &a, &ch, &b);
	switch(ch)
	{
		case '+':
			res = add(a,b);
			printf("result: %d\n", res);
			break;
		case '-':
			res = sub(a,b);
			printf("result: %d\n", res);
			break;
		default:
			printf("Invalid input\n");
	}
	return 0;
}
