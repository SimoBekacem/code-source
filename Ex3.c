#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(void){
printf("je suis le processus et mon pid est %d \n",getpid());printf("Mon pere est le processus de pid %d.\n",getpid());
	printf("Mon uid %d. \n",getuid());
	printf("Mon euid %d. \n",geteuid());
	printf("Mon gid %d. \n",getgid());
	printf("Mon egid %d. \n",getegid());
}