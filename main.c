// Importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(){
    int numRobo, numPessoa, resposta, tentativas = 1;
    // Código para usar caracteres do PT-BR
    setlocale(LC_ALL, "Portuguese");
    printf("Escolha a dificuldade: \n[1] Fácil\n[2] Média\n[3] Difícil\n[4] Impossível");
	printf("\nResposta: ");
	scanf("%d", &resposta);
	switch(resposta){
	case 1:
		// Dificuldade fácil
		printf("O número escolhido está entre 1 e 5: ");
		scanf("%d", &numPessoa);
		srand(time(NULL));
		numRobo = rand()%4 + 1;
		while (numPessoa != numRobo){
			if (numPessoa < numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MAIOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			} else if (numPessoa > numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MENOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			}
		}
		break;
	case 2:
		// Dificuldade média
		printf("O número escolhido está entre 1 e 20: ");
		scanf("%d", &numPessoa);
		srand(time(NULL));
		numRobo = rand()%19 + 1;
		while (numPessoa != numRobo){
			if (numPessoa < numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MAIOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			} else if (numPessoa > numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MENOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			}
		}
		break;
	case 3:
		// Dificuldade difícil
		printf("O número escolhido está entre 1 e 50: ");
		scanf("%d", &numPessoa);
		srand(time(NULL));
		numRobo = rand()%49 + 1;
		while (numPessoa != numRobo){
			if (numPessoa < numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MAIOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			} else if (numPessoa > numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MENOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			}
		}
		break;
	case 4:
		// Dificuldade impossível
		printf("O número escolhido está entre 1 e 100: ");
		scanf("%d", &numPessoa);
		srand(time(NULL));
		numRobo = rand()%99+ 1;
		while (numPessoa != numRobo){
			if (numPessoa < numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MAIOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			} else if (numPessoa > numRobo){
				tentativas += 1;
				printf("O número escolhido pelo robô é MENOR.\n");
				printf("Tente novamente: ");
				scanf("%d", &numPessoa);
			}
		}
		break;
	default:
		// Erro
		printf("Número inválido.");
		break;
	}
	if (resposta >= 1 && resposta <= 5){
		printf("Você acertou! O número escolhido pelo robô era %d\nVocê acertou em %d tentativas.", numRobo, tentativas);
	}
}