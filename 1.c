#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("process pid %d\n",getpid());
	printf("parent process pid%d\n",getppid());
	printf("r group pid  %d\n",getpgrp());
	printf("User ID%d\n",getuid());
	printf("Group ID%d\n",getgid());
	return 0;
}
