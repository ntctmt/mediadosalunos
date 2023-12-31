#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void A1();
void A3(float a1, float a2);
void A4();
void Online();
void A3Online(float a1);

int main()
{
    setlocale(LC_ALL, "portuguese");
	int op;
	printf("Escolha uma opção:\n");
	while (1) 
	{
		printf("\n(1) A1, A2, A3\n");
		printf("(2) A4\n");
		printf("(3) Online\n");
		printf("(0) Sair\n");
		printf(" -> ");
		scanf("%d", &op);
		system("cls");
		switch (op)
		{
			case 1: 
				A1();
				break;
			case 2: 
				A4();
				break;
			case 3: 
                Online();
				break;
			case 0:
				exit(0);
			default:
				printf("Opção inexistente!\n");
		}
	}
}

void A1(){
    float a1, a2;
    printf("Nota A1: ");
    scanf("%f", &a1);
    printf("Nota A2: ");
    scanf("%f", &a2);
    if (a1 < 5.0 || a2 < 5.0){
        printf("\nA1 e/ou A2 abaixo de 5.0\nÉ necessário a realização da A3.\n");
        A3(a1,a2);
    }
    else if ( (a1 + a2) / 2 >= 6.0){
        printf("\nMédia: %0.2f\nVocê está aprovado!\n", (a1 + a2) / 2);
        printf("\nA realização da A3 é opcional.\n");
    }
    else{
        printf("\nMédia: %0.2f\nÉ necessário a realização da A3.\n", (a1 + a2) / 2);
        A3(a1, a2);
    }
}

void A3(float a1, float a2){
    float maior, a3;
    maior = a1;
    if (maior < a2){
        maior = a2;
    }
    printf("Nota A3: ");
    scanf("%f", &a3);
    if ( (maior + a3) / 2 >= 6.0){
        printf("\nMédia: %0.2f\nVocê está aprovado!\n", (maior + a3) / 2);
    }
    else{
        printf("\nMédia: %0.2f\nVocê está reprovado!\n", (maior + a3) / 2);
    }
}

void A4(){
    float a4;
    printf("Nota A4: ");
    scanf("%f", &a4);
    if (a4 >= 7.0)
    {
        printf("\nMédia: %0.2f\nVocê está aprovado!\n", a4);
    }
    else{
        printf("\nMédia: %0.2f\nVocê está reprovado!\n", a4);
    }
}

void Online(){
    float a1, a2;
    printf("Nota A1: ");
    scanf("%f", &a1);
    printf("Nota A2: ");
    scanf("%f", &a2);
    
    if (a1 == 0){
        printf("\nA1 igual a 0.0\nMédia: %0.2f\nVocê está reprovado!\n", (a1 * 0.4 + a2 * 0.6)/2);
    }
    else if (a2 < 5.0){
        printf("\nA2 menor que 5.0\nÉ necessário a realização da A3.\n");
        A3online(a1);
    }
    else if (a1 * 0.4 + a2 * 0.6 >= 6.0){
        printf("\nMédia: %0.2f\nVocê está aprovado!\n", a1 * 0.4 + a2 * 0.6);
    }
    else{
        printf("\nMédia: %0.2f\nÉ necessário a realização da A3.\n", a1 * 0.4 + a2 * 0.6);
        A3online(a1);
    }
}
void A3online(float a1){
    float a3;
    printf("Nota A3: ");
    scanf("%f", &a3);
    if (a3 < 5.0){
        printf("\nA3 e/ou A2 menor que 5.0\nMédia: %0.2f\nVocê está reprovado!\n", (a1 * 0.4 + a3 * 0.6)/2);
    }
    else if (a1 * 0.4 + a3 * 0.6 >= 6.0){
        printf("\nMédia: %0.2f\nVocê está aprovado!\n", a1 * 0.4 + a3 * 0.6);
    }
    else{
        printf("\nMédia: %0.2f\nVocê está reprovado!\n", a1 * 0.4 + a3 * 0.6);
    }
}