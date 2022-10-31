#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

#define SECONDS 3

int main(){
	
	pid_t pid;
	printf("FORK \n");
	pid=fork();
	if(pid==0){
		time_t now = time(NULL);
		int count=0;
		while(time(NULL)!=now+SECONDS)
			count++;
		printf("des ID = %d count = %d\n",getpid(),count);
	}else if(pid>0){
		time_t now=time(NULL);
		int count=0;
		while(time(NULL)!=now+SECONDS)
			count++;
		printf("Parent ID = %d count = %d\n",getpid(),count);
	}else printf("Error\n");
	return 0;	

}
