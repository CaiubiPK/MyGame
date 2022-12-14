#include <vector>
#include "Caiubi.h"

using namespace std;

class Habilidade{
public:
	string nome, efeito, Usar;
	int dano,CustoEnergia,CustoMP,CustoHP;
	
	Habilidade()
	{
	this->nome = "Habilidade bloqueada";
	this->efeito = "";
	this->CustoHP = 0;
	this->CustoMP = 0;
	this->CustoEnergia = 0;
	this->dano =0;
	}
}; 

class Item{	public:
	string nome, descricao;
	int codigo;
	int tamanho;
	int hp;
    int xp,cor;
    Item()
    {
    	this->codigo = 0;
    	this->descricao = "Coloque algo aqui dentro.";
    	this->nome = "Vazio.";
    	this->tamanho = 1;
    	this->hp =0;
    	this->xp = 0;
	}
};

class Criatura{
public:
	string nome;
	int Codigo,HP,MP,Energia,Armadura,atk,chancedeesquiva;
	int HPm,MPm,Energiam;
	int HPhistorico,Energiahistorico,MPhistorico,atkhistorico,Armadurahistorico;
	
	string getnome()
	{
		return this->nome;
	}
	EnergiaM(int a)
	{
		int i;
		this->Energia += a;
		if (this->Energia > this->Energiam)
		{
			for(i=0;this->Energia > this->Energiam;i++)
			{
				this->Energia --;
			}
			this->Energiahistorico = this->Energiahistorico + a - i;
			return 0;
		}
		this->Energiahistorico = this->Energiahistorico + a;
	}
	MPM(int a)
		{
		int i;
		this->MP += a ;
		if (this->MP > this->MPm)
		{
			for(i=0;this->MP > this->MPm;i++)
			{
				this->MP --;
			}
			this->MPhistorico += a;
			return 0;
		}
		this->MPhistorico += a;
	}
	HPM(int a)
	{
		int i;
		if (a < 0)
		{
			if(this->Armadura*-1 <= a)
			{
				cout<<"Bloqueado";
				return 0;
			}
			this->HP += a + this->Armadura;
			this->HPhistorico += a + this->Armadura;
			return 0;
		}
		this->HP = this->HP + a;
		if (this->HP > this->HPm)
		{
			for(i=0;this->HP > this->HPm;i++)
			{
				this->HP --;
			}
			this->HPhistorico = this->HPhistorico + a - i;
			return 0;
		}
		this->HPhistorico = this->HPhistorico + a;
	}
	atkM(int a)
	{
		this->atkhistorico = a;
		this->atk += a;
	}
	ArmaduraM(int a)
	{
		this->Armadurahistorico = a;
		this->Armadura += a;
	}
	
	limparm()
	{
		this->HPhistorico = 0;
		this->MPhistorico = 0;
		this->Energiahistorico = 0;
		this->Armadurahistorico = 0;
		this->atkhistorico = 0;
	}
	virtual coutatributos()
	{
		Verde("\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm;
		if (this->HPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(HPhistorico);
			Vermelho(")");
		}
		if (this->HPhistorico>0)
		{
			Verde("  (+");
			Verde(HPhistorico);
			Verde(")");	
		}
		Azul("\n\t\t\tMP ");cout <<this->MP<<"/"<<this->MPm;
		if (this->MPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(MPhistorico);
			Vermelho(")");
		}
		if (this->MPhistorico>0)
		{
			Verde("  (+");
			Verde(MPhistorico);
			Verde(")");	
		}
		
		
		Amarelo("\n\t\t\tEnergia ");cout<<this->Energia<<"/"<<this->Energiam;
		if (this->Energiahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Energiahistorico);
			Vermelho(")");
		}
		if (this->Energiahistorico>0)
		{
			Verde("  (+");
			Verde(Energiahistorico);
			Verde(")");	
		}
		Vermelho("\n\t\t\tAtaque ");cout<<this->atk;
			if (this->atkhistorico<0)
		{
			Vermelho("  (");
			Vermelho(atkhistorico);
			Vermelho(")");
		}
		if (this->atkhistorico>0)
		{
			Verde("  (+");
			Verde(atkhistorico);
			Verde(")");	
		}
		
		Cinza("\n\t\t\tArmadura ");cout<<this->Armadura;
			if (this->Armadurahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Armadurahistorico);
			Vermelho(")");
		}
		if (this->Armadurahistorico>0)
		{
			Verde("  (+");
			Verde(Armadurahistorico);
			Verde(")");	
		}
	this->limparm();
		
	}
	Criatura()
	{
		this->nome = "";
		this->HP = 0;
		this->MP = 0;
		this->atk = 0;
		this->Armadura = 0;
		this->Energia = 0;
		this->chancedeesquiva = 0;
		this->Energiam = this->Energia;
		this->HPm = this->HP;
		this->MPm = this->MP;
		this->HPhistorico = 0;
		this->MPhistorico = 0;
		this->Energiahistorico = 0;
		this->atkhistorico = 0;
		this->Armadurahistorico = 0;
	}
};	

class Humano: public Criatura{
protected:
	vector<int> mochila;
public:
};

