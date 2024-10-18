#include <stdio.h>
#include <stdlib.h>

/*3 – Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia
do teclado dois pontos e exiba a distância entre eles.

*/

struct pessoa{
        int x,y;
    };


int main()
{
    struct pessoa a,b,c;
    float distancia;
    printf("Digita as cordenadas do primeiro ponto\n");
    scanf("%i%i",&a.x,&a.y);
    printf("Digita as cordenadas do segundo ponto\n");
    scanf("%i%i",&b.x,&b.y);
    c.x=((a.x)-(b.x));
    c.y=((a.y)-(b.y));
    distancia=sqrt((c.y*c.y)+(c.x*c.x));
    printf("\nA distancia entre as duas cordenadas eh:%f",distancia);
    return 0;
}
