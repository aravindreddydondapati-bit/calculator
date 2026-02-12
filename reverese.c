
#include<stdio.h>

int main()
{
	int num, rem, rev = 0;
	printf("enter the num: ");
	scanf("%d" &num);

	while(num != 0)
	{
		rem = num % 10;
		rev = rev + (rem*10);
		num /= 10;
	}
	printf("Reversed number: %d", num);
	return 0; 
}
