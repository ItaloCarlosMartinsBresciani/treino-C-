//bibliotecas, coloco um monte pra nn faltar hahaahah
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#define L 3
#define C 3

static int __BACKGROUND = 1;
static int __FOREGROUND = LIGHTGRAY;

//funcoes
void textcolor (int, int);
void carregamento();
void gotoxy(int, int);
int som(int);
void menu();
void tabela();
void dados();
void horas();
void jogadores();
void HideCursor(int);
void favorito();

float val[L][C]={2000000,47000000,0.00,100000000,126000000,0.00,112000000,35000000,145};

main()
{
	HideCursor(0);
	setlocale(LC_ALL, "Portuguese");
	carregamento();
	menu();
	
	
}

void gotoxy(int x, int y) 
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void HideCursor(int aux)
{
	switch (aux) {
		case 0: {//ocultar cursor
			CONSOLE_CURSOR_INFO cursor = {1, FALSE};
			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
			break;
		}
		case 1: {//apresentar cursor
			CONSOLE_CURSOR_INFO cursor = {1, TRUE};
			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
			break;
		}
	}
}

void textcolor (int letras, int fundo) 
{
	__FOREGROUND = letras;
    __BACKGROUND = fundo;
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
    letras + (__BACKGROUND << 4));
}

void dados(float matrix[L][C])
{
	gotoxy(8,7);printf("Valorant");
	gotoxy(10,8);printf("LoL");
	gotoxy(8,9);printf("Minecraft");
	
    gotoxy(20,7); printf("%0.1f",matrix[0][0]); gotoxy(50,7); printf("%0.1f",matrix[0][1]); gotoxy(75,7); printf("%0.1f R$",matrix[0][2]);
    gotoxy(20,8); printf("%0.1f",matrix[1][0]); gotoxy(50,8); printf("%0.1f",matrix[1][1]); gotoxy(75,8); printf("%0.1f R$",matrix[1][2]);
    gotoxy(20,9); printf("%0.1f",matrix[2][0]); gotoxy(50,9); printf("%0.1f",matrix[2][1]); gotoxy(75,9); printf("%0.1f R$",matrix[2][2]);
	
}

void tabela()
{
	gotoxy(45,2); printf("Dados:");
	gotoxy(20,5); printf("/Estimativa de jogadores/");
	gotoxy(50,5); printf("/Horas assistidas/");
	gotoxy(75,5); printf("/Preço/");
	gotoxy(10,5); printf("/Jogos/");
	gotoxy(8,6); printf("--------------------------------------------------------------------------------------------------");
	gotoxy(18,5); printf("|");
	gotoxy(18,6); printf("|");
	gotoxy(18,7); printf("|");
	gotoxy(18,8); printf("|");
	gotoxy(18,9); printf("|");
	gotoxy(18,10); printf("|");
	
	gotoxy(47,5); printf("|");
	gotoxy(47,6); printf("|");
	gotoxy(47,7); printf("|");
	gotoxy(47,8); printf("|");
	gotoxy(47,9); printf("|");
	gotoxy(47,10); printf("|");
	
	gotoxy(71,5); printf("|");
	gotoxy(71,6); printf("|");
	gotoxy(71,7); printf("|");
	gotoxy(71,8); printf("|");
	gotoxy(71,9); printf("|");
	gotoxy(71,10); printf("|");
	
	dados(val);
	gotoxy(8,19);printf("Valorant");
	gotoxy(10,20);printf("LoL");
	gotoxy(8,21);printf("Minecraft");
	gotoxy(45,15); printf("Curiosidades:");
	gotoxy(20,17); printf("/Estilo de jogo/");
	gotoxy(50,17); printf("/Modo de jogo/");
	gotoxy(75,17); printf("/Plataformas disponíveis/");
	gotoxy(10,17); printf("/Jogos/");
	gotoxy(8,18); printf("--------------------------------------------------------------------------------------------------");
	gotoxy(18,17); printf("|");
	gotoxy(18,18); printf("|");
	gotoxy(18,19); printf("|");
	gotoxy(18,20); printf("|");
	gotoxy(18,21); printf("|");
	gotoxy(18,22); printf("|");
	
	
	
	gotoxy(20,19);printf("FPS em 1a pessoa");
	gotoxy(20,20);printf("MOBA");
	gotoxy(20,21);printf("Sandbox");
	
	gotoxy(50,19);printf("Multijogador");
	gotoxy(50,20);printf("Multijogador");
	gotoxy(50,21);printf("Único/multijogador");
	
	gotoxy(75,19);printf("Microsoft Windows");
	gotoxy(75,20);;printf("Microsoft Windows, macOS");
	gotoxy(75,21);printf("Microsoft Windows, macOS, Linux");
	
	gotoxy(47,17); printf("|");
	gotoxy(47,18); printf("|");
	gotoxy(47,19); printf("|");
	gotoxy(47,20); printf("|");
	gotoxy(47,21); printf("|");
	gotoxy(47,22); printf("|");
	
	gotoxy(71,17); printf("|");
	gotoxy(71,18); printf("|");
	gotoxy(71,19); printf("|");
	gotoxy(71,20); printf("|");
	gotoxy(71,21); printf("|");
	gotoxy(71,22); printf("|");
	
	
	
}

