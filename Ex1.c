#include<stdio.h>
#include<unistd.h>


void main(int argc, char *argv[]){

    //ceci pour afficher le nombre d'arguments 
    printf("le nombre d'arguments est: %d\n", argc - 1);


    //ceci pour afficher les arguments 
    for (int i = 1; i < argc; i++){
        printf("%d: %s\n", i, argv[i]);
    }
}