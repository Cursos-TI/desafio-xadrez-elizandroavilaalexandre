#include <stdio.h>
int main(){
int peca;
int direcao;
int casas;
int contador;

printf("******Jogo de Xadrez******\n");
        printf("escolha qual peça quer movimentar:\n");
        printf("1 - torre\n");
        printf("2 - bispo\n");
        printf("3 - rainha\n");
        printf("4 - cavalo\n");
        printf("5 - peão\n");
        printf("6 - rei\n");
        scanf("%d", &peca);
switch (peca)
{
case 1:
    printf("você escolheu a torre:\n");
    printf("\n");
    printf("Escolha a direção da peça (apenas número)\n");
    printf("1-Esquerda\n");
    printf("2-direita\n");
    printf("3-frente\n");
    printf("4-trás\n");
    scanf("%d", &direcao);   
    printf("\n");
    printf("\n");
    printf("escolha a quantidade de casas(1 a 7): ");
    scanf("%d", &casas);          
    printf("\n");
        switch (casas)
        {
        case 1:
            contador = 1;
            while (contador <= casas)
            {
            printf("Torre - esquerda %d\n", contador);
            contador ++;
             }
        
            break;
        case 2:
             contador = 1;
            while (contador <= casas)
            {
            printf("Torre - direita %d\n", contador);
            contador ++;
            }
            
            break;        
        case 3:
             contador = 1;
             while (contador <= casas)
            {
            printf("Torre - frente %d\n", contador);
             contador ++;
            }
                
            break;
        case 4:
            contador = 1;
            while (contador <= casas)
            {
            printf("Torre - trás %d\n", contador);
            contador ++;
            }
                    
            break;
        }
        break;
case 2:
printf("você escolheu o bispo:\n");
        printf("\n");
        printf("Opções para direção da peça:\n");
        printf("1-diagonal Esquerda frente\n");
        printf("2-diagonal direita frente\n");
        printf("3-diagonal esquerda trás\n");
        printf("4-diagonal direita trás\n");
        printf("\n");
        printf("escolha uma opção: ");
        scanf("%d", &direcao);
        printf("\n");
        
        
        switch (direcao)
        {
        case 1:                        
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("bispo - diagonal esquerda frente %d\n", contador);                
                }
                printf("\n");
            break;
       
         case 2:            
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("bispo - diagonal direita frente %d\n", contador);                
                }
                printf("\n");
            break;  
        case 3:            
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("bispo - diagonal esquerda trás %d\n", contador);                
                }
                printf("\n");
            break; 
        case 4:            
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("bispo - diagonal direita trás %d\n", contador);                
                }
                printf("\n");
            break; 
            
        }
        break; 
case 3:
printf("você escolheu a rainha:\n");
        printf("\n");
        printf("Opções para direção da peça:\n");
        printf("1-diagonal Esquerda frente\n");
        printf("2-diagonal direita frente\n");
        printf("3-diagonal esquerda trás\n");
        printf("4-diagonal direita trás\n");
        printf("5-esquerda\n");
        printf("6-direita\n");
        printf("7-frente\n");
        printf("8-trás\n");
        printf("\n");
        printf("escolha uma opção: ");
        scanf("%d", &direcao);
        printf("\n");
        
        
        switch (direcao)
        {
        case 1:                        
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("rainha - diagonal esquerda frente %d\n", contador);                
                }
                printf("\n");
            break;
        
        case 2:            
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("rainha - diagonal direita frente %d\n", contador);                
                }
                printf("\n");
            break;  
        case 3:            
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("rainha -diagonal esquerda trás %d\n", contador);                
                }
                printf("\n");
            break; 
        case 4:            
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                
                for(contador=1; contador<=casas;contador++)
                {
                    printf("rainha - diagonal direita trás %d\n", contador);                
                }
                printf("\n");
            break; 
        case 5:            
        printf("escolha a quantidade de casas: ");
        scanf("%d", &casas);
            
            for(contador=1; contador<=casas;contador++)
            {
                printf("rainha - esquerda %d\n", contador);                
            }
            printf("\n");
        break; 
        case 6:            
        printf("escolha a quantidade de casas: ");
        scanf("%d", &casas);
            
            for(contador=1; contador<=casas;contador++)
            {
                printf("rainha - direita %d\n", contador);                
            }
            printf("\n");
        break; 
        case 7:            
        printf("escolha a quantidade de casas: ");
        scanf("%d", &casas);
            
            for(contador=1; contador<=casas;contador++)
            {
                printf("rainha - frente %d\n", contador);                
            }
            printf("\n");
        break;
        case 8:            
        printf("escolha a quantidade de casas: ");
        scanf("%d", &casas);
            
            for(contador=1; contador<=casas;contador++)
            {
                printf("rainha - trás %d\n", contador);                
            }
            printf("\n");
        break;
        }
case 4:
printf("você escolheu a cavalo:\n");
        printf("\n");
        printf("Opções para direção da peça:\n");
        printf("1-esquerda acima\n");
        printf("2-esquerda abaixo\n");
        printf("3-direita acima\n");
        printf("4-direita abaixo\n");
        printf("5-acima esquerda\n");
        printf("6-acima direita\n");
        printf("7-abaixo esquerda\n");
        printf("8-abaixo direita\n");
        printf("\n");
        printf("escolha uma opção: ");
        scanf("%d", &direcao);
        printf("\n");
        
        
        switch (direcao)
        {
        case 1: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - esquerda\n");
                    i++;
                }
                
                printf("cavalo - acima\n");
            }                                 
                      
            break;
        
        case 2: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - esquerda\n");
                    i++;
                }
                
                printf("cavalo - abaixo\n");
            }                                 
                        
            break; 
        case 3: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - direita\n");
                    i++;
                }
                
                printf("cavalo - acima\n");
            }                                 
                        
            break;
    
        case 4: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - direita\n");
                    i++;
                }
                
                printf("cavalo - abaixo\n");
            }                                 
                        
            break; 
        case 5: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - acima\n");
                    i++;
                }
                
                printf("cavalo - esquerda\n");
            }                                 
                        
            break;
    
        case 6: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - acima\n");
                    i++;
                }
                
                printf("cavalo - direita\n");
            }                                 
                        
            break; 
        case 7: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - abaixo\n");
                    i++;
                }
                
                printf("cavalo - esquerda\n");
            }                                 
                        
            break; 
        case 8: 
            for (int i = 1; i <2; i++)
            {
                i=1;
                while (i<3)
                {
                    printf("cavalo - abaixo\n");
                    i++;
                }
                
                printf("cavalo - direita\n");
            }                                 
                        
            break; 

        }              
}
}
