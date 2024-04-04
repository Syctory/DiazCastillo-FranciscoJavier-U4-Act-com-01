/*
Unidad 4, actividad complementaria 1. 
Escribe un programa el cual solicite una letra y te dija si es vocal o consonante 

Francisco Javier. D. Catillo 
Facultad de Contaduría y Administración, Universidad Autónoma de México 
8192
2125: Diseño de Algoritmos 
Juan Manuel. M. Fernández 
21 de marzo de 2024
*/
#include <stdio.h>

int main(){

    int letra;
    printf("Ingresa tu letra: ");
    scanf("%c", &letra);

    switch(letra)
    {
        case 'a' :
        printf("Su letra es una vocal ");
          break;
        case 'e':
        printf("Su letra es una vocal"); 
            break;
            case 'i':
        printf("Su letra es una vocal"); 
            break;
            case 'o':
        printf("Su letra es una vocal"); 
            break;
            case 'u':
        printf("Su letra es una vocal"); 
            break;
        default:
        printf("La letra es una consonante");
        break;
    }
}