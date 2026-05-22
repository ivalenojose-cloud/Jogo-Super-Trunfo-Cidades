#include <stdio.h>

int main() {

//Carta 01
char estado01;
char codigo01[10];
char cidade01[50];
int populacao01;
float area01;
float pib01;
int Pontosturisticos01;

//Carta 02
char estado02;
char codigo02[10];
char cidade02[50];
int populacao02;
float area02;
float pib02;
int Pontosturisticos02;

//Entrada de Dados da Carta 01
printf("Cadastro da Carta 01: \n");
printf("Digite o estado: ");
scanf("%s", &estado01);

printf("Digite o código da carta: ");
scanf("%s", &codigo01);

getchar(); //Consome o \n deixado pelo scanf

printf("Digite o nome da Cidade: ");
fgets(cidade01, sizeof(cidade01),stdin);

printf("Digite a população: ");
scanf("%f", &populacao01);

printf("Digite a area: ");
scanf("%f", &area01);

printf("Digit o Pib: ");
scanf("%f", &pib01);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &Pontosturisticos01);

//Entrada de dados da Carta 02
printf("Cadastro da Carta 02: \n");
printf("Digite o estado: ");
scanf("%s", &estado02);

printf("Digite o código da carta: ");
scanf("%s", &codigo02);

getchar(); //Consome o \n deixado pelo scanf

printf("Digite o nome da Cidade: ");
fgets(cidade01, sizeof(cidade01),stdin);

printf("Digite a população: ");
scanf("%f", &populacao02);

printf("Digite a area: ");
scanf("%f", &area02);

printf("Digit o Pib: ");
scanf("%f", &pib02);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &Pontosturisticos02);

}