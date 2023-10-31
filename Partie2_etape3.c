#include <stdio.h> 
#include<sys/types.h>
#include <sys/sem.h> 


void P(int semid) { 
	struct sembuf op;
	op.sem_num = 0; op.sem_op = -1; op.sem flg = 0; semop (semid, &op, 1);
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
	int i, semid;
	int val = 0;
	semid senget(42, 1, IPC_CREAT|0666); init(semid, val);
	for (;;) {
		getchar();
		V(semid);
		printf("Opération V\n");
	}
	return 0;
}}