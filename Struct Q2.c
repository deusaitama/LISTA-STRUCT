#include <stdio.h>
#include <stdlib.h>

/*2 – Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia
do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0, 0).
*/

struct pessoa{
        int x,y;
    };


int main()
{
    struct pessoa a;
    float distancia;
    printf("Digita x\n");
    scanf("%i",&a.x);
    printf("Digita y\n");
    scanf("%i",&a.y);
    distancia=sqrt((a.x*a.x)+(a.y*a.y));
    printf("\nA distancia do ponto para a origem das cordenadas eh:%f",distancia);
    return 0;
}
