/* Gestion des processus sous Linux */
/* TDM2 - Exercice 2 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>

void finFils(int);
void traitfils();

int nbFils;

int main(int nbP, char* Param[]) {
    int err ;
    struct sigaction sa;
    pid_t idProc;
    
    nbFils = atoi(Param[1]);
    
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = finFils ;
    err = sigaction (SIGCHLD, &sa, NULL);
    if (err == -1) {
        perror("echec signal");
        exit(1);
    }
    
    for (int i = 0; i < nbFils; i++) {
        sleep(rand()%10 + 1);
        idProc = fork() ;
        switch  (idProc) {
            case -1 :
                perror("Erreur fork");
                exit(1);
            case 0 :
                traitFils();
                exit(0);
        }
    }
    
    while (nbFils > 0);
}

/* fonction de traitement d'un fils */
void traitFils() {
    int duree = rand()%20 + 1;
    printf("Mon pid est %d et je m'endors pendant %d secondes\n",
        getpid(), duree);
    sleep(duree);
    exit(duree);
}

/* fonction de traitement du signal SIGCHLD */
void finFils(int num) {
    int idProc, rapport, statut;
    idProc = wait(&rapport);
    if WIFEXITED(rapport) { /* fin normale */
        statut = WEXITSTATUS(rapport);
        printf("Fin du fils %d endormi pendant %d secondes\n", idProc, statut);
    } else {
        printf("Fin anormale !!!\n");
    }
    nbFils--;
}
