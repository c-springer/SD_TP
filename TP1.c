#include <stdio.h>
#include <math.h>
#include <locale.h>

int getLista(){
    int arraySize;
    do{
        printf("Insira a quantidade de valores: ");
        scanf("%d", arraySize);

        if (arraySize > 100) {
                printf("Numero demasiado grande\n\n");

        }

        else if (arraySize < 0) {
            printf("Numero demasiado grande\n\n");

        }

    } while (arraySize > 100 || arraySize < 0);

    int myLista [arraySize];
}

int returnLista() {
    
} 

int changeLista() {
    
} 

int getMedia() {
    
} 

int getDesvio() {
    
} 

int getMediana() {
    
}

int main() {
    setlocale(LC_ALL, "pt_PT.UTF-8");
    setlocale(LC_NUMERIC, "c");

    int i; // # para o case
    do {
        printf("1 – Inserir valores\n2 – Listar valores inseridos\n3 – Alterar um valor inserido\n4 – Calcular o valor médio\n5 – Calcular o desvio-padrão\n6 – Calcular a mediana\n7 – Sair/Terminar\n\nEscolha uma das opções: "); //promt pro utilizador
        scanf("%d", &i); //# para o case
        switch(i){
            case 1:
                getLista(); 
                break;
            case 2:
                returnLista(); 
                break;
            case 3:
                changeLista();
                break;
            case 4:
                getMedia();
                break;        
            case 5:
                getDesvio();
                break;        
            case 6:
                getMediana();
                break;        
            case 7:
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
   } while(i!=7);
    return 0;
}