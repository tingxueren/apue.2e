#include <stdio.h>

int main(void)
{
	int i;
	i = 10;
	printf("i: %d\n", i);
	printf("sizeof(i++) is: %d\n", sizeof(i++));
	printf("i: %d\n", i);
	return 0;
}	

#if 0
sizeof不是一个函数，是一个操作符，其求i++的类型的size，这是一件可以在程序运行前（编译时）完全的事情，所以，sizeof(i++)直接就被4给取代了，在运行时也就不会有了i++这个表达式。
#endif
