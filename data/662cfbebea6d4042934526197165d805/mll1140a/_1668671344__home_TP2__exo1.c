#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void handler(int theSignal) {
	printf("Je receptionne le signal %d\n", theSignal);
}

int main(void) 
{
	struct sigaction prepaSignal;

	printf("Hello world\n");
	prepaSignal.sa_handler=&handler;
	prepaSignal.sa_flags=0;
	sigemptyset(&prepaSignal.sa_mask);

	sigaction(SIGINT,&prepaSignal,0);
	sigaction(SIGQUIT,&prepaSignal,0);
	signaction(SIGTERM,&prepaSignal,0);

	while(1) ;
	
	return 0;
}