class Orc: public Criatura{
private:
    int classe;
public :
	coutatributos()
	{
		Verde("\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm << endl;
		Azul("\t\t\tMP ");cout <<this->MP<<"/"<<this->MPm << endl;
		Amarelo("\t\t\tEnergia ");cout<<this->Energia<<"/"<<this->Energiam << endl;
		Vermelho("\t\t\tAtaque ");cout<<this->atk << endl;
		Cinza("\t\t\tArmadura ");cout<<this->Armadura << endl;
	}
};

class OrcMago: public Orc{
		public:
		 Habilidade habilidade1;
		 Habilidade habilidade2;
		 Habilidade habilidade3;
		 Habilidade habilidade4;
		 Habilidade habilidade5;
		 Habilidade habilidadepassiva;
	coutatributos()
	{
		Verde("\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm;
		if (this->HPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(HPhistorico);
			Vermelho(")");
		}
		if (this->HPhistorico>0)
		{
			Verde("  (+");
			Verde(HPhistorico);
			Verde(")");	
		}
		Azul("\n\t\t\tMP ");cout <<this->MP<<"/"<<this->MPm;
		if (this->MPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(MPhistorico);
			Vermelho(")");
		}
		if (this->MPhistorico>0)
		{
			Verde("  (+");
			Verde(MPhistorico);
			Verde(")");	
		}
		
		
		Amarelo("\n\t\t\tEnergia ");cout<<this->Energia<<"/"<<this->Energiam;
		if (this->Energiahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Energiahistorico);
			Vermelho(")");
		}
		if (this->Energiahistorico>0)
		{
			Verde("  (+");
			Verde(Energiahistorico);
			Verde(")");	
		}
		Vermelho("\n\t\t\tAtaque ");cout<<this->atk;
			if (this->atkhistorico<0)
		{
			Vermelho("  (");
			Vermelho(atkhistorico);
			Vermelho(")");
		}
		if (this->atkhistorico>0)
		{
			Verde("  (+");
			Verde(atkhistorico);
			Verde(")");	
		}
		
		Cinza("\n\t\t\tArmadura ");cout<<this->Armadura;
			if (this->Armadurahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Armadurahistorico);
			Vermelho(")");
		}
		if (this->Armadurahistorico>0)
		{
			Verde("  (+");
			Verde(Armadurahistorico);
			Verde(")");	
		}
		AmareloApagado("\n\t\t\tHabilidade ");cout<<this->habilidade1.nome<< endl;
		Azul("\t\t\tHabilidade Passiva ");cout<<this->habilidadepassiva.nome<< endl;
		limparm();
	}
	ativarhabilidade(int numero, Criatura* alvo)
	{
		if (numero == 1)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelay("\t\t\t\tO Orc dispara raios de suas mãos\n");
			Sleep(800);
			ImprimirComDelay("\t\t\t\tEle se prepara e reassume a postura de combate\n\t\t\t\t\t\t\t\t\t\t");
			Sleep(800);
			this->EnergiaM(15);
			alvo->HPM(-this->atk*3);		}
		if (numero == 2)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelayNoFim("\t\t\t\tO Orc se abaixa e começa a entoar cânticos esquecidos.\n");
			ImprimirComDelay("\t\t\t\tMãos dos Orc caídos aparecem sob seus pés");PontosBrancos();
			alvo->HPM(-7*this->atk);
		}
		if (numero == 3)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelayNoFim("\t\t\t     O Orc saca de suas vestes uma poção verde escura ...\n");
			ImprimirComDelay("\t\t\t\tEle grita agressivamente enquanto ingere a poção borbulhante");PontosBrancos();
			this->HPM(+this->HPm*0.8);
			this->HPm += 30;
			this->HPM(30);
		}
		if (numero == 4)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelayNoFim("\t\t\t\tUma poção negra explode sob os pés do Orc\n");
			ImprimirComDelay("\t\t\t\tEle inala a fumaça negra com apetite");PontosBrancos();
			this->ArmaduraM(3);
			this->HPM(25);
			this->MPm += 30;
			this->MPM(30);
		}
		if (numero == 5)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelayNoFim("\t\t\tO Orc inicia um ritual apontando suas mãos em sua direção.\n");
			ImprimirComDelay("\t\t\t\tVocê sente uma parte de sua alma sendo perdida");PontosBrancos();
			this->HPm += alvo->HPm*0.15;
			alvo->HPhistorico += -alvo->HPm*0.15;
			this->HPhistorico += alvo->HPm*0.15;
			alvo->HPm += -alvo->HPm*0.15;

		}
	
	}
	OrcMago()
	{
		// Ataque (5/22)
		this->habilidade1.nome = "Raios do Orc";
		this->habilidade1.efeito = "(6/22) Dispara uma	 Rajada de raio mortíferos em seu oponente\n";
		this->habilidade1.CustoMP = 25;
		this->habilidade1.CustoHP = 0;
		this->habilidade1.CustoEnergia = 10;
		this->habilidade2.nome = "Mãos dos submundo";
		this->habilidade2.efeito = "(1/22)Invoca o poder dos mortos conjurando mãos os falecidos aos seus pés\n";
		this->habilidade2.CustoMP = 35;
		this->habilidade2.CustoHP = 0;
		this->habilidade2.CustoEnergia = 0;
		this->habilidade3.nome = "Poção da cura";
		this->habilidade3.efeito = "(4/22)Ingere uma poção curando 80% e aumentando limite de vida em 30\n";
		this->habilidade3.CustoMP = 25;
		this->habilidade3.CustoHP = 0;
		this->habilidade3.CustoEnergia = 0;
		this->habilidade4.nome = "Poção Amaldiçoada";
		this->habilidade4.efeito = "(4/22)O usuário bebe uma poção, restaurando uma parte de sua vida, concedendo mana máxima e defesa;\n";
		this->habilidade4.CustoMP = 25;
		this->habilidade4.CustoHP = 0;
		this->habilidade4.CustoEnergia = 5;
		this->habilidade5.nome = "Transfusão de alma";
		this->habilidade5.efeito = "(2/22) Rouba uma parcela da vida do adversário\n";
		this->habilidade5.CustoMP = 30;
		this->habilidade5.CustoHP = 0;
		this->habilidade5.CustoEnergia = 10;
		this->habilidadepassiva.nome = "Magia dos Orcs.";
		this->habilidadepassiva.efeito = "O mago é um oponente poderoso e astuto, não subestime sua magia.";
	}
};

