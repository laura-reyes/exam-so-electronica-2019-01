#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

volatile int counter = 0;
puerta(puerta); 
int loops;

void *worker(void *arg) {
    int i;
    
    for (i = 0; i < loops; i++) {
      
        cerrar_puerta(puerta);
	counter++;
        abrir_puerta(puerta);
    }

    return NULL;
}

int main(int argc, char *argv[]) {

    crear_puerta(puerta);

    if (argc != 2) { 
	fprintf(stderr, "usage: threads <loops>\n"); 
	exit(1); 
    } 
    loops = atoi(argv[1]);
    pthread_t p1, p2;
    printf("Valor inicial : %d\n", counter);
    pthread_create(&p1, NULL, worker, NULL); 
    pthread_create(&p2, NULL, worker, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    destruir_puerta(puerta);
    printf("Valor final   : %d\n", counter);
    return 0;
}
