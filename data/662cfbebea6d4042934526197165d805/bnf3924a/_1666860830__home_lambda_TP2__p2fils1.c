/* fonction de traitement du fils1 */
/* affiche son pid et se termine normalement en retournant 3 */
int main(int argc, char *argv[]){
    if (argc == 1)
    {
        printf("\n***fils1 --> PID= %d chain: %s\n", getpid(), argv);
        exit(3);
    }
}