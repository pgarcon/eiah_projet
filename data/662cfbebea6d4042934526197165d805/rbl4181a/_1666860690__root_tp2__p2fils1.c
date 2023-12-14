#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>


int main() {
	printf("\nJe suis : %s et mon UID est :  %d\n",getlogin(),getuid());
}
