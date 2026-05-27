#include <stdio.h>

int main () {
    int idade;
    float altura;
    char nome[20];
    char letra;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);
    // aqui nao se usa o & pq se usa o %s, ou seja, trabalhando com uma string/cadeia de caracteres

    printf("Digite sua letra favorita (vai ser ignorado): ");
    scanf("%c", &letra);
    printf("Sua letra favorita é (vai ser ignorado): %c\n", letra);
    // aqui ele não vai ler a letra por conta de uma peculiaridade da linguagem C
    // na linguagem C o enter também é um caractere e ele fica no buffer do programa
    // ou seja como enter é um caractere quando você digita e aperta enter ele lê o enter
    // como se fosse o valor do %c, da pra contornar isso colocando um espaço antes da especificação do caractere

    printf("Digite sua letra favorita: ");
    scanf(" %c", &letra); // dessa forma
    printf("Sua letra favorita é: %c\n", letra);

    // sintatexe basica do printf:
    // printf(''texto com formatação'', variavel1, variavel2, ...);

    // sintatexe do printf com variavel:
    // printf(“%formato1 %formato2”, variável1, variável2);

    // sintaxe do scanf:
    // scanf(''formato'', &variavel);

    // sintaxe do fgets 

    // fgets inclui o '\n' na string, então podemos removê-lo se necessário
    // fgets(array onde a string tá armazenada, tamanho max incluindo o \n e o \0, fluxo de entrada geramente o padrão é o stdin); 
    // fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)

    return 0;
}

// \n -> quebra de linha (nova linha)
// %d -> imprime um inteiro decimal (int)
// %i -> equivalente a %d no printf
// %f -> imprime um número de ponto flutuante (float ou double)
// %e -> imprime um número de ponto flutuante em notação científica
// %c -> imprime um único caractere (char)
// %s -> imprime uma cadeia de caracteres (string)
