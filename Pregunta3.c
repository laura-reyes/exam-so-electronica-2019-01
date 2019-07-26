#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>



int main(int argc, char ** argv) {
int rc = fork();
int status;


 if (rc>0) {   // proceso padre

 printf("Soy el padre\n");

} 

 else {        // proceso hijo
 waitpid(rc, &status, rc);

 printf("Soy el hijo\n");

} 

return 0;

}
