#include <stdio.h>
#define LINHA 10 //contantes para melhor manutencao do codigo
#define COLUNA 10




int main(){
 int matriz[LINHA][COLUNA] = {0}; //declarando uma matriz 10x10 inteira de 0, que simboliza agua

 printf("TABULEIRO \n"); 
 // COORDENADAS DE CIMA
 printf("    "); 
 for (int j = 0; j < COLUNA; j++) { //para imprimir a orientacao para coordenadas de cima de 0 a 9
     printf("%d  ", j); 
 }
 printf("\n");
 

 for (int i = 0; i < LINHA; i++)
 {
    //  COORDENADAS LATERAIS
    printf("%d  ", i); // N da linha
    
    for (int j = 0; j < COLUNA; j++) //para saber onde colocar navios
    {
        
        if (i == 1 && j <= 4 && j > 1) //coloca um navio na horizontal 
        {
            matriz[i][j] = 3;
            printf(" 3 ");
        } else if (j == 9 && i >= 5 && i < 8) //navio na vertical
        {
            matriz[i][j] = 3;
            printf(" 3 ");
        }else if (i == j && i > 3 && i < 7 && j > 3 && j < 7) //navio na diagonal primaria
        {
            printf(" 3 ");
            matriz[i][j] = 3;
        } else if ((i + j) == 9 && i > 6 && j < 3) //navio na diagonal secundaria
        {
            matriz[i][j] = 3;
            printf(" 3 ");
            
        }
        
        
        else{
            printf(" 0 ");
        }
        
        
    }
    printf("\n");
    
 }
    printf("COORDENADAS NAVIOS:\n"); //para ler a matriz toda e detectar quais coordenadas tem navios
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == 3) {
                printf("Navio em (%d, %d)\n", i, j);
            }
        }
    }
  
 


    return 0;
}