class OrcLutador: public Orc{
public:
	Habilidade habilidade1;
	Habilidade habilidade2;
	Habilidade habilidadepassiva;
	coutatributos()
	{
		Verde("\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm;
		if (this->HPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(HPhistorico);
			Vermelho(")");
		}
		if (this->HPhistorico>0)
		{
			Verde("  (+");
			Verde(HPhistorico);
			Verde(")");	
		}
		Azul("\n\t\t\tMP ");cout <<this->MP<<"/"<<this->MPm;
		if (this->MPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(MPhistorico);
			Vermelho(")");
		}
		if (this->MPhistorico>0)
		{
			Verde("  (+");
			Verde(MPhistorico);
			Verde(")");	
		}
		
		
		Amarelo("\n\t\t\tEnergia ");cout<<this->Energia<<"/"<<this->Energiam;
		if (this->Energiahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Energiahistorico);
			Vermelho(")");
		}
		if (this->Energiahistorico>0)
		{
			Verde("  (+");
			Verde(Energiahistorico);
			Verde(")");	
		}
		Vermelho("\n\t\t\tAtaque ");cout<<this->atk;
			if (this->atkhistorico<0)
		{
			Vermelho("  (");
			Vermelho(atkhistorico);
			Vermelho(")");
		}
		if (this->atkhistorico>0)
		{
			Verde("  (+");
			Verde(atkhistorico);
			Verde(")");	
		}
		
		Cinza("\n\t\t\tArmadura ");cout<<this->Armadura;
			if (this->Armadurahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Armadurahistorico);
			Vermelho(")");
		}
		if (this->Armadurahistorico>0)
		{
			Verde("  (+");
			Verde(Armadurahistorico);
			Verde(")");	
		}
		AmareloApagado("\n\t\t\tHabilidade ");cout<<this->habilidade1.nome<< endl;
		Azul("\t\t\tHabilidade Passiva ");cout<<this->habilidadepassiva.nome<< endl;
		limparm();
	}
	ativarhabilidade()
	{
		system("CLS");
		ImprimirComDelayNoFim("\n\n\n\n\n\n\n\n\t\t\t\t\tO Orc bate em seu peito e grita furiosamente\n");
		Vermelho("\n\n\t\t\t\t\t     ROAAAAAAAAAAAAAAAAAAAAAAR!");
		PontosBrancos();
		this->HPm += 20;
		this->HPM(+40);
		this->EnergiaM(60);
		this->ArmaduraM(2);
		this->atkM(4);
		
	}
	OrcLutador()
	{
		this->habilidade1.nome = "Grito do lutador";
		this->habilidade1.efeito = "Aumenta seu ataque, armadura, HP, e recupera alguns pontos de energia\n";
		this->habilidade2.nome = "Grito do lutador";
		this->habilidade2.efeito = "Aumenta seu ataque, armadura, HP, e recupera alguns pontos de energia\n";
		this->habilidadepassiva.nome = "A Fúria sem fim dos Orcs";
		this->habilidadepassiva.efeito = "O usuário é um Orc furioso, possui HP e Armadura aumentados,"
		" além de um instinto assasino que o fará te perseguir até a morte\n";
	}
};

