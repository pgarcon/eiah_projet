#include <stdio.h>
#include <time.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    
    int i;
    int from_child[2];
    int to_child[2];
    int tochild,fromchild;
    time_t t;
    t=time(NULL);

    
    /* ----------- Forking a child -------------*/
    if ( (i=fork() ) ) {
        if (i<0) {
        perror("Process cannot be forked");
        exit(errno);
        }
    /* ----------- Parent --------------------*/
        printf("Parent. je connais le fils id = %d\n",i);
        printf("%s\n",ctime(&t));
        printf("UID = %i\n",getuid());
        printf("Parent. Waiting for child to die.\n");
        waitpid( i , NULL , 0 ) ;
        printf("Parent. Now let's continue.\n");
    }
    /* ------------- Child ---------------------*/ 
    else {  //In the child
        printf("Child. Wait 2 seconds.\n");
        sleep(2);
        printf("Child. Wait is over.\n");
    }

    printf("...the end.\n");

    
    return 0;
}