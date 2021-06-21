#include "apue.h"

int
main(void)
{
	char buf[200];
	if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
		printf("cannot seek\n");
	else
		int n = read(STDIN_FILENO,buf,200)
		printf("seek OK\n");
	exit(0);
}
