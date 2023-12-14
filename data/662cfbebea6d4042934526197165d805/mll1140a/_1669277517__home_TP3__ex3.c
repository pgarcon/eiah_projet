#include <stdio.h>
#include <memory.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>


int main()
{

int tube[2];
pipe(tube);

pid_t fils;
fils = fork();

printf("Je suis le fils %d, mon pere est %d\n", getpid(), getppid());

}
