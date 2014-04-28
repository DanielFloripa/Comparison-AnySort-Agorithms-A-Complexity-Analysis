//Bubble sort
#include "questao4.h"

void BubbleSort(int *v, int n) {
    int i, j, aux;

    for (i = n - 1; i > 0; i--)
        for (j = 0; j < i; j++)
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
}


void menuBubble(){
    //Variaveis para calculo de tempo
    clock_t tempoInicial, tempoFinal;
    double tempoGasto;
    
    //Variaveis de controle
    int tamVet;
    int i;
    int *v;
    char opcao;
    
    do {
        system("clear");
        printf("\t\t ALGORITMOS DE ORDENACAO  \n");
        printf("\t 1 - BUBBLE SORT\n"); 
        printf("[1] Ordenacao Crescente (melhor caso)   \n");
        printf("[2] Ordenacao Decrescente (pior caso)   \n");
        printf("[3] Ordenacao Aleatoria          \n");
        printf("[4] Apresentar resultados        \n");
        printf("[0] Voltar ao Menu Principal     \n");             
        printf("         Escolha a opcao: ");
        opcao = getchar();
        __fpurge(stdin);
        fflush(stdin);    
        
        switch(opcao){
            case '1': {
                printf("\n\n\t\t Informe o tamanho do vetor: ");
                scanf("%d",&tamVet);
                int vet[tamVet];
                
                for(i=0;i<tamVet;i++){
                    vet[i] = i;      
                }
                v = vet;
                
                tempoInicial = clock();
                BubbleSort(v,tamVet);
                tempoFinal = clock();
                
                tempoGasto = (tempoFinal - tempoInicial)/(double)CLOCKS_PER_SEC;
                printf("\t\t Tempo de execucao: %.3f segundos\n\n",tempoGasto);
                 __fpurge(stdin);
				fflush(stdin);
                getchar();
            }; break;
            
            case '2': {
                printf("\n\n\t\t Informe o tamanho do vetor: ");
                scanf("%d",&tamVet);
                int vet[tamVet];
                
                for(i=0;i<tamVet;i++){
                    vet[i] = tamVet-i;      
                }
                v = vet;
                
                tempoInicial = clock();
                BubbleSort(v,tamVet);
                tempoFinal = clock();
                
                tempoGasto = (tempoFinal - tempoInicial)/(double)CLOCKS_PER_SEC;
                printf("\t\t Tempo de execucao: %.3f segundos\n\n",tempoGasto);
                 __fpurge(stdin);
				fflush(stdin);
                getchar();
            }; break;
            
            case '3': {
                printf("\n\n\t\t Informe o tamanho do vetor: ");
                scanf("%d",&tamVet);
                int vet[tamVet];
                
                for(i=0;i<tamVet;i++){
                    vet[i]= rand()%5000; 
                }
                v = vet;
                
                tempoInicial = clock();
                BubbleSort(v,tamVet);
                tempoFinal = clock();
                
                tempoGasto = (tempoFinal - tempoInicial)/(double)CLOCKS_PER_SEC;
                printf("\t\t Tempo de execucao: %.3f segundos\n\n",tempoGasto);
                 __fpurge(stdin);
				fflush(stdin);
                getchar();
            }; break;
            
            case '4': {
                printf("\n\n\t\t Complexidade melhor caso: O(n^2)");
                printf("\n\n\t\t Complexidade pior caso:   O(n^2)");
                printf("\n\n\t\t Complexidade caso medio:  O(n^2)");
                 __fpurge(stdin);
		fflush(stdin);
                getchar();
            }; break;
            
            default: {
            }
        }
    }
    while(opcao != '0');
}

