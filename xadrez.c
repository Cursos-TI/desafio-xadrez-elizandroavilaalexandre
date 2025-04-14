#include <stdio.h>

void moverEsquerda(int casas)
{
    if(casas>0){
        printf("esquerda %d\n", casas);
        moverEsquerda(casas - 1);
    }
}

void moverDireita(int casas)
{
    if(casas>0){
        printf("direita %d\n",casas);
        moverDireita(casas - 1);
    }
}

void moverFrente(int casas)
{
    if(casas>0){
        printf("frente %d\n", casas);
        moverFrente(casas - 1);
    }
}

void moverTras(int casas)
{
    if(casas>0){
        printf("tras %d\n", casas);
        moverTras(casas - 1);
    }
}

void moverDiagonalDireitaFrente(int casas)
{
    if(casas>0){
        printf("diagonal direita frente %d\n", casas);
        moverDiagonalDireitaFrente(casas - 1);
    }
}
void moverDiagonalEsquerdaFrente(int casas)
{
    if(casas>0){
        printf("diagonal esquerda frente %d\n", casas);
        moverDiagonalEsquerdaFrente(casas - 1);
    }
}
void moverDiagonalEsquerdaTras(int casas)
{
    if(casas>0){
        printf("diagonal esquerda trás %d\n", casas);
        moverDiagonalEsquerdaTras(casas - 1);
    }
}
void moverDiagonalDireitaTras(int casas)
{
    if(casas>0){
        printf("diagonal direita trás %d\n", casas);
        moverDiagonalDireitaTras(casas - 1);
    }
}



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
        
        for (; peca == 0 || peca >6;)
        {
            printf("opção inválida. Tente novamente\n");
            printf("\n");
            printf("1 - torre\n");
            printf("2 - bispo\n");
            printf("3 - rainha\n");
            printf("4 - cavalo\n");
            printf("5 - peão\n");
            printf("6 - rei\n");
            scanf("%d", &peca);
        }
        

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
    for (; direcao == 0 || direcao >4;)
        {
            printf("opção inválida. Tente novamente\n");
            printf("\n");
            printf("Escolha a direção da peça (apenas número)\n");
            printf("1-Esquerda\n");
            printf("2-direita\n");
            printf("3-frente\n");
            printf("4-trás\n");
            scanf("%d", &direcao);
        }
    printf("\n");
    printf("\n");
    printf("escolha a quantidade de casas(1 a 7): ");
    scanf("%d", &casas);          
    printf("\n");
        switch (direcao)
        {
        case 1:
            moverEsquerda(casas);        
            break;
        case 2:
            moverDireita(casas);           
            break;        
        case 3:
            moverFrente(casas);
            break;
        case 4:
            moverTras(casas);    
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
        for (; direcao == 0 || direcao >4;)
        {
            printf("opção inválida. Tente novamente\n");
            printf("\n");
            printf("Opções para direção da peça:\n");
            printf("1-diagonal Esquerda frente\n");
            printf("2-diagonal direita frente\n");
            printf("3-diagonal esquerda trás\n");
            printf("4-diagonal direita trás\n");
            printf("\n");
            printf("escolha uma opção: ");
            scanf("%d", &direcao);
        }
        printf("\n");
        printf("escolha a quantidade de casas: ");
        scanf("%d", &casas);
        
        switch (direcao)
        {
            case 1: 
                for ( int i = 1; i <= casas; i++)
                {
                    printf("diagonal esquerda frente %d\n", i);
                }
                     
            break;
        
            case 2: 
                for ( int i = 1; i <= casas; i++)
                {
                    printf("diagonal direita frente %d\n", i);
                }            
                                  
                      
            break;
        case 3:            
            moverDiagonalEsquerdaTras(casas);  
            break; 

        case 4:            
            moverDiagonalDireitaTras(casas); 
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
        for (; direcao == 0 || direcao >8;)
        {
            printf("opção inválida. Tente novamente\n");
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
        }
        printf("\n");
        printf("escolha a quantidade de casas: ");
        scanf("%d", &casas);
        
        switch (direcao)
        {
            case 1:                        
                moverDiagonalEsquerdaFrente(casas);           
            break; 

            case 2:            
                moverDiagonalDireitaFrente(casas);        
            break;  

            case 3:            
                moverDiagonalEsquerdaTras(casas);  
            break; 

            case 4:            
                moverDiagonalDireitaTras(casas); 
            break; 
            
            case 5:
            moverEsquerda(casas);        
            break;

            case 6:
                moverDireita(casas);           
            break;

            case 7:
                moverFrente(casas);
            break;

            case 8:
                moverTras(casas);    
            break;
            
        }
        break;
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
        for (; direcao == 0 || direcao >8;)
        {
            printf("opção inválida. Tente novamente\n");
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
        }
        
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
        break;
case 5:
    printf("você escolheu o peão:\n");
    printf("\n");
    printf("Escolha a direção da peça (apenas número)\n");
    printf("1-Diagonal Esquerda frente\n");
    printf("2-diagonal direita frente\n");
    printf("3-frente\n");
    scanf("%d", &direcao);   
    printf("\n");
    for (; direcao == 0 || direcao >3;)
        {
        printf("opção inválida. Tente novamente\n");
        printf("\n");
        printf("Escolha a direção da peça (apenas número)\n");
        printf("1-Diagonal Esquerda frente\n");
        printf("2-diagonal direita frente\n");
        printf("3-frente\n");
        scanf("%d", &direcao);   
        printf("\n");
            
        }
    printf("escolha a quantidade de casas (1 ou 2): ");
    scanf("%d", &casas);
    switch (direcao)
    {
    case 1:
        moverDiagonalEsquerdaFrente(casas);
    break;
    case 2:
        moverDiagonalDireitaFrente(casas);
    break;
    case 3:
        moverFrente(casas);
    break;
    }
    break;
 case 6:
    printf("você escolheu o rei:\n");
    printf("\n");
    printf("Escolha a direção da peça (apenas número)\n");
    printf("1-Diagonal frente Esquerda\n");
    printf("2-diagonal frente direita\n");
    printf("3-frente\n");
    printf("4-trás\n");
    printf("5-esquerda\n");
    printf("6-direita\n");
    scanf("%d", &direcao);   
    printf("\n");
    for (; direcao == 0 || direcao >6;)
        {
        printf("opção inválida. Tente novamente\n");
        printf("\n");
        printf("Escolha a direção da peça (apenas número)\n");
        printf("1-Diagonal frente Esquerda\n");
        printf("2-diagonal frente direita\n");
        printf("3-frente\n");
        printf("4-trás\n");
        printf("5-esquerda\n");
        printf("6-direita\n");
        scanf("%d", &direcao);   
        printf("\n");
            
        }
    casas = 1;

    switch (direcao)
    {
    case 1:
        moverDiagonalEsquerdaFrente(casas);
    break;
    case 2:
        moverDiagonalDireitaFrente(casas);
    break;
    case 3:
        moverFrente(casas);
    break;
    case 4:
        moverTras(casas);
    break;
    case 5:
        moverEsquerda(casas);
    break;
    case 6:
        moverDireita(casas);
    break;
    default:
        printf("opção inválida.");
    break;
    }
            
    
             
}
}