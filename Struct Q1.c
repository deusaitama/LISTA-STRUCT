#include <stdio.h>
#include <stdlib.h>

/*1 – Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma
estrutura. Em seguida, exiba em tela os dados da estrutura lida.
*/

struct pessoa{
        char nome[50];
        int idade;
        char endereco[50];
    };


int main()
{
    struct pessoa a;
    printf("Digita o nome da pessoa\n");
    gets(a.nome);
    printf("Digita a idade da pessoa\n");
    scanf("%i",&a.idade);
    setbuf(stdin,NULL);
    printf("Digita o endereco da pessoa\n");
    gets(a.endereco);
    printf("\nNome:%s",a.nome);
    printf("\nIdade:%i",a.idade);
    printf("\nEndereco:%s",a.endereco);

    return 0;
}
