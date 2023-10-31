#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(void){
pid_t pid;
pid=fork();
if(pid<0){
 printf("flaeur de fork = %d\n");
 printf("je suis le rpcessus fils:pid=%d,ppid=%d\n",getpid(),getppid());}else{
 printf("flaeur de fork = %d\n");
 printf("je suis le rpcessus fils:pid=%d,ppid=%d\n de fils=%d\n",getpid(),getppid(),pid);
}
return 0;
}

