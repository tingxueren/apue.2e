#include <stdio.h>

int main(void)
{
	char dummy[80];
	printf("Enter a string:\n");
	scanf("%[^r]", dummy);
	printf("%s\n", dummy);
	return 0;
}	
/* 本例的输出是“Hello, Wo”，scanf中的”%[^r]“是从中作梗的东西。意思是遇到字符r就结束了。
 */
