#include <locale.h>
#include <math.h>
#include <stdio.h>

int getLista(float array[1000], int *ptr_arraySize){
    int i;

    do
    {
        printf("Insira a quantidade de valores: ");
        scanf("%d", &*ptr_arraySize);

        if ((*ptr_arraySize) > 1000)
        {
            printf("Numero demasiado grande\n\n");
        }

        else if ((*ptr_arraySize) < 1)
        {
            printf("Numero demasiado pequeno\n\n");
        }
    } while ((*ptr_arraySize) > 1000 || (*ptr_arraySize) < 1);
    
    printf("Insira os valores:\n");
    for (i = 0; i < (*ptr_arraySize); i++)
    {
        scanf("%f", &array[i]);
    }
    return (array, *ptr_arraySize);
}

int returnLista(float array[1000], int *ptr_arraySize)
{
    int i;     // posição na array
    int n = 0; // contador para fazer print da array
    char r;    // resposta do utilizador

    for (i = 0; i < (*ptr_arraySize); i++)
    {
        printf("%.2f\n", array[i]);
        if (n < 5) n++;   ///////////////////////////////////////////////////

        if (n == 5) // voltar a mudar para 20//////////////////////////////////
        {
            printf("\n");
            printf("Quer continuar? y ou n\n");
            scanf("%*c");
            
            scanf("%c", &r);
            printf("\n");
            
            if (r == 'y')
            {
                n = 0;
            }

            else if (r == 'n') break;
            else printf("Resposta invalida\n\n");
        }
    }
    return 0;
} 

int changeLista(float array[1000], int *ptr_arraySize)
{
    int i;
    int novoValor;

    // printf("\n\n");
    printf("Qual é a posição do número que quer alterar? ");
    scanf("%d", &i);
    
    if (i < 0 || i > (*ptr_arraySize)) printf("Posição inválida\n\n");
    else
    {
        printf("O valor que quer mudar é: %.2f\n", array[i]);
        printf("\n");

        printf("Qual é o novo valor? ");
        scanf("%d", &novoValor);

        array[i] = novoValor;

        printf("O valor foi alterado para: %d\n", novoValor);
    }
    return 0;
}

float getMedia(float array[1000], int *ptr_arraySize, float media)
{
    // media = 0;
    float soma = 0;
    int i;
    
    for (i = 0; i < (*ptr_arraySize); i++)
    {
        soma = soma + array[i];
    }

    media = (float) soma / (*ptr_arraySize);
    printf("A média dos %d elementos desta Array é: %.2f\n", *ptr_arraySize, media);

    return media;
}

int getDesvio(float array[1000], int *ptr_arraySize, float media)   // array[i] -> x_i  ;  *ptr_arraySize -> N
{
    int i; // posicao na array
    float somatorio = 0;
    float desvio;

    if (media == 0)
    {
        getMedia(array, ptr_arraySize, media);
    }

    for (i = 0; i < (*ptr_arraySize); i++)
    {
        somatorio += ((double) (array[i] - media, 2));
    }
    desvio = sqrt(somatorio / (*ptr_arraySize));
    printf("O desvio-padrão é: %.4f", desvio);

    return desvio;
}

int getMediana()
{
    
}

int main()
{
    setlocale(LC_ALL, "pt_PT.UTF-8");
    setlocale(LC_NUMERIC, "c");

    int i; // # para o case

    float myLista[1000]; // array
    int arraySize;

    int *ptr_arraySize = &arraySize;
    ptr_arraySize = &arraySize;
    float media;
    float desvio;

    /*
    float myLista[21] = {1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    int arraySize = 21;
    */

    do
    {
        printf("1 – Inserir valores\n2 – Listar valores inseridos\n3 – Alterar um valor inserido\n4 – Calcular o valor médio\n5 – Calcular o desvio-padrão\n6 – Calcular a mediana\n7 – Sair/Terminar\n\nEscolha uma das opções: "); // promt pro utilizador
        scanf("%d", &i); // # para o case
        
        switch (i)
        {
            case 1:
                getLista(myLista, ptr_arraySize);
                printf("\n\n");
                break;

            case 2:
                returnLista(myLista, ptr_arraySize); 
                printf("\n\n");
                break;

            case 3:
                changeLista(myLista, ptr_arraySize);
                printf("\n\n");
                break;

            case 4:
                getMedia(myLista, ptr_arraySize, media);
                printf("\n\n");
                break;

            case 5:
                getDesvio(myLista, ptr_arraySize, media);
                printf("\n\n");
                break;

            case 6:
                getMediana();
                printf("\n\n");
                break;

            case 7:
                break;

            default:
                printf("Opção inválida. Tente novamente.\n\n");
                break;
        }
   } while (i != 7);
   
    printf("FIM DO PROGRAMA!!");
}
