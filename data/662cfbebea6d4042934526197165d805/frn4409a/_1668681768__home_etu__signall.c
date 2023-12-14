#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void traitSIGUSR1(int);

int main(){

	int err;
	struct sigaction sa;
	memset(&sa, 0, sizeof (sa));