void favorito()
{
	
	char preferido[20];
	int ano;
	
	gotoxy(30,15); printf("Qual seu jogo preferido? ");
	HideCursor(1);
	gotoxy(30,16);scanf("%s",&preferido);
	gotoxy(30,17);printf("O meu é Minecraft, ele está presente em boa parte da minha vida, jogo ele à 7-8 anos!");
	gotoxy(30,18);printf("A quanto tempo você joga seu jogo preferido?");
	gotoxy(33,19); printf("ano(s)");
	gotoxy(30,19);scanf("%d",&ano);
	
	HideCursor(0);
}

void horas(float mat[L][C])
{
	float va;
	float mi;
	float lo;
	float media;
	media = (val[0][1]+val[1][1]+val[2][1])/3;
	va=(mat[0][1])/(mat[0][0]) ;
	lo=(mat[1][1])/(mat[1][0]) ;
	mi=(mat[2][1])/(mat[2][0]) ;
	if(va>mi && va>lo)
	{
	printf("\n\n\t-O jogo que cada pessoa passa mais tempo vendo é: Valorant com %0.1f horas cada player",va);
	}
	if(lo>mi && lo>va)
	{
	printf("\n\n\tO jogo que cada pessoa passa mais tempo vendo é: Lol com %0.1f horas cada player",lo);
	}
	if(mi>va && mi>lo)
	{
	printf("\n\n\tO jogo que cada pessoa passa mais tempo vendo é: minecraft com %0.1f horas cada player",mi);
	}
	printf("\n\n\n\t-A média de horas assistidas dos três jogos é: %0.1f horas",media);
	
	
	
}

void jogadores()
{
	if(val[0][0] > val[1][0] && val[0][0] > val[2][0])
	{
	gotoxy(40,15); printf("-O jogo com mais jogadores é o Valorant, com: %0.1f players!",val[0][0]);
	}
	else if(val[1][0] > val[0][0] && val[1][0] > val[2][0])
	{
		gotoxy(40,15); printf("-O jogo com mais jogadores é o Lol, com: %0.1f players!",val[1][0]);
	}
	else if(val[2][0] > val[0][0] && val[2][0] > val[1][0])
	{
		gotoxy(40,15); printf("-O jogo com mais jogadores é o Minecraft, com: %0.1f players!",val[2][0]);
	}
	
	
}

void carregamento()
{
	textcolor(2,0); 
	system("cls");
	gotoxy(42,16); printf("Loading.");
	Sleep(500);
	gotoxy(51,16); printf(".");
	Sleep(500);
	gotoxy(53,16); printf(".");
	Sleep(500);
	system("cls");
	for(int j=500;j<3000;j+=500)
        som(j);
}

int som(int f) //sonzinho gostoso
{
    Beep(f,170);
    return 0;
}

void menu() //com setinhaaaa
{
		char p;
		int linha=13;
		int sair;
		do{
		
		sair=1;
		gotoxy(43,5);   printf("MENU DE OPÇÕES!!!!!!!");
		gotoxy(40,13);  printf("Dados e curiosidades dos games.");        
		gotoxy(40,15);  printf("Média de horas assistidas dos 3 jogos e o jogo que passam mais tempo vendo.");
		gotoxy(40,17);  printf("Jogo com maior número de jogadores (entre os 3 jogos).");
		gotoxy(40,19);  printf("Qual seu jogo favorito?");
		gotoxy(40,21);  printf("QUER SAIR DAQUI??? deu tanto trabalho :(");
		gotoxy(39,linha); printf("%c", 62);          
		p=getch();
		gotoxy(39,linha); printf(" ");
		
			switch(p)
		{
			case 72 :                              //setinha up
				linha-=2;
				if(linha<13)
				{
					linha=19;	
				}
				gotoxy(39,linha); printf("%c", 62);
				break;
			case 80 :                              //setinha down
				linha+=2;
				if(linha>21)
				{
					linha=13;
				}
				gotoxy(39,linha); printf("%c", 62);
				break;
		}
			switch(p)
		{
			case 13: // caso aperte enter
				if(linha==13)
				{
					gotoxy(39,23);printf("Você optou pelos dados e curiosidades!");          
					Sleep(2000);
					carregamento();	
					tabela();
					
					
					gotoxy(20,25);system("pause");
					system("cls");
									
				}
				else
				if(linha==15)
				{
					gotoxy(39,23);printf("Você optou pela média de Horas assistidas e o game com a relação horas/player!");
					Sleep(2000);
					carregamento();	
					horas(val);
					
					
					gotoxy(20,20); system("pause");
					system("cls");
					
				}
				else
				if(linha==17)
				{
					gotoxy(39,23);printf("Você optou pelo jogo com mais jogadores!");
					Sleep(2000);
					carregamento();	
					jogadores();
					
					gotoxy(20,20);system("pause");
					system("cls");
					
				}
				else
				if(linha==19)
				{
					gotoxy(39,23);printf("Você optou pelo jogo favorito!");
					Sleep(2000);
					carregamento();	
					favorito();
					
					gotoxy(20,23);system("pause");
					system("cls");
					
				}
				else
				if(linha==21)
				{
					system("cls");
					gotoxy(39,15);printf("Humpf, não volta mais então!");
					Sleep(2000);
					sair=0;
					system("cls");
				}
		}
	}while (sair);
	
}
