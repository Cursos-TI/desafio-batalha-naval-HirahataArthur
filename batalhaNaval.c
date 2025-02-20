#include <stdio.h>
#define LINHA 10 //contantes para melhor manutencao do codigo
#define COLUNA 10
//recursividade para habilidade cone
void HabilidadeCone(int matriz[LINHA][COLUNA]){
    
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {    
                int baseC = 8;  // Define a coorddenada linha da base do cone, localizada  na metade horizotal do tabuleiro
                int centroC = COLUNA / 2;  // linha central do cone, localizada na metade vertical do tabuleiro
            
                // nivel do topo do cone
                matriz[baseC - 2][centroC] = 1; //preenche o topo, seguindo o CentroC (coluna), e 2 casas acima da baseC
            
                // nivel ddo meio
                matriz[baseC - 1][centroC - 1] = 1; //preenche a lateral esquerda do cone da linha do meio em 1 casa
                matriz[baseC - 1][centroC] = 1; //preenche o meio do cone, 1 casa cima do nivel da base e exatamente no nivel da coluna
                matriz[baseC - 1][centroC + 1] = 1; //preenche a lateral direita do cone da linha do meio em 1 casa
            
                // base do cone
                matriz[baseC][centroC - 2] = 1; //preenche duas casas para a esquerda do cone depois no centro definido
                matriz[baseC][centroC - 1] = 1; //preenche 1 casa pra a esquerda do cone dps do centro
                matriz[baseC][centroC] = 1; //preenche o centro 
                matriz[baseC][centroC + 1] = 1; //preenche duas casas para a direitaa do cone depois no centro definido
                matriz[baseC][centroC + 2] = 1;   //preenche 1 casa pra a esquerda do cone dps do centro
            
            
        }
        
    }
    

}
//recursividade para habilidade octedro
void HabilidadeOctaedro(int matriz[LINHA][COLUNA]){
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            int centroO = 1; //centro octedro COLUNA
            int centroO2 = 4; //centro octaedro LINHA

            matriz[centroO2][centroO] = 1; //preenche o centro do octaedro

            matriz[centroO2 - 1][centroO] = 1; //preenche as laterais do centro 
            matriz[centroO2 + 1][centroO] = 1;

            matriz[centroO2][centroO - 1] = 1; //preenche 1 casa em cima e embaixo do centro
            matriz[centroO2][centroO + 1] = 1;
        }
    }
}
//recursividade para habilidade cruz
void HabilidadeCruz(int matriz[LINHA][COLUNA]){

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            int centroCr = 2; //LINHA centro cruz
            int centroCr2 = 7; //COLUNA  centro cruz

            matriz[centroCr][centroCr2] = 1; //centro daa cruz

            matriz[centroCr][centroCr2 - 2] = 1; //laterais direitas da cruz 
            matriz[centroCr][centroCr2 - 1] = 1;
            matriz[centroCr][centroCr2 + 1] = 1; //laterais esquerdas da cruz
            matriz[centroCr][centroCr2 + 2] = 1;

            matriz[centroCr - 1][centroCr2] = 1;//cima da cruz
            matriz[centroCr + 1][centroCr2] = 1;//baixo da cruz
        }
    }
}
    















int main(){
 int matriz[LINHA][COLUNA] = {0}; //declarando uma matriz 10C10 inteira de 0, que simboliza agua

 //chamada das habilidades
 HabilidadeCone(matriz);
 HabilidadeOctaedro(matriz);
 HabilidadeCruz(matriz);


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
        if (matriz[i][j] == 1) { 
            printf(" %d ", matriz[i][j]);
            
        } else if (i == 1 && j <= 4 && j > 1) //coloca um navio na horizontal 
        {
            matriz[i][j] = 3;
            printf(" %d ", matriz[i][j]);
        } else if (j == 9 && i >= 5 && i < 8) //navio na vertical
        {
            matriz[i][j] = 3;
            printf(" %d ", matriz[i][j]);

        }else if (i == j && i > 2 && i < 6 && j > 2 && j < 6) //navio na diagonal primaria
        {
            matriz[i][j] = 3;
            printf(" %d ", matriz[i][j]);

        } else if ((i + j) == 9 && i > 6 && j < 3) //navio na diagonal secundaria
        {
            matriz[i][j] = 3;
            printf(" %d ", matriz[i][j]);
            
        }else{
            printf(" 0 ");
        }
        
    }
    printf("\n");
    
 }
    printf("COORDENADAS NAVIOS:\n"); //para ler a matriz toda e detectar quais coordenadas tem navios
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == 3) {
                printf("Navio no indice (%d, %d)\n", i, j);
            }
        }
    }
    printf("\nCOORDENADAS ATINGIDAS POR HABILIDADES\n");
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] == 1)
            {
                printf("Area atingida: indice (%d, %d) \n", i, j);
            }
            
        }
        
    }
    
  
 


    return 0;
}