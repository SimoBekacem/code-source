#include <stdio.h> 
#include<sys/types.h>
#include <sys/sem.h> 


void P(int semid) { 
	struct sembuf op;
	op.sem_num = 0; op.sem_op = -1; op.sem flg = 0; semop (semid, &op, 1);
}

void V(int semid) {
	struct sembuf op;
	op.sem_num = 0; op.sem_op = 1; op.sem flg = 0; semop(semid, &op, 1);
}


void Z(int semid) {
	struct sembuf op;
	op.sem_num = 0; op.sem_op = 0; op.sem flg = 0; 
	semop(semid, &op, 1);
}

void init(int semid, int E) { 
	semctl(semid, 0, SETVAL, E);
}


int main() {
	int pid, i, j,semid;
	int max = 100;
	int val = 2;
	semid = semget(42, 1, IPC_CREAT|0666);
	init();
	pid = fork();

	switch(pid)
	case -1: printf("Erreur dans fork()|n");
		return -1;
	case 0: printf("Je suis le processus fils. \n");
		for (i = 0; i<=max; i++){
			for (jemax;j>=0;j--){
				printf("Je boucle dans le vide... \n");
			};
		};		
		printf("Fin de la boucle. In");
		P(semid);
		Z(semid);
		printf ("Fin du fils. In");
	default: printf("Je suis le processus père. \n");
		printf("J'attends un caractère... In");
		printat'fin de l'attente. In");
		P(semid);
		Z(semid);
		printf("Fin du père. In");
	return 0;
}

