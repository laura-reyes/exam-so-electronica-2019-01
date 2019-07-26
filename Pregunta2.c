#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

float v;
puerta(puerta);


void *hilo1(void *arg) {

    float x = 1250;
    float y = 350;
    float z = 25;

    cerrar_puerta(puerta);

	v=(z/y);

    printf("El valor de la primera operación (z/y) es %f\n",v);

    abrir_puerta(puerta);

    return NULL;
}

void *hilo2(void *arg) {

    sleep(2);

    float x = 1250;
    float y = 350;
    float z = 25;

    cerrar_puerta(puerta);

	v=v*x;

    printf("El valor de la segunda operación (v*x) es %f\n",v);

    abrir_puerta(puerta);

    return NULL;
}

int main(int argc, char *argv[]) {

    crear_puerta(puerta); 
    pthread_t p1, p2;
    pthread_create(&p1, NULL, hilo1, NULL); 
    pthread_create(&p2, NULL, hilo2, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    destruir_puerta(puerta);
    printf("Valor final:   : %f\n", v);


    return 0;
}
