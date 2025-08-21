#include <stdio.h>

void torreFunc(int n){ //Função da torre
    if(n==0){ //Verifica se variável "n" é zero
        return; //Se sim, encerra função
    }
    printf("Direita\n"); //Print do movimento
    torreFunc(n-1); //Recursividade
}

void bispoFunc(int n){ //Função do bispo
    if(n==0){ //Verifica se variável "n" é zero
        return; //Se sim, encerra função
    }
    for(int i=0; i<1; i++){ //Inicia loop externo
        printf("Cima\n"); //Print do movimento
        for(int j=0; j<1; j++){ //Inicia loop interno
            printf("Direita\n"); //Print do Movimento
        }
    }
    bispoFunc(n-1); //Recursividade
}

void rainhaFunc(int n){ //Função da rainha
    if(n==0){ //Verifica se variável "n" é zero
        return; //Se sim, encerra função
    }
    printf("Esquerda\n"); //Print do movimento
    rainhaFunc(n-1); //Recursividade
}

void cavaloFunc(int flagC, int horiC, int vertC){ //Função do cavalo
    while(flagC--){ //Inicia loop e ao finalizar, decrementa variável
        for(int i=1, j=2; i<=2 && j>=1; i++, j--){ //Inicia loop aninhado
            if(i<=2){ //Verifica se variável é menor ou igual a 2
                printf("Cima\n"); //Se sim, print de movimento
            }
            if(j==1){ //Verifica se variável é igual a 1
                printf("Direita\n"); //Se sim, print de movimento
                break; //Encerra loop
            }
        }
    }
}

void main(){ //Inicia o programa principal
    int torre=5,bispo=5,rainha=8,flagCavalo=1,horiCavalo=1,vertCavalo=2;//Definindo variáveis

    printf("Torre:\n"); //Print de peça
    torreFunc(torre); //Chama função
    printf("Torre se moveu %d casas para a direita.\n",torre); //Print de quantas casas moveu

    printf("\nBispo:\n"); //Print de peça
    bispoFunc(bispo); //Chama função
    printf("Bispo se moveu %d casas para a diagonal direita.\n",bispo); //Print de quantas casas moveu

    printf("\nRainha:\n"); //Print de peça
    rainhaFunc(rainha); //Chama função
    printf("Rainha se moveu %d casas para a esquerda.\n", rainha); //Print de quantas casas moveu

    printf("\nCavalo:\n"); //Print de peça
    cavaloFunc(flagCavalo,horiCavalo,vertCavalo); //Chama função
    printf("Cavalo se moveu %d casas para cima e %d casas para a direita.\n",vertCavalo,horiCavalo); //Print de quantas casas moveu
}
