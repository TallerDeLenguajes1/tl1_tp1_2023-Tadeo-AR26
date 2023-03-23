#include <stdio.h>

int main(){
    int num = 5, *p_num, size;
    p_num = &num;
    printf("Hola mundo\n");
    printf("El contenido del puntero es %d\n", *p_num);
    printf("La direccion de memoria almacenada por el puntero es %p\n", p_num);
    printf("La direccion de memoria de la variable es %p\n", &num);
    printf("La direccion de memoria del puntero es %p\n", &p_num);
    size = sizeof(num);
    printf("El tamaño de memoria de la variable es %d\n", size);
    return 0;
}