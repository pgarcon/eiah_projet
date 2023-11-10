#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

int main()
{
  pid_t child_pid;
  int from_child[2];
  int to_child[2];
  int tochild,fromchild;

  /* ----------- Creating Pipes -------------*/
  if ( pipe(from_child) || pipe(to_child) ) {
    perror("Cannot create pipes");
    exit(errno);
  }

  /* ----------- Forking a child -------------*/
  if ( (child_pid=fork() ) == -1 ) {
    perror("Process cannot be forked");
    exit(errno);
  }

  if ( child_pid ) {
    char c='p';
    /* ----------- Parent --------------------*/
    printf("Parent. It knows the child id = %d\n",child_pid);
    
    close(from_child[1]); 
    close(to_child[0]);
    
    
    printf("Parent : got character '%c' from child.\n",c);
  }
  /* ------------- Child ---------------------*/ 
  else {  
     char c;

    close(from_child[0]);
    close(to_child[1]);
    
    if ( read(to_child[0],&c,1) != 1 ) {
      perror("Child : cannot read from parent");
      exit(errno);
    }

    printf("Child : got character '%c' from parent\n",c);
   
    c = 'c';
    if ( write(from_child[1],&c,1) != 1 ) {
      perror("Child : cannot write to parent");
      exit(errno);
    }

  }

  return 0;
}
