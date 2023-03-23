#include <stdio.h>
#include <stdlib.h>

int cuadrado(int cuadr);
void cuadradoVoid(int *p_cuadr);
void invertir(int *p_a, int *p_b);
void orden(int *p_c, int *p_d);

int main(){
    int cuadr, result, *p_a, *p_b, *p_c, *p_d, *p_cuadr;
    printf("Ingrese un numero para elevar al cuadrado\n");
    scanf("%d", &cuadr);
    p_cuadr = &cuadr; //apunto el puntero a la direccion de memoria del numero a elevar
    result = cuadrado(cuadr);
    printf("El valor del cuadrado del numero calculado con la funcion int es %d\n", result);
    cuadradoVoid(p_cuadr);
    invertir(p_a, p_b);
    orden(p_c, p_d);
    return 0;
}

int cuadrado(int cuadr){
    int cuadrado = 0;
    cuadrado = cuadr*cuadr;
    return cuadrado;
}

void cuadradoVoid(int *p_cuadr){
    *p_cuadr = (*p_cuadr)*(*p_cuadr);
    printf("El valor del cuadrado del numero calculado con la funcion void es %d\n", *p_cuadr);
}

void invertir(int *p_a, int *p_b){
    int aux, a, b;
    p_a = &a; //apunto los punteros a sus respectivas variables
    p_b = &b;
    printf("Ingrese un numero a para que su valor sea invertido con el de una variable b\n");
    scanf("%d", &a);
    printf("Ingrese un numero b para que su valor sea invertido con el de una variable a\n");
    scanf("%d", &b);
    aux = *p_a;
    *p_a = *p_b;
    *p_b = aux;
    printf("Los valores invertidos son a = %d y b = %d\n", *p_a, *p_b);
}

void orden(int *p_c, int *p_d){
    int aux, c, d;
    p_c = &c;
    p_d = &d;
    printf("Ingrese un numero a para comparar y devolver los numeros en orden\n");
    scanf("%d", &c);
    printf("Ingrese un numero b para comparar y devolver los numeros en orden\n");
    scanf("%d", &d);
    if((*p_c) >= (*p_d)){
        printf("El valor mas grande es a = %d y b = %d\n", *p_c, *p_d);
    }
    else{
        aux = *p_c;
        *p_c = *p_d;
        *p_d = aux;
        printf("El valor mas grande es a = %d y b = %d\n", *p_c, *p_d);
    }
}