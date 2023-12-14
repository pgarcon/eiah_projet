#include <string.h>
#include <signal.h>
#include <sys/types.h>
void traiterSIGUSR1( int ) ; int main( ) {
	int err;
	struct sigaction sa;
