#include <unistd.h>

void traitFils();
FILE * tubeTete, * tubeQueue ;
int descFic[2];
int err;

err = pipe(descFic);
if(err == -1){perror("echec pipe");
tubeTete = fdopen ( descFic[0], "r" ) ;
tubeQueue = fdopen ( descFic[1], "w" ) ;
exit(1);

/* creation du fils */  
idProc = fork() ;
switch(idProc ) {
case -1 :perror("echec fork"); exit(1);
case 0 :traitFils1(); exit(1);
}
void traitFils()
{

}
