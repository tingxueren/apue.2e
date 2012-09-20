#include "apue.h"
#include <sys/wait.h>

char *env_init[] = {"USER=unknow", "PATH=/tmp", NULL};

int main(void)
{
	pid_t pid;

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		if (execle("/home/mars/work/apue.2e/proc/echoall", "echoall", "myarg1",
					"MY ARG2", (char *)0, env_init) <0)
			err_sys("ececle error");
	}

	if (waitpid(pid, NULL, 0) < 0)
		err_sys("wait error");

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		if (execlp("/home/mars/work/apue.2e/proc/echoall", "echoall", "only 1 arg",
					 (char *)0) <0)
			err_sys("ececlp error");
	}
	
}	
