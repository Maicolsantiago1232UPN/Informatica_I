#include <stdio.h>
#include <stdlib.h>

// Definición de la función ordenar
void ordenar(int arreglo[], int cantidad) {
    int temporal;
    int intercambio = 1;
    int contador;

    // Proceso de ordenamiento
    while(intercambio == 1) {
        intercambio = 0; 
        contador = 0;
        
        while(contador < cantidad - 1) {
            if(arreglo[contador] > arreglo[contador+1]){
                temporal = arreglo[contador];
                arreglo[contador] = arreglo[contador+1];
                arreglo[contador + 1] = temporal;
                intercambio = 1; 
            }
            contador++;
        }
    }
}

int main(int argc, char *argv[]) {
    int N_max;
    int grupo[10];
    int contador;
    char Ordenar_Mas;
    
    // Ciclo principal para repetir el programa si el usuario lo desea
   Ordenar_Mas = 's'; 

    while (Ordenar_Mas == 's' || Ordenar_Mas == 'S') {
    contador = 0; 
    
    printf("\nHola, digita a continuacion la cantidad de numeros deseada (maximo 10): ");
    scanf("%d", &N_max);
    
    // Ingreso de datos
    while(contador < N_max) {
        printf("Ingrese el dato %d: \n", contador + 1);
        scanf("%d", &grupo[contador]);
        contador++;
    }
    
    // Imprimir los números ingresados
    printf("\nLos numeros tal como los ingresaste son:\n");
    for(int i = 0; i < N_max; i++){
        printf("%d ", grupo[i]);
    }
    printf("\n");
    
    // Llamado a la función
    ordenar(grupo, N_max);
    
    // Imprimir los números ordenados
    printf("\nLos numeros ordenados son:\n");
    for(int i = 0; i < N_max; i++){
        printf("%d ", grupo[i]);
    }
    printf("\n");
    
    // Preguntar si desea continuar
    printf("\n¿Deseas seguir ordenando nuevos numeros? (s/n): ");
    scanf(" %c", &Ordenar_Mas); 
} while(Ordenar_Mas == 's'); 
    
    printf("Programa finalizado.\n");
    return 0;
}