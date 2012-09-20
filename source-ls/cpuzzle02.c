#include <stdio.h>

int main(void)
{
        //int a = 1, 2;
	int a = (1,2);
	printf("a: %d\n", a);
	return 0;
}	
/* 逗号表达式的问题，做右值要有括号 */ 
