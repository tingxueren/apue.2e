#include <stdio.h>

int main(void)
{
	int a = 1;
	switch(a)
	{
		int b = 20;
		case 1:
			printf("b is %d\n", b);
			break;
		default:
			printf("b is %d\n", b);
			break;
	}
	return 0;
}	

#if 0
我们以为进入switch后，变量b会被初始化，其实并不然，因为switch-case语句会把变量b的初始化直接就跳过了。所以，程序会输出一个随机的内存值。
#endif
