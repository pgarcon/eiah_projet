#include <unistd.h>

int main()
{
pid_t idProc;

int descFic[2];
int err;

err=pipe(descFic);
if(err==-1)(perror("echec pipe");

return 0;
}
