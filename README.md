# 1er Examen de Sistemas Operativos


## Pregunta 1

Primer escenario 
Argumento de entrada = 1000000
tiempos:
0.182 s
0.147 s
0.168 s 


Segundo escenario
Argumento de entrada = 1000000
tiempos:
0.187 s 
0.178 s
0.179 s


Explicación: Un programa se demora más que el otro porque en el primer escenario el ciclo for no abarca las instrucciones de abrir y cerrar puerta, por ende se ejecuta como un contador, mientras tanto en el escenario siguiente, el ciclo for contiene dentro de sí estas instrucciones por lo que se consume más tiempo al estar en un serie constante de cerrar puerta, incrementar el contador, abrir puerta y asi sucesivamente.


## Pregunta 2

El programa genera dos hilos y cada hilo realiza la operación matemática x*(z/y), donde las variables x, y y z son privadas según corresponda y toman los siguientes valores: 
x = 1250, y = 350 y z = 25
Además se define una variable global (v). El hilo 1 hará la operación de división z/y y la guardará en la variable v. El hilo 2 ejecutará la función sleep(2) y luego llevará a cabo la operación de x*v.


##Pregunta 3

Se crea un programa donde el proceso hijo debe esperar a que el proceso padre termine su ejecución mediante la función wait.


##Pregunta 4

1. El porcentaje del tiempo que la cpu está en uso es del 100% para el caso que se pregunta dado que se especifica para ambos procesos que estarán corriendo con el 100% de probabilidad de que sea la cpu que esté ocupada procesando las instrucciones de los programas.

2. El porcentaje de uso de cpu no será del 100% debido a que el primer programa se ejecutará con certeza de que usara la cpu en todo el proceso pero para el segundo a pesar de que solo utiliza una línea, necesita esperar a que finalice el proceso en un I/O perteneciente a quizás otro dispositivo, y dado que por defecto la simulación utiliza 5 clocks o ticks para los procesos I/O por defecto, será 50% cpu. 

Fuente: Asiganación 2


