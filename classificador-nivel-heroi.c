#include <stdio.h>
#include <string.h>

int main(){
    char nome[25] = "ERRO: nome";
    char rank[50] = "ERRO: rank";
    int xp = -1;
    
    printf("Digite o nome do seu heroi.\n");
    scanf("%[^\n]s", nome);
    
    printf("Digite a quantidade de xp.\n");
    scanf("%i", &xp);
    
    if (xp < 0){
        strcpy(rank, "ERRO: rank");
    } else if (xp < 1000) {
        strcpy(rank, "Ferro");
    } else if (xp >= 10001) {
        strcpy(rank, "Radiante");
    } else{
        switch(xp){
            case 1001 ... 2000:
                strcpy(rank, "Bronze");
                break;
            case 2001 ... 5000:
                strcpy(rank, "Prata");
                break;
            case 5001 ... 7000:
                strcpy(rank, "Ouro");
                break;
            case 7001 ... 8000:
                strcpy(rank, "Platina");
                break;
            case 8001 ... 9000:
                strcpy(rank, "Ascendente");
                break;
            case 9001 ... 10000:
                strcpy(rank, "Imortal");
                break;
        }
    }
    
    printf("\nO heroi de nome %s esta no nivel de %s", nome, rank);
    
    return 0;
}
