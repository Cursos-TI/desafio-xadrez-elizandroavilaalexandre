#include <stdio.h>
int main(){
    
    int contador=1;
    int peca;
    int casas;
    int direcao;
        printf("******Jogo de Xadrez******\n");
        printf("escolha qual peça quer movimentar:\n");
        printf("1 - torre\n");
        printf("2 - bispo\n");
        printf("3 - rainha\n");
        printf("4 - peão\n");
        printf("5 - cavalo\n");
        printf("6 - rei\n");
        scanf("%d", &peca);
    
        while (peca >6 || peca==0)
        {
        printf("opção inválida.\n");
        printf("escolha novamente qual peça quer movimentar:\n");
        printf("1 - torre\n");
        printf("2 - bispo\n");
        printf("3 - rainha\n");
        printf("4 - peão\n");
        printf("5 - cavalo\n");
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
    
        while (direcao > 4 || direcao==0)
        {
        printf("opção inválida. Digite novamente (apenas número):\n");
        printf("1-Esquerda\n");
        printf("2-direita\n");
        printf("3-frente\n");
        printf("4-trás\n");
        scanf("%d", &direcao);
        }
    
      
        printf("\n");
        printf("escolha a quantidade de casas(1 a 7): ");
        scanf("%d", &casas);

        while (casas > 7 || casas == 0)
        {
        printf("Opção inválida.\n");
        printf("\n");
        printf("escolha a quantidade de casas(1 a 7): ");
        scanf("%d", &casas);
        }
    
        printf("\n");
    
        switch (direcao)
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
        
        for (;direcao<1 || direcao>4;)
        {          
            printf("você digitou %d. Esta opção é inválida. Digite outra:\n", direcao);
            printf("\n");
            printf("1-diagonal Esquerda frente\n");
            printf("2-diagonal direita frente\n");
            printf("3-diagonal esquerda trás\n");
            printf("4-diagonal direita trás\n");
            printf("escolha uma opção:");
            scanf("%d", &direcao);
        }
        switch (direcao)
        {
        case 1:
            printf("você escolheu a opção 1 - diagonal esquerda frente\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal esquerda frente %d\n", contador);                
                }
                printf("\n");
            break;
       
         case 2:
            printf("você escolheu a opção 2 - diagonal direita frente\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal direita frente %d\n", contador);                
                }
                printf("\n");
            break;  
        case 3:
            printf("você escolheu a opção 3 - diagonal esquerda trás\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal esquerda trás %d\n", contador);                
                }
                printf("\n");
            break; 
        case 4:
            printf("você escolheu a opção 4 - diagonal direita trás\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal esquerda frente %d\n", contador);                
                }
                printf("\n");
            break; 
            
        }
        break;
    case 3:    
    printf("você escolheu a rainha:\n");
    printf("\n");

        do
        {
            printf("Opções para direção da peça:\n");
            printf("1-diagonal Esquerda frente\n");
            printf("2-diagonal direita frente\n");
            printf("3-diagonal esquerda trás\n");
            printf("4-diagonal direita trás\n");
            printf("5-frente\n");
            printf("6-trás\n");
            printf("7-esquerda\n");
            printf("8-direita\n");
            printf("\n");
            printf("escolha uma opção: ");
            scanf("%d", &direcao);
            printf("\n");
            if(direcao==0 || direcao>8){
            printf("opção inválida. Tente novamente!\n");
            printf("\n");
            }

        } while (direcao==0 || direcao>8);
        


        
        }
        switch (direcao)
        {
        case 1:
            printf("você escolheu a opção 1 - diagonal esquerda frente\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal esquerda frente %d\n", contador);                
                }
                printf("\n");
            break;
       
         case 2:
            printf("você escolheu a opção 2 - diagonal direita frente\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal direita frente %d\n", contador);                
                }
                printf("\n");
            break;  
        case 3:
            printf("você escolheu a opção 3 - diagonal esquerda trás\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal esquerda trás %d\n", contador);                
                }
                printf("\n");
            break; 
        case 4:
            printf("você escolheu a opção 4 - diagonal direita trás\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("diagonal esquerda frente %d\n", contador);                
                }
                printf("\n");
            break; 
        case 5:
            printf("você escolheu a opção 5 - frente\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("frente %d\n", contador);                
                }
                printf("\n");
            break;
        case 6:
            printf("você escolheu a opção 6 - trás\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("trás %d\n", contador);                
                }
                printf("\n");
            break;
        case 7:
            printf("você escolheu a opção 7 - esquerda\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("esquerda %d\n", contador);                
                }
                printf("\n");
            break;  
        case 8:
            printf("você escolheu a opção 8 - direita\n");
            printf("\n");
            printf("escolha a quantidade de casas: ");
            scanf("%d", &casas);
                for(;casas>7 || casas < 1;)
                {                    
                    printf("O número %d é inválido. Digite um número entre 1 e 7.\n", casas);
                    printf("\n");
                    printf("escolha a quantidade de casas: ");
                    scanf("%d", &casas);
                }
                for(contador=1; contador<=casas;contador++)
                {
                    printf("direita %d\n", contador);                
                }
                printf("\n");
            break;  
        }  
       
      
        
        
    }