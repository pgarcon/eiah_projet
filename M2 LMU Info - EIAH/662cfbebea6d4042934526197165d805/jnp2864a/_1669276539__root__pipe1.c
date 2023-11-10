#include <unistd.h>

void traitFils();
int descFic[2];
int err;
ssize_t write( int descFic[1], const void * tampon, size_t nb ) ;
ssize_t read( int descFic[0], void * tampon, size_t nb ) ;


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
