#include <stdio.h>
#include <stdlib.h>

int f1(int val)
{
	int *ptr;
	if (val == 0) {
		int val;
		val = 5;
		ptr = &val;
	}
	return (*ptr + 1);
}	

int main(void)
{
	int i = 1;
	printf("*ptr + 1 = %d\n", f1(i));
	exit(0);
}	
