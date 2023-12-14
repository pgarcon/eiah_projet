#include <unistd.h>

int  descFic[2];
int err;

err=pipe(descFic);
if(err==-1)(perror("echec pipe");exit(1);
