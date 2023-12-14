#include <unistd.h>
#include <stdio.h>

FILE* tubeTete, *tubeQueue;
int descFic[2];
int err;

err = pipe(descFic);
if (err == 1) {
	perror("echec pipe");
	exit(1);
}
tubeTete=fdopen(descFic[0], "r");
tubeQueue=fdopen(descFic[1], "w");
