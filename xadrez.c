#include <stdio.h>

void main(){ //Inicia o programa principal
    int torre=5,bispo=5,rainha=8,contadorWhile=1,contadorDoWhile=1,flagCavalo=1,horiCavalo=1,vertCavalo=2;//Definindo variáveis

    printf("Torre:\n");//Informa qual vai ser a peça a se mover
    for(int i=1;i<=torre;i++){//Inicia a estrutura de repetição "for". A cada vez que identificar que a variável "i" for menor ou igual ao valor de variavel "torre", ele executará o código dentro da estrutura e logo após adicionará 1 em variável "i".
        printf("Direita\n");
    }
    printf("Torre se moveu %d casas para a direita.\n",torre);//Informa quantas casas a peça se moveu

    printf("Bispo:\n");//Informa qual vai ser a peça a se mover
    while(contadorWhile<=bispo){//Inicia a estrutura de repetição "while". Enquanto a variavel "contadorWhile" for menor ou igual a variável "bispo", ele executará o código.
        printf("Cima e Direita\n");
        contadorWhile++;//Aqui soma +1 na variável "contadorWhile" para não haver loop infinito
    }
    printf("Bispo se moveu %d casas para a diagonal direita.\n",bispo);//Informa quantas casas a peça se moveu

    printf("Rainha:\n");//Informa qual vai ser a peça a se mover
    do{//Inicia a estrutura de repetição "do while". Indica qual código vai executar.
        printf("Esquerda\n");
        contadorDoWhile++;//Impede loop infinito somando +1 na variável "contadorDoWhile"
    }while(contadorDoWhile<=rainha);//Adiciona a condição "enquanto" ou "while" a variável "contadorDoWhile" for menor ou igual a variável "rainha"
    printf("Rainha se moveu %d casas para esquerda.\n",rainha);//Informa quantas casas a peça se moveu

    while(flagCavalo--){//Inicia loop e ao finalizar, decrementa variável
        for(int i=1; i<=2; i++){//Inicia loop aninhado
            printf("Baixo, ");
        }
        printf("Esquerda.\n");
    }
    printf("Cavalo se moveu %d casas para baixo e %d casas para a esqueda.\n",vertCavalo,horiCavalo);
}