class OrcCacador: public Orc{
	public:
		 Habilidade habilidade1;
		 Habilidade habilidade2;
		 Habilidade habilidade3;
		 Habilidade habilidadepassiva;
		 
	
	coutatributos()
	{
		Verde("\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm;
		if (this->HPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(HPhistorico);
			Vermelho(")");
		}
		if (this->HPhistorico>0)
		{
			Verde("  (+");
			Verde(HPhistorico);
			Verde(")");	
		}
		Azul("\n\t\t\tMP ");cout <<this->MP<<"/"<<this->MPm;
		if (this->MPhistorico<0)
		{
			Vermelho("  (");
			Vermelho(MPhistorico);
			Vermelho(")");
		}
		if (this->MPhistorico>0)
		{
			Verde("  (+");
			Verde(MPhistorico);
			Verde(")");	
		}
		
		
		Amarelo("\n\t\t\tEnergia ");cout<<this->Energia<<"/"<<this->Energiam;
		if (this->Energiahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Energiahistorico);
			Vermelho(")");
		}
		if (this->Energiahistorico>0)
		{
			Verde("  (+");
			Verde(Energiahistorico);
			Verde(")");	
		}
		Vermelho("\n\t\t\tAtaque ");cout<<this->atk;
			if (this->atkhistorico<0)
		{
			Vermelho("  (");
			Vermelho(atkhistorico);
			Vermelho(")");
		}
		if (this->atkhistorico>0)
		{
			Verde("  (+");
			Verde(atkhistorico);
			Verde(")");	
		}
		
		Cinza("\n\t\t\tArmadura ");cout<<this->Armadura;
			if (this->Armadurahistorico<0)
		{
			Vermelho("  (");
			Vermelho(Armadurahistorico);
			Vermelho(")");
		}
		if (this->Armadurahistorico>0)
		{
			Verde("  (+");
			Verde(Armadurahistorico);
			Verde(")");	
		}
		AmareloApagado("\n\t\t\tHabilidade1 ");cout<<this->habilidade1.nome<< endl;
		AmareloApagado("\t\t\tHabilidade2 ");cout<<this->habilidade2.nome<< endl;
		AmareloApagado("\t\t\tHabilidade3 ");cout<<this->habilidade3.nome<< endl;
		Azul("\t\t\tHabilidade Passiva ");cout<<this->habilidadepassiva.nome<< endl;
		limparm();
	}
	ativarhabilidade(int numero, Criatura* alvo)
	{
		if (numero == 1)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelay("\t\t\t\tO Orc se concentra e mira uma flecha mortal na sua direção.\n");
			ImprimirComDelay("\t\t\t  Ele sorri maliciosamente obervando a flecha se aproximar de seu peito\n\t\t\t\t\t\t\t");
			PontosVermelhos();
			this->habilidade1.dano = 15;
			alvo->ArmaduraM(-3);
			alvo->HPM(-this->habilidade1.dano - this->atk + alvo->Armadura);
			
		}
		if (numero == 2)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelayNoFim("\t\t\t\t O Orc lhe encara e dispara uma flecha em si mesmo.\n");
			ImprimirComDelay("\t\t\t\tEle gargalha em tom desafiador enquanto cura suas feridas.\n\t\t\t\t\t\t\t\t\t\t");
			Sleep(2000);
			this->HPm += 20;
			this->HPM(20);
			this->HPM(this->HPm/2);
			
			
		}
		if (numero == 3)
		{
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n";
			ImprimirComDelayNoFim("\t\t\tO Orc solta um grito amedontador e dispara um flecha na sua direção.\n");
			ImprimirComDelay("\t\t\t\tUma flecha negra que lhe causa uma dor lacinante...\n\t\t\t\t\t\t\t\t\t\t");
			Sleep(2000);
			this->atkM(6);
			this->ArmaduraM(3);
			this->habilidade3.dano = 15;
			alvo->HPM(-this->habilidade3.dano);
		}
	}
	OrcCacador()
	{
		this->habilidade1.nome = "Flecha da Morte";
		this->habilidade1.efeito = "Dispara um flexa certeira e mortal, causando dano e reduzindo a armadura do alvo.\n";
		this->habilidade2.nome = "Flecha Encantada";
		this->habilidade2.efeito = "Dispara um flexa em si mesmo, aumentando o HP máximo em 20, e recuperando 50% do HP máximo.\n";
		this->habilidade3.nome = "Flecha do ritual";
		this->habilidade3.efeito = "Dispara um flexa amaldiçoada, aumentando seu ataque e defesa, e tambem causando danos ao jogador\n";
		this->habilidadepassiva.nome = "A Destreza do Caçador.";
		this->habilidadepassiva.efeito = "Um caçador astuto e cauteloso, possui grande dano, porém poucos pontos de vida;";
		limparm();
	}
};

class Jogador: public Humano{
public:
	int Dificuldade;
	Item itemvazio;
	Habilidade HabilidadeBloqueada;
	vector<Item> Inventario;
	vector<Habilidade>Habilidades;
	Habilidade habilidade;
	
