#include <stdio.h>
#include <unistd.h>

int main(void)
{
	while(1)
	{
		fprintf(stdout, "hello-std-out");
		printf("\n");
		fprintf(stderr, "hello-std-err");
		sleep(1);
	}	
	return 0;
}	

#if 0
stdout块设备，有缓冲，stderr无缓冲，stderr会立即输出
stdout不会。
1.遇到回车
2.缓冲区满
3.flush调用
#endif
