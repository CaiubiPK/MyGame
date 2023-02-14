#ifndef _CAIUBIM_
#define _CAIUBIM_ 1

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <fstream>

/*Essa é a minha biblioteca 

Funções para utilizar :

ImprimirComDelay

Recebe uma string e imprime devagar


ImprimirComDelayNoFim

Recebe uma string e imprime devagar com uma pausa no fim da frase

*/

void ExibirArquivo(std::string arquivo)
{
}

int Tecla()
{
	int a;
	while (1)
	{
    	if (kbhit()) 
		{
   			a = getch();
   			system("cls");
    		return a;
		}
	}
}
void Pause()
{
	int c;
	std::cout <<"\n\n\t\tENTER para continuar...\n";
	do{
	c = Tecla();
	}while (c != 13);
}
int NumeroAleatorio(int limite)
{
    unsigned seed = time(0);
    srand(seed);
    return 1+rand()%(limite);
}
	
void BemVindo()
{
	std::cout << "                                 +----------------------------+-------------+--------------------------+" <<std::endl;
	std::cout << "                                 ¦                            ¦  Bem Vindo  ¦                          ¦" <<std::endl;
	std::cout << "                                 +----------------------------+-------------+--------------------------+\n\n\n\n\n\n" <<std::endl;
}

void fim()
{
	std::cout << "\n\nPor favor aguarde ... \n\n";
	Sleep(2500);
	std::cout << "Obrigado por utilizar nosso programa\n\n";
	system ("pause\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void ImprimirComDelay (std::string frase)
{
    int i, fraseTam= 0;
    for(i = 0; frase[i] != '\0'; i++) 
        fraseTam++;
    for(i = 0; i < fraseTam; i++) 
	{
        std::cout << frase[i];
        //Sleep(21);//21
    }
}

void ImprimirComDelayNoFim (std::string frase)
{
    int i, fraseTam= 0;
    for(i = 0; frase[i] != '\0'; i++) 
        fraseTam++;
    for(i = 0; i < fraseTam; i++) 
	{
        std::cout << frase[i];
        //Sleep(21);
    }
    Sleep(800);//800
}

void A(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Amarelo(std::string x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
void Amarelo(int x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AmareloCD(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AmareloCDNoFim(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	Sleep(800);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}


void AmareloClaro(std::string x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AmareloClaro(int x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Azul(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Azul(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AzulCD(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AzulApagado(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AzulApagado(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AzulClaro(std::string x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void AzulClaro(int x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}


void Branco(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Branco(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void PontosBrancos()
{

	Branco(".");
	Sleep(400);
	Branco(".");
	Sleep(400);
	Branco(".");
	Sleep(100);
}
void Cinza(std::string x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Cinza(int x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void CinzaCD(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}


void Verde(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Verde(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
void VerdeCD(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void VerdeCDNoFim(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	Sleep(800);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void VerdeApagado(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
void VerdeApagado(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Vermelho(std::string x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Vermelho(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	std::cout << x;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void PontosVermelhos()
{
	Sleep(500);
	Vermelho(".");
	Sleep(500);
	Vermelho(".");
	Sleep(500);
	Vermelho(".");
	Sleep(200);
}
void VermelhoCD(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void VermelhoCDNoFim(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	Sleep(800);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}


void Preto()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
std::cout << ".";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void Rosa(std::string x)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
std::cout << x;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void RosaCD(std::string frase)
{
	int i, fraseTam= 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	for(i = 0; frase[i] != '\0'; i++) 
	    fraseTam++;
	for(i = 0; i < fraseTam; i++) 
	{
	    std::cout << frase[i];
	    Sleep(25);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
#endif