	AbrirInventario(int tamanho)
	{
		int i,c,contador = 0,maximo;
		maximo = tamanho/10;
		maximo --;
		cout <<"\n\n\n";
		for (i = 0; i < 233;i++)
		{
/*contador ++;
					if(contador > maximo)
					{
					}*/
			if (i<10)
				cout << "\t\t\t"<< i + 1<< "- " << this->Inventario[i].nome << "\n\n\n";
			if (i>=10)
			{
				Verde("\n\n\n\n\n\n\t\t <-- Página anterior                                                        Proxima página -->\n");
				c = tecla();
				if (c == 80)
				{
					cout << "c = 80"<< i <<endl;
				}
				if (c == 81)
				{
					cout << "c = 81"<< i <<endl;
				}
				if (c == 37)
				{
					cout << "c = 37"<< i <<endl;
				}
				if (c == 38)
				{
					cout << "c = 38"<< i <<endl;
				}
				if (c == 39)
				{
					cout << "c = 39"<< i <<endl;
				}
				if (c == 40)
				{
					cout << "c = 40"<< i <<endl;
				}
				
			}

		}
	}
	atacar(Criatura *orc)
	{
		system("CLS");
		orc->HPM(-this->atk);
		EnergiaM(-25);
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t      HIT!";
	}
	setname()
	{
		string novonome;
		cin>>novonome;
		this->nome = novonome;
	}
	setname(string nome)
	{
		this->nome = nome;
	}
	turnodooponente(OrcLutador *oponente)
	{
		int q;
		q = NumeroAleatorio(12);
		if (q == 1 || q == 2 ||q == 3 ||q == 4||q == 6||q == 7|| q == 8 ||q == 9 ||q == 10||q == 11||q == 12)
		{
			if (oponente->Energia >= 30)
			{	
				this->HPM(-oponente->atk);
				oponente->EnergiaM(-30);
			}
			else if (oponente->Energia < 30)
			{
				oponente->EnergiaM(+40);
			}
		}
		if( q == 5 )
		{
			oponente->ativarhabilidade();
		}
	
	}
	ativarhabilidade(int numero, Criatura* alvo)
	{
		
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n";
		if (numero = 1)
		{
			ImprimirComDelay(this->Habilidades[numero].Usar);
			PontosBrancos();
			this->HPM(+30);
			this->MPM(-40);
			this->EnergiaM(-20);
		}
		
	
		
	}
	AdicionarHabilidade(Habilidade H)
	{
		int l;
		for(l=0;l<this->Habilidades.size();l++)
		{
			if(this->Habilidades[l].nome == "Habilidade bloqueada")
			{
				this->Habilidades[l].CustoMP = H.CustoMP;
				this->Habilidades[l].CustoHP = H.CustoHP;
				this->Habilidades[l].CustoEnergia = H.CustoEnergia;
				this->Habilidades[l].dano = H.dano;
				this->Habilidades[l].Usar = H.Usar;
				this->Habilidades[l].nome = H.nome;
				return 0;
			}
		}
	}
	ExibirHabilidades(Orc *inimigo)
	{
		int i,t;
		system("CLS");
		
		cout <<"+----------------------------------------------------------------------------------------------------------------------+\n"
		"|                                                          Habilidades:                                                |\n";
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
		//cout << "\t\t1 -" << this->Cura.nome <<endl <<endl;
	//	cout << "\t\t2 -" << this->ErguerEscudo.nome <<endl <<endl;
		for (i=0;i < this->Habilidades.size();i++)
		{
			cout << "\t\t" << i + 1 << " " <<this->Habilidades[i].nome <<endl <<endl;
		}
		t = tecla();
		if(t == 49)
		{
			ativarhabilidade(i,inimigo);
		}
		if(t == 50)
		{	
			ativarhabilidade(i,inimigo);
		}
		if(t == 51)
		{
		}
		if(t == 52)
		{
		}
		if(t == 53)
		{
		}
		if(t == 54)
		{	
		}
		if(t == 55)
		{
		}
		if(t == 56)
		{
		}
		if(t == 57)
		{
		}
		
	}
	turnodooponente(OrcMago *oponente)
	{
		int q;
		q = NumeroAleatorio(22);
		if (q <= 5)
		{
			if (oponente->Energia >= 15)
			{	
				this->HPM(-oponente->atk);
				oponente->EnergiaM(-22);
			}
			else if (oponente->Energia < 15)
			{
				oponente->EnergiaM(+30);
				oponente->MPM(+30);
			}
		}
		if( q >= 6 && q <= 11  )
		{
			oponente->ativarhabilidade(1,this);
		}
		if( q == 12)
		{
			oponente->ativarhabilidade(2,this);
		}
		if( q >= 13 && q <= 16  )
		{
			oponente->ativarhabilidade(3,this);
		}
		if( q >= 17 && q <= 20  )
		{
			oponente->ativarhabilidade(4,this);
		}
		if( q == 21 || q == 22  )
		{
			oponente->ativarhabilidade(5,this);
		}
	
	}
	turnodooponente(OrcCacador *oponente)
	{
		int q;
		q = NumeroAleatorio(14);
		if (q < 10)
		{
			if (oponente->Energia >= 22)
			{	
				this->HPM(-oponente->atk);
				oponente->EnergiaM(-22);
			}
			else if (oponente->Energia < 22)
			{
				oponente->EnergiaM(+32);
			}
		}
		if( q <= 11 && q >= 10  )
		{
			oponente->ativarhabilidade(1,this);
		}
		if( q <= 13 && q >= 12  )
		{
			oponente->ativarhabilidade(2,this);
		}
		if( q <= 15 && q >= 14  )
		{
			oponente->ativarhabilidade(3,this);
		}
	
	}
	luta(OrcLutador *inimigo)
	{
		int b;
		for (b=0;b<100;b++)
		{
			if (inimigo->HP < 0 || this->HP < 0)
			{
			
			
			
				break;
			}
			system("CLS");
			int i = kbhit();
			cout <<"+----------------------------------------------------------------------------------------------------------------------+\n"
			"|\t\t\t\t\t  Você está enfrentando o terrivel ";Vermelho(inimigo->getnome());                               
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n\t";
			cout <<"\t\t\tAtributos de ";AzulClaro(this->getnome());cout << "\n\n\n";
			this->coutatributos();
			cout <<"\n\n\n\t\t\t\tAtributos de ";Vermelho(inimigo->getnome());cout << ":\n\n\n";
			inimigo->coutatributos();
			cout <<"\n\n+----------------------------------------------------------------------------------------------------------------------+\n"
			"|         1-Atacar         2-Mochila         3-Passar         4-Habilidades         5-Desistir         6-Fugir         |\n"
			"+----------------------------------------------------------------------------------------------------------------------+\n";
			this->limparm();
			i = tecla();
			if (i == 49)
			{
				if(this->Energia < 25)
				{
					cout <<"\t\tVocê não possui energia o suficiente";
					break;
					atacar(inimigo);
				}
					if(this->Energia >= 25)
				{
					atacar(inimigo);
					turnodooponente(inimigo);
				}
			}
			if (i == 50)
				{
					system("CLS");
					this->AbrirInventario(this->Inventario.size());	
				}
			if (i == 51)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê passou seu turno";
				EnergiaM(40);
				turnodooponente(inimigo);
				}
			if (i == 52)
			{
				ExibirHabilidades(inimigo);
				turnodooponente(inimigo);
			}
			if (i == 53)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê desistiu da batalha.";
				this->HP = 0;
				Sleep(1500);
				}
			if (i == 54)
				cout << "Apertou 6\n";
				
