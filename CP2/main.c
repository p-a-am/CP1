#include <stdio.h>

void fibonacci(int num){
    int anterior = 1;
    int atual = 1;
    for(int i = 0; i <= num - 1; i++){
        if(i == 0){
            printf("0 ");
        }
        else if ((i == 1) || (i == 2)){
            printf("1 ");
        }
        else{
            printf("%d ",(anterior + atual));
            int temp = anterior;
            anterior = atual;
            atual += temp;
        }
    }
}

void fatorial(int num){
    int atual = 1;
    for(int i = 1; i <= num; i++){
        atual *= i;
        printf("%d! = %d \n",i , atual);
    }
}

void ehpalindromo(char v[100]){
    scanf("%s", v);
    int i = 0;
    int j = 0;
    while(v[j] != '\0'){
        j++;
    }
    j--;
    int eh = 1;
    while(i < j){
        if(v[i] != v[j]){
            eh = 0;
            break;
        }
        i++;
        j--;
    }
    if(eh == 1){
        printf("É palíndromo\n");
    } else {
        printf("Não é palíndromo\n");
    }
}

void ehsubstring(char str[100], char sub[100]){
    scanf("%s", str);
    scanf("%s", sub);
    int i, j, k;
    int encontrado = 0;
    for(i = 0; str[i] != '\0'; i++){
        for(j = i, k = 0; sub[k] != '\0' && str[j] == sub[k]; j++, k++);
        if(sub[k] == '\0'){
            encontrado = 1;
            break;
        }
    }
    if(encontrado){
        printf("É substring\n");
    } else {
        printf("Não é substring\n");
    }
}

int main()
{
    printf("===== MENU DE EXERCÍCIOS =====\n1 - Sequência de Fibonacci;\n2 - Fatoriais;\n3 - Verificar Palíndromo;\n4 - Verificar Substring.\n");
    int opcao;
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
            printf("Digite um número de 1 a 50: ");
            int numero;
            scanf("%d", &numero);
            printf("\nSequência de números de Fibonacci:\n");
            fibonacci(numero);
            break;
        case 2:
            printf("Digite um número de 1 a 20: ");
            int numro;
            scanf("%d", &numro);
            printf("\nFatoriais:\n");
            fatorial(numro);
            break;
        case 3:
            printf("Digite a palavra a ser verificada: ");
            char v[100];
            ehpalindromo(v);
            break;
        case 4:
            printf("Digite a string e a substring:\n");
            char str[100];
            char sub[100];
            ehsubstring(str, sub);
            break;
    }
    return 0;
}
