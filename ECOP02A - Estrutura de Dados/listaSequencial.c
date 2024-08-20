#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef enum {true, false} bool;

char nome[MAX][20];
int dispo = 0;

int buscaNome(char chave[20]){
    int i = 0;

    while((i < dispo) && (strcmp(nome[i], chave) < 0)){
        i++;
    }
    if((i < dispo) && (strcmp(nome[i], chave) == 0)){
        return i;
    }
    else{
        return -1;
    }
}

bool insereNome(char chave[20]){
    int i = dispo;

    if(dispo >= MAX){
        return false;
    }

    while((i > 0) && (strcmp(nome[i - 1], chave) > 0)){
        strcpy(nome[i], nome[i - 1]);
        i--;
    }
    strcpy(nome[i], chave);
    dispo++;
    return true;
}

void imprimeLista(){
    int i = 0;
    while(i < dispo){
        printf("[%d] %s \n", i, nome[i]);
        i++;
    }
}

bool removeNome(char chave[20]){
    int i = 0;

    while((i < dispo) && (strcmp(nome[i], chave) < 0)){
        i++;
    }
    if((i < dispo) && (strcmp(nome[i], chave) == 0)){
        while(i < (dispo - 1)){
            strcpy(nome[i], nome[i + 1]);
            i++;
        }
        dispo--;
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, char *argv[]){
    int i;
    char chave[20];

    for(i = 0; i < 5; i++){
        printf("Digite o nome: ");
        scanf("%s", chave);
        if(buscaNome(chave) == -1){
            insereNome(chave);
        }
        else{
            printf("Nome já existe. Tente novamente.\n");
            i--;  // Para não contar a iteração caso o nome já exista
        }
    }

    imprimeLista();

    printf("Digite um nome a ser removido: ");
    scanf("%s", chave);
    if(removeNome(chave)){
        printf("Nome removido com sucesso.\n");
    } else {
        printf("Nome não encontrado.\n");
    }

    imprimeLista();

    return 0;
}