			if(i != 49 && i !=50 && i !=51 && i != 52 && i !=53 && i !=54)
			{
				cout<< "\nInválido\n";
			}
			Sleep(1000);
		
		}
		if (this->HP <= 0 && inimigo->HP <=0)
		{
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê se sacrificou heroicamente derrotando " << inimigo->nome;
		cout << "\n\t\t\t\t\t\tSeu sacrifício nunca será esquecido.";
		Sleep(2500);
		}
		else if(this->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê foi brutalmente assasinado por " << inimigo->nome;
		Sleep(2500);
		}
		else if(inimigo->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê derrotou o temível Orc " << inimigo->nome;
		Sleep(2500);
		}	
	}
	luta(OrcMago *inimigo)
	{
		while(inimigo->HP > 0 && this->HP > 0)
		{
			system("CLS");
			int i = kbhit();
			cout <<"+----------------------------------------------------------------------------------------------------------------------+\n"
			"|\t\t\t\t\t  Você está enfrentando o sorrateiro ";Vermelho(inimigo->getnome());                               
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n\t";
			cout <<"\t\t\tAtributos de ";AzulClaro(this->getnome());cout << "\n\n\n";
			this->coutatributos();
			cout <<"\n\n\n\t\t\t\tAtributos de ";Vermelho(inimigo->getnome());cout << ":\n\n\n";
			inimigo->coutatributos();
			cout <<"\n\n+----------------------------------------------------------------------------------------------------------------------+\n"
			"|         1-Atacar         2-Mochila         3-Passar         4-Habilidades         5-Desistir         6-Fugir         |\n"
			"+----------------------------------------------------------------------------------------------------------------------+\n";
			this->limparm();
			i = tecla();
			if (i == 49)
			{
				if(this->Energia < 25)
				{
					cout <<"\t\tVocê não possui energia o suficiente";
				}
					if(this->Energia >= 25)
				{
					atacar(inimigo);
					turnodooponente(inimigo);
				}
			}
			if (i == 50)
				{
					system("CLS");
					this->AbrirInventario(this->Inventario.size());	
				}
			if (i == 51)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê passou seu turno";
				EnergiaM(40);
				turnodooponente(inimigo);
				}
			if (i == 52)
			{
				this->HPM(30);
				Verde("cura\n");
			}
			if (i == 53)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê desistiu da batalha./a";
			
				this->HP = 0;
				Sleep(1500);
				}
			if (i == 54)
				cout << "Apertou 6\n";
				
			if(i != 49 && i !=50 && i !=51 && i != 52 && i !=53 && i !=54)
			{
				cout<< "\nInválido\n";
			}
			Sleep(1000);
		
		}
		if (this->HP <= 0 && inimigo->HP <=0)
		{
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê se sacrificou heroicamente derrotando " << inimigo->nome;
		cout << "\n\t\t\t\t\t\tSeu sacrifício nunca será esquecido.";
		Sleep(2500);
		}
		else if(this->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê foi transformado em cinzas por " << inimigo->nome;
		Sleep(2500);
		}
		else if(inimigo->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê derrotou Orc necromante " << inimigo->nome;
		Sleep(2500);
		}	
	}
	luta(OrcCacador *inimigo)
	{
		while(inimigo->HP > 0 && this->HP > 0)
		{
			system("CLS");
			int i = kbhit();
			cout <<"+----------------------------------------------------------------------------------------------------------------------+\n"
			"|\t\t\t\t\t  Você está enfrentando o terrivel ";Vermelho(inimigo->getnome());                               
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n\t";
			cout <<"\t\t\tAtributos de ";AzulClaro(this->getnome());cout << "\n\n\n";
			this->coutatributos();
			cout <<"\n\n\n\t\t\t\tAtributos de ";Vermelho(inimigo->getnome());cout << ":\n\n\n";
			inimigo->coutatributos();
			cout <<"\n\n+----------------------------------------------------------------------------------------------------------------------+\n"
			"|         1-Atacar         2-Mochila         3-Passar         4-Habilidades         5-Desistir         6-Fugir         |\n"
			"+----------------------------------------------------------------------------------------------------------------------+\n";
			i = tecla();
			if (i == 49)
				{
					if(this->Energia < 25)
					{
						cout <<"\t\tVocê não possui energia o suficiente";
					}
						if(this->Energia >= 25)
					{
						atacar(inimigo);
						turnodooponente(inimigo);
					}
				}
			if (i == 50)
				{
					system("CLS");
					this->AbrirInventario(this->Inventario.size());	
					turnodooponente(inimigo);	
				}
			if (i == 51)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê passou seu turno";
				EnergiaM(40);
				turnodooponente(inimigo);
				}
			if (i == 52)
			{
				this->HPM(30);
				Verde("cura\n");
			}
			if (i == 53)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê desistiu da batalha.";
				this->HP = 0;
				Sleep(1500);
				}
			if (i == 54)
				cout << "Apertou 6\n";
				
			if(i != 49 && i !=50 && i !=51 && i != 52 && i !=53 && i !=54)
			{
				cout<< "\nInválido\n";
			}
			Sleep(1000);
		
		}
		if (this->HP <= 0 && inimigo->HP <=0)
		{
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tVocê se sacrificou heroicamente derrotando " << inimigo->nome;
		cout << "\n\t\t\t\t       Seu sacrifício nunca será esquecido.";
		Sleep(2500);
		}
		else if(this->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê foi cruelmente assasinado por " << inimigo->nome;
		Sleep(2500);
		}
		else if(inimigo->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê derrotou o astuto Orc " << inimigo->nome;
		Sleep(2500);
		}	
	}
	int ModDificuldade(int dif, int atributo)
	{
		if(dif == 1)
		{
			return atributo;
		}
		if(dif == 2)
		{
			return atributo + atributo*0.1f;	
		}
		if(dif == 3)
		{
			return atributo + atributo*0.3f;
		}
		if(dif == 4)
		{
			return atributo + atributo*0.5f;
		}
	}
	Jogador()
	{
		int l;
		this->nome = "";
		this->HP = 110;
		this->MP = 120;
		this->atk = 21;
		this->Armadura = 6;
		this->Energia = 180;
		this->chancedeesquiva = 10;
		this->Energiam = this->Energia;
		this->HPm = this->HP;
		this->MPm = this->MP;
		this->HPhistorico = 0;
		this->MPhistorico = 0;
		this->Energiahistorico = 0;
		this->atkhistorico = 0;
		this->Armadurahistorico = 0;
		for(l=0;l<20;l++)
		{
			this->Inventario.push_back(itemvazio);
		}
		for(l=0;l<10;l++)
		{
			this->Habilidades.push_back(HabilidadeBloqueada);
		}
	
		
		this->habilidade.dano = -40;
		this->habilidade.CustoMP = 40;
		this->habilidade.CustoEnergia = 10;
		this->habilidade.nome = "Cura básica";
		this->habilidade.Usar = "\n\n\n\n\n\n\n\n\t\t\t\t\tVocê canalisa poderes curativos de suas mãos";
		this->habilidade.efeito = "Cura a si mesmo em alguns pontos de vida";
		this->AdicionarHabilidade(habilidade);
		
		this->habilidade.dano = 0;
		this->habilidade.CustoMP = 20;
		this->habilidade.CustoEnergia = 60;
		this->habilidade.nome = "Erguer Escudo";
		this->habilidade.efeito = "Ergue seu escudo bloqueando o próximo ataque";
		this->AdicionarHabilidade(habilidade);


		
	}
};

