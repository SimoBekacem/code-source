#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{   pid_t  pid;
switch (pid = fork())   {
case -1:
perror("fork");
return -1;
case 0:
printf("Je suis le fils et mon pid est %d.\n", getpid());
return 0;
default:
printf("Je suis le pere, "
"mon pid est %d, j'ai un fils avec pid %d.\n", getpid(), pid);
return 0;
}   }
