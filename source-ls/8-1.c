#include "apue.h"

int glob = 6;
char buf[] = "a write to stdout\n";

int main(void)
{
	int var;
	pid_t pid;
	var = 88;
	printf("%ld\n", sizeof(buf));
	printf("%ld\n", strlen(buf));
	if (write(STDOUT_FILENO, buf, sizeof(buf)-1) != sizeof(buf)-1)
		err_sys("write error");
	printf("before fork by pid = %d\n", getpid());
	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		glob++;
		var++;
	} else {
		sleep(2);
	}
	printf("ppid = %d, pid = %d, glob = %d, var = %d\n", getppid(), getpid(), glob, var);
	exit(0);
}	