class JourneyIntoTheOrcs{
private:
	Jogador jogador;
public:
};

int main()
{
	setlocale(LC_ALL,"Portuguese");
	system("mode con:cols=120 lines=41");
	
	int i;
	Item itens[20];
	itens[1].nome = "Naco de pão duro";
	itens[1].codigo= 0001;
	itens[1].tamanho= 1;
	itens[1].xp=0;
	itens[1].hp=25;
	itens[1].descricao = "Pedaços simples de um pão velho.";
	itens[2].nome = "Água da Fonte";
	itens[2].codigo= 0002;
	itens[2].tamanho= 1;
	itens[2].xp=1;
	itens[2].hp=10;
	itens[2].descricao = "Água advinda de alguma fonte do reino.";
	itens[3].nome = "Pedaço de Carne-seca";
	itens[3].codigo= 0003;
	itens[3].tamanho= 1;
	itens[3].xp=0;
	itens[3].hp=20;
	itens[3].descricao = "Pedaços de uma carne barata, e que um dia ja foram melhores.";
	itens[4].nome = "Peixe-seco";
	itens[4].codigo= 0004;
	itens[4].tamanho= 1;
	itens[4].xp=0;
	itens[4].hp=22;
	itens[4].descricao =" Peixes secos vindo de  alguma cidade portuária precária";
	itens[5].nome = "Carne Salgada";
	itens[5].codigo= 0005;
	itens[5].tamanho= 1;
	itens[5].xp=0;
	itens[5].hp=20;
	itens[5].descricao = "Um bife de carne que foi salgado ao invés de descartado.";
	itens[6].nome = "Vinho caseiro simples";
	itens[6].codigo= 0006;
	itens[6].tamanho= 1;
	itens[6].xp=5;
	itens[6].hp=40;
	itens[6].descricao = "Vinho feito de forma caseira, com baixo tempo e fermentação e origem duvidosa.";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	JourneyIntoTheOrcs P;
	Jogador jogador;
	

	cout<<"+----------------------------------------------------------------------------------------------------------------------+\n";
	cout<<"|                                                                                                                      |\n|\t\t\t\t\t\t";
	ImprimirComDelay("A Journey Into the Orcs.                                               |\n|");
	ImprimirComDelay("\t\t\t\t\t\tA Game by");
	VerdeCD(" @Caiubipk.");cout<<"                                                   |\n";
	cout<<"|                                                                                                                      |\n";
	cout<<"+----------------------------------------------------------------------------------------------------------------------+";
	cout<< jogador.Habilidades.size();
	Sleep(3000);

	system("cls");
	ImprimirComDelay("\n\n\n\n\t\t\t\t\tEm que dificuldade gostaria de jogar?\n\n\n");
	cout <<"\t\t\t\t  1-";AzulClaro("Fácil      ");cout << "2-";Verde("Médio     ");cout <<"3-";Amarelo("Difícil      ");cout<<"4-";Vermelho("Insano");
	do{
		i = tecla();
		if (i == 49)
			jogador.Dificuldade = 1;
		if (i == 50)
			jogador.Dificuldade = 2;
		if (i == 51)
			jogador.Dificuldade = 3;
		if (i == 52)
			jogador.Dificuldade = 4;
	}while(i != 49 && i != 50 && i != 51 && i != 52);
	
	Orc Grom;
	Grom.nome = "Grom";
	Grom.HP = jogador.ModDificuldade(jogador.Dificuldade,60);
	Grom.MP = 0;
	Grom.Energia = 150;
	Grom.atk = jogador.ModDificuldade(jogador.Dificuldade,8);
	Grom.Armadura = jogador.ModDificuldade(jogador.Dificuldade,1);
	Grom.chancedeesquiva = 0;
	Grom.HPm = Grom.HP;
	Grom.MPm = Grom.MP;
	Grom.Energiam = Grom.Energia;
	
	OrcLutador Durotan;
	Durotan.nome = "Durotan";
	Durotan.HP = jogador.ModDificuldade(jogador.Dificuldade,90);
	Durotan.MP = 0;
	Durotan.Energia = 200;
	Durotan.atk = jogador.ModDificuldade(jogador.Dificuldade,10);
	Durotan.Armadura = jogador.ModDificuldade(jogador.Dificuldade,3);
	Durotan.chancedeesquiva = 0;
	Durotan.HPm = Durotan.HP;
	Durotan.MPm = Durotan.MP;
	Durotan.Energiam = Durotan.Energia;
	
	OrcCacador Igvuld;
	Igvuld.nome = "Igvuld";
	Igvuld.HP = jogador.ModDificuldade(jogador.Dificuldade,70);
	Igvuld.MP = 0;
	Igvuld.Energia = 120;
	Igvuld.atk = jogador.ModDificuldade(jogador.Dificuldade,21);
	Igvuld.Armadura = -2;
	Igvuld.chancedeesquiva = 0;
	Igvuld.HPm = Igvuld.HP;
	Igvuld.MPm = Igvuld.MP;
	Igvuld.Energiam = Igvuld.Energia;
	
	OrcMago Zirgur;
	Zirgur.nome = "Zirgur";
	Zirgur.HP = jogador.ModDificuldade(jogador.Dificuldade,65);
	Zirgur.MP = jogador.ModDificuldade(jogador.Dificuldade,110);
	Zirgur.Energia = 100;
	Zirgur.atk = jogador.ModDificuldade(jogador.Dificuldade,9);;
	Zirgur.Armadura = -4;
	Zirgur.chancedeesquiva = 0;
	Zirgur.HPm = Zirgur.HP;
	Zirgur.MPm = Zirgur.MP;
	Zirgur.Energiam = Zirgur.Energia;
	
	
	ImprimirComDelayNoFim("\n\n\n\n\t\t\t\t\tA sua jornada começa agora ... ");
	Sleep(1200);
	system("cls");
	/*
	ImprimirComDelay("\n\n\n\tQual é o seu nome aventureiro?\n");
	ImprimirComDelay("\tMeu nome é: ");
	
	system("cls");
	*/
	jogador.setname("Caiubi");
	jogador.luta(&Durotan);
	jogador.luta(&Igvuld);
	jogador.luta(&Zirgur);


	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tObrigado por jogar\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	return 0;
}
