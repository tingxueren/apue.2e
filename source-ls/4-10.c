#include "apue.h"
#ifdef SOLARIS
#include <sys/mkdev.h>
#endif
#include<sys/stat.h>
#if 0
#define _BSD_SOURCE             /* See feature_test_macros(7) */
#include <sys/types.h>

dev_t makedev(int maj, int min);

int major(dev_t dev);
int minor(dev_t dev);
#endif

int main(int argc, char *argv[])
{
	int i;
	struct stat buf;
	for (i = 1; i < argc; i++) {
		printf("%s: ", argv[i]);
		if (stat(argv[i], &buf) < 0) {
			err_ret("stat error");
			continue;
		}

		printf("dev = %d/%d", major(buf.st_dev), minor(buf.st_dev));
		if (S_ISCHR(buf.st_mode) || S_ISBLK(buf.st_mode)) {
			printf(" (%s) rdev = %d/%d", (S_ISCHR(buf.st_mode)) ? "character" : "block", \
					major(buf.st_rdev), minor(buf.st_rdev));

		}
		printf("\n");
	}
	exit(0);
}	
