#include "apue.h"

int main(void)
{
	char *ptr;
	int size;

	if (chdir ("/home/mars") < 0)
		err_sys("chdir error");

	ptr = path_alloc(&size);
	if (getcwd(ptr, size) == NULL)
		err_sys("getcwd failed");
	printf("cwd = %s\n", ptr);
	exit(0);
}	
