#include <stdio.h>

int main(void)
{
	char str[80];
	printf("Enter the string: ");
	/* 输入如果超过80字符，会越界 */
	scanf("%s", str);
	printf("You entered: %s\n", str);
	return 0;
}	
