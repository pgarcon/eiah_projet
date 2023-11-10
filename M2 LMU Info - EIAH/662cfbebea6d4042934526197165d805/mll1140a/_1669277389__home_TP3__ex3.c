#include <stdio.h>
#include <memory.h>
#include <unistd.h>

int main()
{

int tube[2];
pipe(tube);

pid_t fils;
fils = fork();

switch(fils) {
	case -1:
		perror("fork");
	break;
	case 0:
		printf("Je suis le fils %d, mon pere est %d\n", getpid(), getppid());
	break;
	default:
		printf("Je suis le pere %d\n", getpid());
		sleep(1);
		exit(EXIT_SUCCESS);

}
