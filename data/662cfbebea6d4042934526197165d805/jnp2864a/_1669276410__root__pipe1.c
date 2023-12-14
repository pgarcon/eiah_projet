#include <unistd.h>

void traitFils();
int descFic[2];
int err;

err = pipe(descFic);
if(err == -1){perror("echec pipe");
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
