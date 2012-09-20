#include "apue.h"

int glob = 6;

int main(void)
{
	int var;
	pid_t pid;
	var = 88;
	printf("before fork by pid = %d\n", getpid());
	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		glob++;
		var++;
		_exit(0);
	}
	printf("ppid = %d, pid = %d, glob = %d, var = %d\n", getppid(), getpid(), glob, var);
	exit(0);
}	
