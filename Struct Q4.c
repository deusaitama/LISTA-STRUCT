#include <stdio.h>
#include <stdlib.h>

/*4 – Considerando a estrutura seguinte para representar um vetor no R3
. Implemente um programa que calcule e exiba a
soma de dois vetores.
struct strVetor{
float x;
float y;
float z;
};

*/

struct strVetor{
    float x;
    float y;
    float z;
};


int main()
{
    struct strVetor a,b,c;
    printf("Digita as cordenadas do primeiro vetor\n");
    scanf("%f%f%f",&a.x,&a.y,&a.z);
    printf("Digita as cordenadas do segundo vetor\n");
    scanf("%f%f%f",&b.x,&b.y,&b.z);
    c.x=((a.x)+(b.x));
    c.y=((a.y)+(b.y));
    c.z=((a.z)+(b.z));

    printf("\nA soma dos dois vetores eh {%.0f,%.0f,%.0f}",c.x,c.y,c.z);
    return 0;
}
