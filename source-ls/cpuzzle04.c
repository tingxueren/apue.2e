#include <stdio.h>

int main(void)
{
	float a = 12.5;
	printf("%d\n", a);
	//printf("%d\n", int(a));
	printf("%d\n", *(int *)&a);
	return 0;
}	

#if 0
printf 格式化不靠谱，转化的问题，第二个编译不过去
在我的64位机器上的效果个x86上不一样
#endif
