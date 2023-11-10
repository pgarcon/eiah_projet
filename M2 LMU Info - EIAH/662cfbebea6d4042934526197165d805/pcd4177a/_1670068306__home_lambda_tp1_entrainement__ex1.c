#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


uid_t getuid(void);



int main() {
    
    time_t t = time(NULL);
    
    printf("Yo %s\n", ctime(&t));
    printf("UID: %d\n", getuid());

    
}

