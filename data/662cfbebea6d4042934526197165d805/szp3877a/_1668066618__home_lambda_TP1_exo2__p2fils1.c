idProc = fork() ;
switch  (idProc )
    {
    case -1 : perror("echec fork");exit(1);   /* erreur */
    
    case 0 : /* execution du traitement du fils2 */
    		 err=execvp("p2fils2", tabParam);
			 if (err == -1)
			  { perror("echec execvp");exit(3);}	
    }
