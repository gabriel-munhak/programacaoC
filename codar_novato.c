#include <stdio.h>

int main() {
    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite o seu nome: ");
    scanf(" %s", nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a sua matricula: ");
    scanf("%d", &matricula);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    printf("O seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua matricula é: %d\n", matricula);
    printf("Sua altura é: %f\n", altura);
    return 0;
}