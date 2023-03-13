// exibir mapa
/*
Cores nos menus
3 funções para amarelo na biblioteca caiubi
reestruturação da explicação de combate
reestruturação da explicação de Itens

*/
#include <vector>
#include "Caiubi.h"
const int Envenenamento = 0;
const int Combustao = 1;
const int Sangramento = 2;
const int Menu = 27;
const int Inventario = 105;
const int Retornar = 114;
using namespace std;

class Efeito
{
protected:
	string nome, efeito;
	int dano,contador,valor;
	bool ativo;
public:
	string getnome()
	{
		return this->nome;
	}
	string getefeito()
	
	{
		return this->efeito;
	}
	int getdano()
	{
		return this->dano;
	}
	int getcontador()
	{
		return this->contador;
	}
	bool getativo()
	{
		return this->ativo;
	}
	int getvalor()
	{
		return this->valor;
	}
//set
	setnome(string a)
	{
		this->nome = a;
	}
	setefeito(string a)
	{
		this->efeito = a;
	}
	setdano(int a)
	{
		this->dano = a;
	}
	setcontador(int a)
	{
		this->contador = a;
	}
	setativo(bool a)
	{
		this->ativo = a;
	}
	setvalor(int a)
	{
		this->valor = a;
	}
	Efeito()
	{
	}
	};
class Habilidade
{
protected:
	string nome, info, usar1,usar2,efeito;
	int dano,custoenergia,custoMP,custoHP;
	bool disponivel;
public:	
//get
	string getnome()
	{
		return this->nome;
	}
	string getinfo()
	{
		return this->info;
	}
	string getusar1()
	{
		return this->usar1;
	}
	string getusar2()
	{
		return this->usar2;
	}
	bool getdisponivel()
	{
		return this->disponivel;
	}
	int getdano()
	{
		return this->dano;
	}
	int getcustoenergia()
	{
		return this->custoenergia;
	}
	int getcustoMP()
	{
		return this->custoMP;
	}
	int getcustoHP()
	{
		return this->custoHP;
	}
	string getefeito()
	{
		return this->efeito;
	}
	
	
//Set	
	setnome(string a)
	{
		this->nome = a;
	}
	setdisponivel(bool a)
	{
		this->disponivel = a;
	}
	setinfo(string a)
	{
		this->info = a;
	}
	setusar1(string a)
	{
		this->usar1 = a;
	}
	setusar2(string a)
	{
		this->usar2 = a;
	}
	setdano(int a)
	{
		this->dano;
	}
	setcustoenergia(int a)
	{
		this->custoenergia = a;
	}
	setcustoMP(int a)
	{
		this->custoMP = a;
	}
	setcustoHP(int a)
	{
		this->custoHP = a;
	}
	setefeito(string a)
	{
		this->efeito = a;
	}
	Habilidade()
	{
	this->nome = "Habilidade bloqueada";
	this->info = "";
	this->efeito = "";
	this->disponivel = false;
	this->custoHP = 0;
	this->custoMP = 0;
	this->custoenergia = 0;
	this->dano =0;
	}
	}; 
class HabilidadePassiva
{
protected:
	string nome, info;
public:
	string getnome()
	{
		return this->nome;
	}
	string getinfo()
	{
		return this->info;
	}
	setnome(string a)
	{
		this->nome = a;
	}
	setinfo(string a)
	{
		this->info = a;
	}
};
class Item
{	
private:
	string nome, descricao;
	int energia,codigo, tamanho,mp,hp, xp, cor, quantidade,preco;
	bool batalha,consumivel;
public:

	bool getbatalha()
	{
		return this->batalha;
	}
	bool getconsumivel()
	{
		return this->consumivel;
	}
	string getnome()
	{
		return this->nome;
	}
	string getdescricao()
	{
		return this->descricao;
	}
	int getcodigo()
	{
		return this->codigo;
	}
	int getenergia()
	{
		return this->energia;
	}
	int getquantidade()
	{
		return this->quantidade;
	}
	int gettamanho()
	{
		return this->tamanho;
	}
	int gethp()
	{
		return this->hp;
	}
	int getxp()
	{
		return this->xp;
	}
	int getmp()
	{
		return this->mp;
	}
	int getcor()
	{
		return this->cor;
	}
	int getpreco()
	{
		return this->preco;
	}
	int getenergiao()
	{
		return this->energia;
	}
//SET
	setbatalha(bool a)
	{
		this->batalha = a;
	}
	setconsumivel(bool a)
	{
		this->consumivel = a;
	}
	setnome(string a)
	{
		this->nome = a;
	}
	setdescricao(string a)
	{
		this->descricao = a;
	}
	setcodigo(int a)
	{
		this->codigo = a;
	}
	setenergia(bool a)
	{
		this->energia= a;
	}
	setquantidade(int a)
	{
		this->quantidade = a;
	}	
	settamanho(int a)
	{
		this->tamanho = a;
	}	
	sethp(int a)
	{
		this->hp = a;
	}	
	setxp(int a)
	{
		this->xp = a;
	}
	setmp(int a)
	{
		this->mp = a;
	}	
	setcor(int a)
	{
		this->cor = a;
	}
	setpreco(int a)
	{
		this->preco = a;
	}
	setenergia(int a)
	{
		this->energia = a;
	}	
	quantidadeM(int a)
	{
		this->quantidade += a;
	}
	DeixarVazio(Item*x)
	{
    	x->setnome ("Vazio.");
		x->setcodigo( 0);
		x->settamanho( 1);
		x->setxp(0);
		x->sethp(0);
		x->setmp(0);
		x->setenergia(0);
		x->setpreco(0);
		x->setquantidade(1);
		x->setdescricao("Guarde algo aqui.");
		x->setbatalha(false);
		x->setconsumivel(false);
	} 
    Item()
    {
    	this->setnome ("Vazio.");
		this->setcodigo( 0);
		this->settamanho( 1);
		this->setxp(0);
		this->sethp(0);
		this->setmp(0);
		this->setenergia(0);
		this->setpreco(0);
		this->setquantidade(1);
		this->setdescricao("Guarde algo aqui.");
		this->setbatalha(false);
		this->setconsumivel(false);
	}
};
class Criatura
{
protected:
    vector<Habilidade> habilidades;
    vector<HabilidadePassiva> habilidadespassivas;
    Efeito efeitos[5];
    
    Habilidade HabilidadeAux;
    HabilidadePassiva HabilidadePassivaAux;
	string nome,Nivel,raca;
	int HP,MP,energia,armadura,atk,chancedeesquiva,xp,NivelDePoder;
	int HPm,MPm,energiam,DAXP,DAREP,DAMOEDAS;
	int HPhistorico,energiahistorico,MPhistorico,atkhistorico,armadurahistorico,xphistorico;
public:
	bool v;
	Item loot[9];
//get
	string getnome()
	{
		return this->nome;
	}
	string getNivel()
	{
		return this->Nivel;
	}
	string getraca()
	{
		return this->raca;
	}
	int getNivelDePoder()
	{
		return this->NivelDePoder;
	}
	int getHP()
	{
		return this->HP;
	}
	int getMP()
	{
		return this->MP;
	}
	int getenergia()
	{
		return this->energia;
	}
	int getarmadura()
	{
		return this->armadura;
	}
	int getatk()
	{
		return this->atk;
	}
	int getchancedeesquiva()
	{
		return this->chancedeesquiva;
	}
	int getHPm()
	{
		return this->HPm;
	}
	int getMPm()
	{
		return this->MPm;
	}
	int getenergiam()
	{
		return this->energiam;
	}
	int getHPhistorico()
	{
		return this->HPhistorico;
	}
	int getenergiahistorico()
	{
		return this->energiahistorico;
	}
	int geteMPhistorico()
	{
		return this->MPhistorico;
	}
	int getatkhistorico()
	{
		return this->atkhistorico;
	}
	int getarmadurahistorico()
	{
		return this->armadurahistorico;
	}
	int getDAXP()
	{
		return this->DAXP;
	}
	int getDAREP()
	{
		return this->DAREP;
	}
	int getDAMOEDAS()
	{
		return this->DAMOEDAS;
	}
	
	
//set
	setnome(string A)
	{
		this->nome = A;
	}
	setNivel(string A)
	{
		this->Nivel = A;
	}
	setraca(string A)
	{
		this->raca = A;
	}
	setHP(int a)
	{
		this->HP = a;
	}
	setMP(int a)
	{
		this->MP = a;
	}
	setNivelDePoder(int a)
	{
		this->NivelDePoder = a;
	}
	setenergia(int a)
	{
		this->energia = a;
	}
	setarmadura(int a)
	{
		this->armadura = a;
	}
	setatk(int a)
	{
		this->atk = a;
	}
	setchancedeesquiva(int a)
	{
		this->chancedeesquiva = a;
	}
	setHPm(int a)
	{
		this->HPm = a;
	}
	setMPm(int a)
	{
		this->MPm = a;
	}
	setenergiam(int a)
	{
		this->energiam = a;
	}
	setHPhistorico(int a)
	{
		this->HPhistorico = a;
	}
	setenergiahistorico(int a)
	{
		this->energiahistorico = a;
	}
	seteMPhistorico(int a)
	{
		this->MPhistorico = a;
	}
	setatkhistorico(int a)
	{
		this->atkhistorico = a;
	}
	setarmadurahistorico(int a)
	{
		this->armadurahistorico = a;
	}
	setDAMOEDAS(int a)
	{
		this->DAMOEDAS = a;
	}
	setDAREP(int a)
	{
		this->DAREP = a;
	}
	setDAXP(int a)
	{
		this->DAXP = a;
	}
	bool Esquiva()
	{
	//	int q;
	//	q = NumeroAleatorio(100);
	//	if q <= this->chancedeesquva
	}
//Funções para modificar (m)
	energiaM(int a)
	{
		int i;
		this->energia += a;
		if (this->energia > this->energiam)
		{
			for(i=0;this->energia > this->energiam;i++)
			{
				this->energia --;
			}
			this->energiahistorico = this->energiahistorico + a - i;
			return 0;
		}
		this->energiahistorico = this->energiahistorico + a;
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
			this->MPhistorico += a - i;
			return 0;
		}
		this->MPhistorico += a;
	}
	HPM(int a)
	{
		int i;
		if (a < 0)
		{
			if(this->armadura*-1 <= a)
			{
				cout<<"Bloqueado";
				return 0;
			}
			this->HP += a + this->armadura;
			this->HPhistorico += a + this->armadura;
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
	HPMSA(int a)
	{
		int i;
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
	armaduraM(int a)
	{
		this->armadurahistorico = a;
		this->armadura += a;
	}
	Limparm()
	{
		this->HPhistorico = 0;
		this->MPhistorico = 0;
		this->energiahistorico = 0;
		this->armadurahistorico = 0;
		this->atkhistorico = 0;
		this->xphistorico = 0;
	}
	Atacar(Criatura *inimigo)
	{
		system("CLS");

		ReceberEfeitos();
		if(this->HP > 0)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\tO inimigo ataca.";
			inimigo->HPM(-this->atk);
			energiaM(-30);
		}
		Sleep(280);
	}
		AtacarST(Criatura *inimigo)
	{
		system("CLS");

		ReceberEfeitos();
		if(this->HP > 0)
		{
			inimigo->HPM(-this->atk);
			energiaM(-30);
		}
		Sleep(280);
	}
	PagarCusto(Habilidade H)
	{
		this->HPM(-H.getcustoHP());
		this->MPM(-H.getcustoMP());
		this->energiaM(-H.getcustoenergia());
	}
	bool Verifica(Habilidade H)
	{
		if (this->getHP() < H.getcustoHP())
		{
			cout << "\n\n\n\t\tVocê não possui HP o suficiente\n";
			Sleep(800);
			return false;
		}
		if (this->getMP() < H.getcustoMP())
		{
			cout << "\n\n\n\t\tVocê não possui MP o suficiente\n";
			Sleep(800);
			return false;
		}
		if (this->getenergia() < H.getcustoenergia())
		{
			cout << "\n\n\n\t\tVocê não possui Energia o suficiente\n";
			Sleep(800);
			return false;
		}
		if (H.getdisponivel() == false)
		{
			cout << "\n\n\n\t\tA Habilidade está bloqueada\n";
			Sleep(800);
			return false;
		}
		else 
			return true;
	}
	AdicionarHabilidade(Habilidade H)
	{
		this->habilidades.push_back(H);
	}
	AdicionarHabilidadePassiva(HabilidadePassiva H)
	{
		this->habilidadespassivas.push_back(H);
	}
	virtual CoutAtributos()
	{
		int i;
		Verde("\n\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm;
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
		
		
		Amarelo("\n\t\t\tEnergia ");cout<<this->energia<<"/"<<this->energiam;
		if (this->energiahistorico<0)
		{
			Vermelho("  (");
			Vermelho(energiahistorico);
			Vermelho(")");
		}
		if (this->energiahistorico>0)
		{
			Verde("  (+");
			Verde(energiahistorico);
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
		
		Cinza("\n\t\t\tArmadura ");cout<<this->armadura;
			if (this->armadurahistorico<0)
		{
			Vermelho("  (");
			Vermelho(armadurahistorico);
			Vermelho(")");
		}
		if (this->armadurahistorico>0)
		{
			Verde("  (+");
			Verde(armadurahistorico);
			Verde(")");	
		}
		cout << "\n";
		for (i =0;i<this->habilidades.size();i++)
		{
			
			AmareloClaro("\t\t\tHabilidade");AmareloClaro(i+1);cout<< " " << this->habilidades[i].getnome()<< endl;
		}
		
		for (i =0;i<this->habilidadespassivas.size();i++)
		{
				Azul("\t\t\tHabilidade Passiva");;cout<< " " <<this->habilidadespassivas[i].getnome()<< endl;
		}
		Rosa("\t\t\tEfeitos:\n");
		if(this->efeitos[0].getativo() == true)
		{
			VerdeApagado("\t\t\tEnvenenamento "); cout << this->efeitos[0].getcontador()<< " turnos";
		}
		if(this->efeitos[1].getativo() == true)
		{
			AmareloClaro("\n\t\t\tCombustão ");cout << this->efeitos[1].getcontador()<< " turnos";
		}
		if(this->efeitos[2].getativo() == true)
		{
			Vermelho("\n\t\t\tSangramento ");cout << this->efeitos[2].getcontador()<< " turnos";
		}
		if(this->efeitos[4].getativo() == true)
		{
			Verde("\n\t\t\tAumento de Ataque ");cout << this->efeitos[4].getcontador()<< " turnos";
		}
		if(this->efeitos[3].getativo() == true)
		{
			Cinza("\n\t\t\tAumento de Armadura ");cout << this->efeitos[3].getcontador()<< " turnos";
		}
			this->Limparm();
	}
	AdicionarEfeito(int efeito, int i)
	{
		if(this->efeitos[efeito].getativo() == false && efeito == 3 )
		{
			this->armaduraM(+this->efeitos[3].getvalor());
			this->efeitos[efeito].setativo(true);
			this->efeitos[efeito].setcontador(this->efeitos[efeito].getcontador() + i);
			return 0;
		}
		if(this->efeitos[efeito].getativo() == false && efeito == 4)
		{
			this->atkM(+this->efeitos[4].getvalor());
			this->efeitos[efeito].setativo(true);
			this->efeitos[efeito].setcontador(this->efeitos[efeito].getcontador() + i);
			return 0;
		}
		this->efeitos[efeito].setativo(true);
		this->efeitos[efeito].setcontador(this->efeitos[efeito].getcontador() + i);
	}
	virtual PassarTurno()
	{
		this->energiaM(45);
		this->HPM(0);
		this->MPM(30);
		ReceberEfeitos();
	}
	ReceberEfeitos()
	{
		if(this->efeitos[0].getativo()==true)
		{
			this->HPMSA(-efeitos[0].getdano());
			this->efeitos[0].setcontador(this->efeitos[0].getcontador() - 1);
			if(this->efeitos[0].getcontador() == 0)
			{
				this->efeitos[0].setativo(false);
			}
		}
		if(this->efeitos[1].getativo()==true)
		{
			this->HPMSA(-efeitos[1].getdano());
			this->efeitos[1].setcontador(this->efeitos[1].getcontador() - 1);
			if(this->efeitos[1].getcontador() == 0)
			{
				this->efeitos[1].setativo(false);
			}
		}
		if(this->efeitos[2].getativo()==true)
		{
			this->HPMSA(-efeitos[2].getdano());
			this->efeitos[2].setcontador(this->efeitos[2].getcontador() - 1);
			if(this->efeitos[2].getcontador() == 0)
			{
				this->efeitos[2].setativo(false);
			}
		}
		if(this->efeitos[3].getativo()==true)
		{
	
			this->efeitos[3].setcontador(this->efeitos[3].getcontador() - 1);
			if(this->efeitos[3].getcontador() == 0)
			{
				this->efeitos[3].setativo(false);
				this->armaduraM(-this->efeitos[4].getvalor());
			}
		}
		if(this->efeitos[4].getativo()==true)
		{
			this->efeitos[4].setcontador(this->efeitos[4].getcontador() - 1);
			if(this->efeitos[4].getcontador() == 0)
			{
				this->efeitos[4].setativo(false);
				this->atkM(-this->efeitos[4].getvalor());
			}
		}
	}
	Criatura()
	{
		this->nome = "";
		this->Nivel = "Nível 1";
		this->HP = 0;
		this->MP = 0;
		this->atk = 0;
		this->armadura = 0;
		this->energia = 0;
		this->chancedeesquiva = 0;
		this->energiam = this->energia;
		this->HPm = this->HP;
		this->MPm = this->MP;
		this->HPhistorico = 0;
		this->MPhistorico = 0;
		this->energiahistorico = 0;
		this->atkhistorico = 0;
		this->armadurahistorico = 0;
		this->DAXP = 0;
		this->DAREP = 0;
		this->xp = 0;
		this->xphistorico = 0;
		this->NivelDePoder = 0;
		
		this->efeitos[0].setativo(false);
		this->efeitos[0].setnome("Combustão");
		this->efeitos[0].setefeito("A vítima está pegando fogo");
		this->efeitos[0].setdano(7);
		this->efeitos[0].setcontador(0);
		
		this->efeitos[1].setativo(false);
		this->efeitos[1].setnome("Envenenamento");
		this->efeitos[1].setefeito("A vítima está envenenada");
		this->efeitos[1].setdano(5);
		this->efeitos[1].setcontador(0);
		
		this->efeitos[2].setativo(false);
		this->efeitos[2].setnome("Sangramento");
		this->efeitos[2].setefeito("A vítima está sangrando");
		this->efeitos[2].setdano(6);
		this->efeitos[2].setcontador(0);
		
		this->efeitos[3].setativo(false);
		this->efeitos[3].setnome("Aumento de Armadura");
		this->efeitos[3].setefeito("A armadura do usuário está aumentada");
		this->efeitos[3].setdano(0);
		this->efeitos[3].setcontador(0);
		this->efeitos[3].setvalor(4);
		
		this->efeitos[4].setativo(false);
		this->efeitos[4].setnome("Aumento de Ataque");
		this->efeitos[4].setefeito("A ataque do usuário está aumentado");
		this->efeitos[4].setdano(0);
		this->efeitos[4].setcontador(0);
		this->efeitos[4].setvalor(6);
		
	}
};	
class Monstro: public Criatura
{
public:
};
class BonecoDeTreino: public Criatura
{
public:
};
class Humano: public Criatura
{
public:
};
class Marine: public Criatura
{
public:
	virtual Atacar(Criatura *alvo)
	{
	}
	Marine()
	{
		this->Nivel = "Nível 1";
	}
};
class MarineMago: public Marine
{
public:
	
	AtivarHabilidade(Criatura* alvo,int numero)
	{
		system("CLS");
		cout << "\n\n\n\n\n\n\n";
		if (numero == 0)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine dispara raios de suas mãos\n");
			ImprimirComDelay("\t\t\tEle se prepara e reassume a postura de combate");
			PontosBrancos();
			alvo->HPM(-this->atk*3.5);
			PagarCusto(habilidades[numero]);		
		}
		if (numero == 1)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine se abaixa e começa a entoar cânticos esquecidos.\n");
			ImprimirComDelay("\t\t\tMãos de cadáveres aparecem sob seus pés");
			PontosBrancos();
			alvo->HPM(-6*this->atk);
			PagarCusto(habilidades[numero]);
		}
		if (numero == 2)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine saca de suas vestes uma poção verde escura\n");
			ImprimirComDelay("\t\t\tEle ingere a poção borbulhante, e então ri em tom desafiador");
			PontosBrancos();
			this->HPM(+this->HPm*0.3);
			this->HPm += 30;
			this->HPM(30);
			PagarCusto(habilidades[numero]);
		}
		if (numero == 3)
		{
			ImprimirComDelayNoFim("\t\t\tUma poção negra explode sob os pés do Marine\n");
			ImprimirComDelay("\t\t\tEle inala a fumaça com apetite");
			PontosBrancos();
			this->armaduraM(2);
			this->HPM(15);
			this->MPm += 30;
			this->MPM(30);
			PagarCusto(habilidades[numero ]);
		}
		if (numero == 4)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine inicia um ritual apontando suas mãos em sua direção.\n");
			ImprimirComDelay("\t\t\tVocê sente uma parte de sua alma sendo perdida");
			PontosBrancos();
			PagarCusto(habilidades[numero]);
			this->HPm += alvo->getHPm()*0.2;
			alvo->HPM(alvo->getHPm()*0.2);
			alvo->setHPm(alvo->getHPm() - alvo->getHPm()*0.2);
			this->HPM(alvo->getHPm()*0.2);
		}
	
	}
	Atacar(Criatura *alvo)
	{
		int q;
		bool v;
		q = NumeroAleatorio(34);
		if (q <= 17)
		{
			if (this->energia >= 15)
			{	
				alvo->HPM(-this->atk);
				this->energiaM(-15);
			}
			if (this->energia < 15)
			{
				this->PassarTurno();
				return 0;
			}
		}
		if( q >= 18 && q <= 23 )
		{
			v = Verifica(this->habilidades[0]);
			if (v == false)
			{
				this->PassarTurno();
				return 0;
			}
			this->AtivarHabilidade(alvo,0);
		}
		if( q == 24)
		{
			v = Verifica(this->habilidades[1]);
			if (v == false)
			{
				this->PassarTurno();
				return 0;
			}
			this->AtivarHabilidade(alvo,1);
		}
		if( q >= 25 && q <= 28  )
		{
			v =Verifica(this->habilidades[2]);
			if (v == false)
			{
			this->PassarTurno();
				return 0;
			}
			this->AtivarHabilidade(alvo,2);
		}
		if( q >= 29 && q <= 32  )
		{
			v =Verifica(this->habilidades[3]);
			if (v == false)
			{
				this->PassarTurno();
				return 0;
			}
			this->AtivarHabilidade(alvo,3);
		}
		if( q == 33 || q == 34  )
		{
			v =Verifica(this->habilidades[4]);
			if (v == false)
			{
				this->PassarTurno();
				return 0;
			}
			this->AtivarHabilidade(alvo,4);
		}
	}
	MarineMago()
	{
		// Ataque (5/22)
		this->HabilidadeAux.setnome("Raios do Marine");
		this->HabilidadeAux.setinfo("(6/22) Dispara uma	 Rajada de raio mortíferos em seu oponente\n");
		this->HabilidadeAux.setcustoMP( 25);
		this->HabilidadeAux.setcustoHP( 0);
		this->HabilidadeAux.setcustoenergia(10);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Mãos do submundo");
		this->HabilidadeAux.setinfo("(1/22)Invoca o poder dos mortos conjurando mãos os falecidos aos seus pés\n");
		this->HabilidadeAux.setcustoMP( 40);
		this->HabilidadeAux.setcustoHP( 0);
		this->HabilidadeAux.setcustoenergia(15);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Poção da cura");
		this->HabilidadeAux.setinfo("(4/22)Ingere uma poção curando 80% e aumentando limite de vida em 30\n");
		this->HabilidadeAux.setcustoMP( 35);
		this->HabilidadeAux.setcustoHP( 0);
		this->HabilidadeAux.setcustoenergia( 5);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Poção Amaldiçoada");
		this->HabilidadeAux.setinfo("(4/22)O usuário bebe uma poção, restaurando uma parte de sua vida, concedendo mana máxima e defesa;\n");
		this->HabilidadeAux.setcustoMP( 25);
		this->HabilidadeAux.setcustoHP( 0);
		this->HabilidadeAux.setcustoenergia( 5);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Transfusão de alma");
		this->HabilidadeAux.setinfo("(2/22) Rouba uma parcela da vida do adversário\n");
		this->HabilidadeAux.setcustoMP( 30);
		this->HabilidadeAux.setcustoHP(  0);
		this->HabilidadeAux.setcustoenergia(15);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadePassivaAux.setnome( "Magia dos Marines.");
		this->HabilidadePassivaAux.setinfo("O mago é um oponente poderoso e astuto, não subestime sua magia.");
		this->habilidadespassivas.push_back(HabilidadePassivaAux);
		
		this->setDAMOEDAS(500);
		this->setDAREP(90);
		this->setDAXP(300);
	}
};
class MarineLutador: public Marine
{	
public:

	Ativarhabilidade(Criatura* alvo, int i )
	{
		system("CLS");
		cout <<"\n\n\n\n\n\n\n\t\t\t";
		if (i == 1)
		{
			ImprimirComDelayNoFim("O Marine bate em seu peito e grita furiosamente\n");
			Vermelho("t\t\tROAAAAAAAAAAAAAAAAAAAAAAR!");
			PontosBrancos();
			this->HPM(+10);
			this->energiaM(50);
			this->armaduraM(1);
			this->atkM(3);
			this->PagarCusto(habilidades[i]);
		}
		if (i == 2)
		{
			ImprimirComDelayNoFim("Os olhos do Marine brilham intensamente em vermelho vivo enquanto sua boca espuma.\n");
			ImprimirComDelay("t\t\tEle parece extremamente furioso");
			PontosBrancos();
			this->HPm += -30;
			this->armaduraM(3);
			this->AdicionarEfeito(4,4);
			this->atkM(2);
			this->PagarCusto(habilidades[i]);
		}
		if (i == 3)
		{
			ImprimirComDelayNoFim("O Marine lhe golpeia violentamente com seu machado\n");
			ImprimirComDelay("t\t\tSeu corpo se esvai em sangue");
			PontosBrancos();
			this->PagarCusto(habilidades[i]);
			v = alvo->Esquiva();
			if (v == false)
			{
				alvo->HPM(-this->getatk()*2 -5);
				alvo->AdicionarEfeito(Sangramento,3);
			}

		}
		if (i == 4)
		{
			ImprimirComDelayNoFim("O marine desfere um golpe letal na tentativa de lhe executar\n");
			ImprimirComDelay("(t\t\tSe seu");Verde(" HP ");cout <<"estiver abaixo de ";Vermelho("25%");cout << "você será executado.)";
			PontosBrancos();
			this->PagarCusto(habilidades[i]);
			if (alvo->getHP() < alvo->getHPm()*0.25)
			{
				alvo->setHP(0);
				return 0;
			}
			alvo->HPM(-30);
		}	
	}
	Atacar(Criatura* alvo)
	{
		bool v;
		int q;
		ReceberEfeitos();
		q = NumeroAleatorio(40);
		if (q <= 20 )
		{
			if (this->energia >= 30)
			{	
				this->energiaM(-30);
				v =alvo->Esquiva();
				if (v == false)
				alvo->HPM(-this->atk);
			}
			else if (this->energia < 30)
			{
				this->PassarTurno();
				return 0;
			}
		}
		if( q >=21 && q <= 27 )
		{
			v  = Verifica(this->habilidades[0]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
		
			this->Ativarhabilidade(alvo,0);
		}
		if( q >=28 && q <= 33 )
		{
			v  =Verifica(this->habilidades[1]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
		
			this->Ativarhabilidade(alvo,1);
		}
		if( q >=34 && q <= 38)
		{
			v  =Verifica(this->habilidades[2]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
		
			this->Ativarhabilidade(alvo,2);
		}
		if( q >= 39 && q <= 40 )
		{
			v  =Verifica(this->habilidades[3]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
		
			this->Ativarhabilidade(alvo,3);
		}
		return true;
	}
	MarineLutador()
	{
		this->HabilidadeAux.setnome("Grito do lutador");
		this->HabilidadeAux.setinfo("Aumenta seu ataque, armadura, HP, e recupera alguns pontos de energia");
		this->HabilidadeAux.setusar1("O Marine bate em seu peito e grita furiosamente\n");
		this->HabilidadeAux.setusar2("ROAAAAAAAAAAAAAAAAAAAAAAR!");
		this->HabilidadeAux.setcustoMP(20);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(0);
		this->HabilidadeAux.setdano(0);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Ira do Marine");
		this->HabilidadeAux.setinfo("O marine entra em um estado de fúria, Aumentando muito seu ataque e reduzindo sua vida");
		this->HabilidadeAux.setusar1("Os olhos do Marine brilham intensamente em vermelho vivo enquanto sua boca espuma.\n");
		this->HabilidadeAux.setusar2("Ele parece extremamente furioso");
		this->HabilidadeAux.setcustoMP(20);
		this->HabilidadeAux.setcustoHP(30);
		this->HabilidadeAux.setcustoenergia(30);
		this->HabilidadeAux.setdano(0);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Machadada Colossal");
		this->HabilidadeAux.setinfo("O marine canaliza sua fmarinea e desfere um bruto golpe com seu machado");
		this->HabilidadeAux.setusar1("O Marine lhe golpeia violentamente com seu machado\n");
		this->HabilidadeAux.setusar2("Seu corpo se esvai em sangue");
		this->HabilidadeAux.setcustoMP(20);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(50);
		this->HabilidadeAux.setdano(this->getatk()*2);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Golpe do Executor");
		this->HabilidadeAux.setinfo("O marine desfere um golpe com o seu machado na tentativa de executar o alvo\n");
		this->HabilidadeAux.setusar1("O marine desfere um golpe letal na tentativa de lhe executar\n");
		this->HabilidadeAux.setusar2("(Se sua vida estiver abaixo de 25% você será executado.)");
		this->HabilidadeAux.setcustoMP(20);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(15);
		this->HabilidadeAux.setdano(30);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadePassivaAux.setnome( "A Fúria sem fim dos Marines");
		this->HabilidadePassivaAux.setinfo("O usuário é um Marine furioso, possui HP e armadura aumentados,"
		" além de um instinto assasino que o fará te perseguir até a morte\n"
		"8% de HP extra\n ");
		this->habilidadespassivas.push_back(HabilidadePassivaAux);
		
		this->setDAMOEDAS(340);
		this->setDAREP(40);
		this->setDAXP(200);
		
		this->loot[1].setnome("Cabeça de Durotan");
		this->loot[1].setcodigo(52);
		this->loot[1].settamanho(1);
		this->loot[1].setquantidade(1);
		this->loot[1].setpreco(1800);
		this->loot[1].setdescricao("O Troféu por derrotar o terrível Marine guerreiro Durotan.");
		this->loot[1].setbatalha(false);
		this->loot[1].setconsumivel(false);
	}
};
class MarineCacador: public Marine
{
public:
	
	Ativarhabilidade(Criatura* alvo,int i )
	{
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n";
		if (i == 0)
		{
			ImprimirComDelay("\t\t\tO Marine se concentra e mira uma flecha mortal na sua direção.\n");
			ImprimirComDelay("\t\t\tEle sorri maliciosamente obervando a flecha se aproximar de seu peito");
			PontosBrancos();
			alvo->armaduraM(-2);
			alvo->HPM(-this->getatk()*2.2);
			alvo->AdicionarEfeito(Sangramento,3);
			this->PagarCusto(habilidades[i]);
		}
		if (i == 1)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine lhe encara e dispara uma flecha em si mesmo.\n");
			ImprimirComDelay("\t\t\tEle gargalha em tom desafiador enquanto cura suas feridas");
			PontosBrancos();
			this->HPM(this->HPm/5);
			this->HPm += 10;
			this->HPM(10);
			this->PagarCusto(habilidades[i]);
		}
		if (i == 2)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine solta um grito amedontador e dispara um flecha sob os próprios pés\n");
			ImprimirComDelay("\t\t\tFiguras estranhas são expelidas pela flecha e entram no corpo do marine");
			PontosBrancos();
			this->HPm += 20;
			this->HPM(10);
			this->armaduraM(2);
			this->MPm += 25;
			this->MPM(25);
			this->energiam += 20;
			this->energiaM(30);
			this->atkM(3);
			this->PagarCusto(habilidades[i]);
		}
		if (i == 3)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine dispara uma flecha estranha\n");
			ImprimirComDelay("\t\t\tVocê sente o ardor de um veneno paralisante em seu sangue");
			PontosBrancos();
			alvo->HPM(-this->getatk()- 5);
			alvo->AdicionarEfeito(Envenenamento,3);
			this->PagarCusto(habilidades[i]);
		}
		if (i == 4)
		{
			ImprimirComDelayNoFim("\t\t\tO Marine dispara uma flecha flamejante\n");
			ImprimirComDelay("\t\t\tEle uiva triunfantemente ao ver a flecha acertar seu alvo");
			PontosBrancos();
			alvo->HPM(-this->getatk()- 7);
			alvo->AdicionarEfeito(Combustao,2);
			this->PagarCusto(habilidades[i]);
		}
	}
	Atacar(Criatura *alvo)
	{
		bool v;
		int q;
		ReceberEfeitos();
		q = NumeroAleatorio(26);
		if (q <= 13)
		{
			if (this->energia >= 25)
			{	
				alvo->HPM(-this->atk);
				this->energiaM(-25);
			}
			else if (this->energia < 25)
			{
				this->PassarTurno();
			}
		}
		if( q == 14 )
		{
			v  = Verifica(this->habilidades[0]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
			this->Ativarhabilidade(alvo,0);
		}
		if( q >= 15 && q <= 16  )
		{
			v  =  Verifica(this->habilidades[1]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
			this->Ativarhabilidade(alvo,1);
		}
		if( q >= 17 && q <= 18  )
		{
			v  =Verifica(this->habilidades[2]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
			this->Ativarhabilidade(alvo,2);
		}
		if( q >= 19 && q <= 22  )
		{
			v  =Verifica(this->habilidades[3]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
		
			this->Ativarhabilidade(alvo,3);
		}
		if( q >= 23 && q <= 26  )
		{
			v  =Verifica(this->habilidades[4]);
			if (v == false)
			{
					this->PassarTurno();
					return 0;
			}
			this->Ativarhabilidade(alvo,4);
		}
	}
	MarineCacador()
	{
		this->HabilidadeAux.setnome("Flecha da Morte");
		this->HabilidadeAux.setinfo("Dispara um flexa certeira e mortal, causando dano, sangramento, e reduzindo a armadura do alvo.");
		this->HabilidadeAux.setefeito("Sangramento");
		this->HabilidadeAux.setcustoMP(35);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(20);
		this->HabilidadeAux.setdano(0);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Flecha Curativa");
		this->HabilidadeAux.setinfo("(Dispara um flexa em si mesmo, aumentando o HP máximo em 10, e recuperando 20% do HP máximo.\n");
		this->HabilidadeAux.setcustoMP(25);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(10);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Flecha do ritual");
		this->HabilidadeAux.setinfo("Dispara um flexa amaldiçoada em si mesmo, aumentando o próprio ataque, defesa, energia, MP e HP.");
		this->HabilidadeAux.setcustoMP(25);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(20);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Flecha envenenada");
		this->HabilidadeAux.setinfo("Dispara um flexa envenenada, causando danos constanstes ao jogador.");
		this->HabilidadeAux.setcustoMP(20);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setdano(5);
		this->HabilidadeAux.setefeito("Envenenamento");
		this->HabilidadeAux.setcustoenergia(10);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadeAux.setnome("Flecha flamejante");
		this->HabilidadeAux.setinfo("Dispara um flexa flamejante, causando danos constanstes ao jogador.");
		this->HabilidadeAux.setcustoMP(25);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setdano(5);
		this->HabilidadeAux.setefeito("Combustão");
		this->HabilidadeAux.setcustoenergia(15);
		this->HabilidadeAux.setdisponivel(true);
		this->habilidades.push_back(HabilidadeAux);
		
		this->HabilidadePassivaAux.setnome("A Destreza do Caçador.");
		this->HabilidadePassivaAux.setinfo("Um caçador astuto e cauteloso, possui grande dano, porém poucos pontos de vida");
		this->habilidadespassivas.push_back(HabilidadePassivaAux);
	}
};
class Jogador: public Humano
{
protected:
	string Nivel;
	int Dificuldade,moedas,xphistorico,Reputacao;
	Item itemvazio;
	Habilidade HabilidadeBloqueada;
	vector<Habilidade>Habilidades;
	Habilidade habilidade;
	class Casa
	{
	public:
		string local,tipo;
		vector<Item> Bau;
		Item itemvazio;
		int i;
		
		int BauDisponivel()
		{
			int i,d=0;
			for(i=0; i < this->Bau.size();i++)
			{
				if (this->Bau[i].getnome() == "Vazio.")
				{
					d++;
				}
			}
			return d;
		}	
		ColocarItem(Item a)
		{
			int i;
			for(i=0; i < this->Bau.size(); i++)
			{
	
				if(a.getnome() == this->Bau[i].getnome())
				{
					this->Bau[i].setquantidade(this->Bau[i].getquantidade() + a.getquantidade());
					return 0;
				}
			}
		
			if (this->BauDisponivel() <= 0)
			{
				return 0;
			}
			
			for(i=0; i < this->Bau.size(); i++)
			{
				if (Bau[i].getnome() == "Vazio.")
				{
				 	Bau[i].setnome(a.getnome());
				 	Bau[i].setcodigo(a.getcodigo());
				 	Bau[i].sethp(a.gethp());
				 	Bau[i].setxp(a.getxp());
				 	Bau[i].setmp(a.getmp());
				 	Bau[i].setquantidade(a.getquantidade());
				 	Bau[i].setdescricao(a.getdescricao());
				 	Bau[i].setbatalha(a.getbatalha());
				 	Bau[i].settamanho(a.gettamanho());
					return 0;
				}
			}
		}   
		AnalisarItem(Jogador *jogador,Item*item)
		{
			system("cls");
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
			cout <<  "|                                                     ";Verde("Descrição de item");cout<<"                                               |";                              
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
			cout << "\n\n\t\tNome: " <<item->getnome();     
			cout << "\n\n\t\tTamanho  " <<item->gettamanho();
			cout << "\n\n\t\tRestaura " <<item->gethp();Verde(" de HP");
			cout << "\n\n\t\tRestaura " <<item->getmp();Azul(" de MP");
			cout << "\n\n\t\tConcede  " <<item->getxp();AmareloClaro(" de XP");
			cout << "\n\n\t\tCausa " <<item->getmp();Vermelho(" de dano ao inimigo");
			cout << "\n\n\t\tÉ consumível? : ";
			if (item->getconsumivel() == true)
				Vermelho("Sim");
			if (item->getconsumivel() == false)
				Verde("Não");
			cout << "\n\n\t\tPode ser usado em batalha? : ";
			if (item->getbatalha() == true)
				Vermelho("Sim");
			if (item->getbatalha() == false)
				Verde("Não");
			cout << "\n\n\t\t" <<item->getdescricao()<<endl<<endl;
			cout << "\n\n\t   (1) Sair        \n";
			cout << "\n\n\t   (2) Pegar o item \n";
	
			switch(Tecla())
			{
				case 49:
				break;
				
				case 50:
					jogador->PegarItem(item);
				break;
			}
		}
		AbrirBau(Jogador *jogador)
		{
			int i,contador = 0,tela = 0,n=0;
	
			while (true)
			{
				system("cls");
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
				cout <<  "|                                                          ";Verde("Pagina ");Verde(tela + 1);cout<<"                                                    |";                              
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
				cout<<"\t\tSlots disponíveis: "<<BauDisponivel()<<endl<<endl;
				
				if (tela == 0)
				{
					n = 0;
					for (i = 0; i <= this->Bau.size();i++)
					{
						
						cout << "\t("<< n +1 << ")\t"<< i + 1<< "- " << this->Bau[i].getnome();
						if (this->Bau[i].getnome() != "Vazio.")
						{ 
							Verde("  X"); cout<<this->Bau[i].getquantidade();
						}
						cout <<"\n\t\t  ";
						cout <<this->Bau[i].getdescricao();
						cout <<"\n\n";
						n++;
						if (i == 8)
						{
							break;
						}	
					}
				}
				if (tela == 1)
				{
					n = 0;
					for (i = 9; i <= this->Bau.size();i++)
					{
						
						cout << "\t("<< n +1 << ")\t"<< i + 1<< "- " << this->Bau[i].getnome();
						if (this->Bau[i].getnome() != "Vazio.")
						{ 
							Verde("  X"); cout<<this->Bau[i].getquantidade();
						}
						cout <<"\n\t\t  ";
						cout <<this->Bau[i].getdescricao();
						cout <<"\n\n";
						n++;
						if (i == 17)
						{
							break;
						}	
					}
				}
				if (tela == 2)
				{
					n = 0;
					for (i = 18; i <= this->Bau.size();i++)
					{
						if (i >= this->Bau.size())
							break;
						cout << "\t("<< n +1 << ")\t"<< i + 1<< "- " << this->Bau[i].getnome();
						if (this->Bau[i].getnome() != "Vazio.")
						{ 
							Verde("  X"); cout<<this->Bau[i].getquantidade();
						}
						cout <<"\n\t\t  ";
						cout <<this->Bau[i].getdescricao();
						cout <<"\n\n";
						n++;
						if (i == 26)
						{
							break;
						}	
					}
				}
				cout <<"\t(i)\tFechar baú";
				AzulClaro("\n\n    <-- Página anterior                                                                           Proxima página -->\n");
				switch(tela)
				{
					case 0:
		        	switch(Tecla())
		        	{
						case 49:
							AnalisarItem(jogador,&Bau[0]);
						break;
						
						case 50:
							AnalisarItem(jogador,&Bau[1]);
						break;
						
						case 52:
							AnalisarItem(jogador,&Bau[2]);
						break;
						
						case 53:
							AnalisarItem(jogador,&Bau[3]);
						break;
						
						case 54:
							AnalisarItem(jogador,&Bau[4]);
						break;
						
						case 55:
							AnalisarItem(jogador,&Bau[5]);
						break;
						
						case 56:
							AnalisarItem(jogador,&Bau[6]);
						break;
						
						case 57:
							AnalisarItem(jogador,&Bau[7]);
						break;
						
						case 58:
							AnalisarItem(jogador,&Bau[8]);
						break;
	
						
						case 75:
							tela--;
							if(tela < 0)
							tela = 2;
						break;
						
						case 77:
							tela++;	
							if(tela > 2)
								tela = 0;
						break;
						
						case Retornar:
							return 0;
							Pause();
						break;
						
						case Menu:
				        	jogador->MenuPrincipal();
				        break;
					}
					break;
					
					case 1:
					switch(Tecla())
					{
						case 49:
							AnalisarItem(jogador,&Bau[9]);
						break;
						
						case 50:
							AnalisarItem(jogador,&Bau[10]);
						break;
						
						case 52:
							AnalisarItem(jogador,&Bau[11]);
						break;
						
						case 53:
							AnalisarItem(jogador,&Bau[12]);
						break;
						
						case 54:
							AnalisarItem(jogador,&Bau[13]);
						break;
						
						case 55:
							AnalisarItem(jogador,&Bau[14]);
						break;
						
						case 56:
							AnalisarItem(jogador,&Bau[15]);
						break;
						
						case 57:
							AnalisarItem(jogador,&Bau[16]);
						break;
						
						case 58:
							AnalisarItem(jogador,&Bau[17]);
						break;
						
						case 75:
							tela--;
							if(tela < 0)
							tela = 2;
						break;
						
						case 77:
							tela++;	
							if(tela > 2)
								tela = 0;
						break;
					}
					break;
				
					case 2:
					switch(Tecla())
					{
						case 49:
							AnalisarItem(jogador,&Bau[18]);
						break;
						
						case 50:
							AnalisarItem(jogador,&Bau[19]);
						break;
						
						case 52:
							AnalisarItem(jogador,&Bau[20]);
						break;
						
						case 53:
							AnalisarItem(jogador,&Bau[21]);
						break;
						
						case 54:
							AnalisarItem(jogador,&Bau[22]);
						break;
						
						case 55:
							AnalisarItem(jogador,&Bau[23]);
						break;
						
						case 56:
							AnalisarItem(jogador,&Bau[24]);
						break;
						
						case 57:
							AnalisarItem(jogador,&Bau[25]);
						break;
						
						case 58:
							AnalisarItem(jogador,&Bau[26]);
						break;
						
						case 75:
							tela--;
							if(tela < 0)
							tela = 2;
						break;
						
						case 77:
							tela++;	
							if(tela > 2)
								tela = 0;
						break;	
					}
					break;
				}	
			}	
		}
		Casa(int tamanho)
		{
			if (tamanho == 0)
			{
				this->tipo = "Casa pequena";
				for (i=0;i<20;i++)
				{
					this->Bau.push_back(itemvazio);
				}
			}
			if (tamanho == 1)
			{
				this->tipo = "Casa média";
				for (i=0;i<50;i++)
				{
					this->Bau.push_back(itemvazio);
				}
			}
			if (tamanho == 2)
			{
				this->tipo = "Casa Grande";
				for (i=0;i<100;i++)
				{
					this->Bau.push_back(itemvazio);
				}
			}
		}
	};
public:
	bool PrimeiraVezEmKyronma, PrimeiraVezNoMercadorDeAlimentos, PrimeiraVezNoCentro, PrimeiraVezNataverna;
	bool PrimeiraVezNoCurandeiro,PrimeiraVezNoPortao, PrimeiraVezEmCasa, PrimeiraVezNoBalcao,PrimeiraVezNoInstrutor,PrimeiraVezNoHomemEstranho;
	bool PrimeiraVezNosCamposPraianos, PrimeiraVezNaPraia, PrimeiraVezNaPraiaSecreta;
	vector<Casa> Casas;
	vector<Item> Inventario;
	
	
	setDificuldade(int a)
	{
		this->Dificuldade = a;
	}
	int getDificuldade()
	{
		return this->Dificuldade;
	}
	int getmoedas()
	{
		return this->moedas;
	}
	int getReputacao()
	{
		return this->Reputacao;
	}
	setmoedas(int a)
	{
		this->moedas = a;
	}
	moedasM(int a)
	{
		this->moedas += a;
	}
	bool VerificarMoedas(int a)
	{
		if(this->moedas < a)
		{
			return false;
		}
			if(this->moedas >= a)
		{
			return true;
		}
	}	
	SubirDeNivel()
	{
		system("cls");
		AzulClaro("\n\n\n\n\n\n\t\tVocê suiu de nível!\n");
		ImprimirComDelay("\n\t\tAgora você é ");VerdeCD(this->Nivel);ImprimirComDelayNoFim(".");
		ImprimirComDelay("\n\t\tSeus atributos foram Aprimorados.\n\n\t\tVocê recebeu:");
	//	AmareloClaro("\t\tHabilidade");
	//	Azul("\t\tHabilidade Passiva");;cout<< " " <<this->habilidadespassivas[i].getnome()<< endl;
		this->HPm += 30;
		this->HPM(30);
		this->MPm += 15;
		this->MPM(15);
		this->energiam += 20;
		this->energiaM(20);
		this->atk += 2;
		this->armadura +=1 ;
		if (this->Nivel == "Nivel 1")
		{
		}
		if (this->Nivel == "Nivel 2")
		{
			this->Habilidades[1].setdisponivel(true);
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 0;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 0;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 0;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 0;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			ImprimirComDelay("\n\n\t\tHabilidade ");AmareloClaro(this->Habilidades[1].getnome()); cout << " agora disponível\n\n";
			Pause();
		}
		if (this->Nivel == "Nivel 3")
		{
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 0;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 0;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 0;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 0;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			Pause();
		}
		if (this->Nivel == "Nivel 4")
		{
			this->Habilidades[2].setdisponivel(true);
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 0;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 0;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 0;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2+ 0;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			ImprimirComDelay("\n\n\t\tHabilidade ");AmareloCD(this->Habilidades[2].getnome()); cout << " agora disponível\n\n";
			Pause();
		}
		if (this->Nivel == "Nivel 5")
		{
			this->HPm += 10;
			this->HPM(10);
			this->MPm += 10;
			this->MPM(10);
			this->energiam += 10;
			this->energiaM(10);
			this->atk += 1;
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 10;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 10;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 10;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 1;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			Pause();
		}
		if (this->Nivel == "Nivel 6")
		{
			this->Habilidades[3].setdisponivel(true);
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 0;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 0;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 0;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2+ 0;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			ImprimirComDelay("\n\n\t\tHabilidade ");AmareloCD(this->Habilidades[3].getnome()); cout << " agora disponível\n\n";
			Pause();
			
		}
		if (this->Nivel == "Nivel 7")
		{
			this->HPm += 10;
			this->HPM(10);
			this->MPm += 10;
			this->MPM(10);
			this->energiam += 10;
			this->energiaM(10);
			this->atk += 1;
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 10;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 10;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 10;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 1;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			Pause();
		}
		if (this->Nivel == "Nivel 8")
		{
			this->HPm += 10;
			this->HPM(10);
			this->MPm += 10;
			this->MPM(10);
			this->energiam += 10;
			this->energiaM(10);
			this->atk += 1;
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 10;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 10;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 10;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 1;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			Pause();
		}
		if (this->Nivel == "Nivel 9")
		{
			this->HPm += 10;
			this->HPM(10);
			this->MPm += 10;
			this->MPM(10);
			this->energiam += 10;
			this->energiaM(10);
			this->atk += 1;
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 10;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 10;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 10;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 1;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 0;
			Pause();
		}
		if (this->Nivel == "Nivel 10")
		{
			this->HPm += 30;
			this->HPM(30);
			this->MPm += 15;
			this->MPM(15);
			this->energiam += 15;
			this->energiaM(15);
			this->atk += 3;
			this->atk += 2;
			VerdeCD("\n\n\t\tHP + " );cout <<30 + 30;
			AzulCD("\n\n\t\tMP + ");cout <<15 + 15;
			AmareloCD("\n\n\t\tEnergia + ");cout <<20 + 15;
			VermelhoCD("\n\n\t\tAtaque + ");cout <<2 + 3;
			CinzaCD("\n\n\t\tArmadura + ");cout <<1 + 2;
			Pause();
		}
	}
	XPM(int a)
	{
		string auxiliar;
		auxiliar = this->Nivel;
		this->xp += a;
		this->xphistorico += a;
		
		if (this->xp >= 40 && this->xp < 90)
		{
			this->Nivel = "Nivel 2";
		}
		if (this->xp >= 90 && this->xp < 200)
		{
			this->Nivel = "Nivel 3";
		}
		if (this->xp >=200 && this->xp <270)
		{
			this->Nivel = "Nivel 4";
		}
		if (this->xp >= 270 && this->xp < 350)
		{
			this->Nivel = "Nivel 5";
		}
		if (this->xp >= 350 && this->xp < 420)
		{
			this->Nivel = "Nivel 6";
		}
		if (this->xp >= 420 && this->xp < 520)
		{
			this->Nivel = "Nivel 7";
		}
		if (this->xp >= 520 && this->xp < 630)
		{
			this->Nivel = "Nivel 8";
		}
		if (this->xp >= 630 && this->xp < 740)
		{
			this->Nivel = "Nivel 9";
		}
		if (this->xp >= 740 && this->xp < 850)
		{
			this->Nivel = "Nivel 10";;
		}
		if(auxiliar != this->Nivel)
		{
			SubirDeNivel();
		}
	}
	int InventarioDisponivel()
	{
		int i,d=0;
		for(i=0; i < this->Inventario.size();i++)
		{
			if (this->Inventario[i].getnome() == "Vazio.")
			{
				d++;
			}
		}
		return d;
	}	 
	Encontro (Criatura inimigo)
	{
		while (1)
		{
			system("CLS");
			
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
			cout <<  "|                                                           ";Amarelo("Encontro");cout<<"                                                   |";                              
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
			ImprimirComDelay("\n\n\n\n\n\n\tVocê Encontrou : ");VermelhoCD(inimigo.getnome());cout << " "; VerdeCDNoFim(inimigo.getNivel());
			ImprimirComDelayNoFim("\n\tOque irá fazer?\n\n\n");
			
			
 cout <<"\n\n+----------------------------------------------------------------------------------------------------------------------+\n"
			"|                  1-LUTAR!                2-FUGIR                3-DETALHAR                4-INVENTÁRIO               |\n"
			"+----------------------------------------------------------------------------------------------------------------------+\n";
			
			switch(Tecla())
			{
				case 49:
					this->luta(&inimigo);
					return 0;
				break;
				
				case 50:
					if(this->NivelDePoder >= inimigo.getNivelDePoder() + 100)
					{
						system("CLS");
						ImprimirComDelay("\n\n\n\n\n\n\t\tVocê fugiu da batalha.");
						return 0;
					}
					if(this->NivelDePoder <= inimigo.getNivelDePoder())
					{
						int q;
						q = NumeroAleatorio(100);
						if(this->chancedeesquiva < q)
						{
							system("CLS");
							ImprimirComDelay("\n\n\n\n\n\n\t\tVocê tenta em vão fugir de seu inimigo, e ele te ataca.");
							inimigo.AtacarST(this);
							this->luta(&inimigo);
						}
						else 
						{
							system("CLS");
							ImprimirComDelay("\n\n\n\n\n\n\t\tVocê fugiu da batalha.");
							return 0;
						}
					}
					
				break;
					
					
				case 104 :
					this->AbrirInventario();
				break;
				
			}
		}
	}
	AdicionarItemNoInventario(Item* a)
	{
		int i;
		for(i=0; i < this->Inventario.size(); i++)
		{

			if(a->getnome() == this->Inventario[i].getnome())
			{
				this->Inventario[i].setquantidade(this->Inventario[i].getquantidade() + a->getquantidade());
				return 0;
			}
		}
	
		if (this->InventarioDisponivel() <= 0)
		{
			return 0;
		}
		
		for(i=0; i < this->Inventario.size(); i++)
		{
			if (Inventario[i].getnome() == "Vazio.")
			{
				Atribuir(&Inventario[i],a);
			 	
			 	
				return 0;
			}
		}
	}   
	Atribuir(Item *a,Item*b)
	{
		a->setcodigo(b->getcodigo());
		a->sethp(b->gethp());
		a->setxp(b->getxp());
		a->setmp(b->getmp());
		a->setenergia(b->getenergia());
		a->setpreco(b->getpreco());
		a->setquantidade(b->getquantidade());
		a->setnome(b->getnome());
		a->settamanho(b->gettamanho());
		a->setdescricao(b->getdescricao());
		a->setbatalha(b->getbatalha());
	} 
	DeixarVazio(Item*x)
	{
    	x->setnome ("Vazio.");
		x->setcodigo( 0);
		x->settamanho( 1);
		x->setxp(0);
		x->sethp(0);
		x->setmp(0);
		x->setenergia(0);
		x->setpreco(0);
		x->setquantidade(1);
		x->setdescricao("Guarde algo aqui.");
		x->setbatalha(false);
		x->setconsumivel(false);
	} 
	PegarItem(Item *item)
	{
		AdicionarItemNoInventario(item);
		DeixarVazio(item);
	}
	AtivarItem(int x, Criatura *alvo)
	{
		if(this->Inventario[x].getconsumivel() == true)
		{
			Pause();
			if(this->Inventario[x].getquantidade() > 1)
			{
				this->Inventario[x].quantidadeM(-1);
				return 0;
			}
			if(this->Inventario[x].getquantidade() == 1)
			{
				this->DeixarVazio(&this->Inventario[x]);
			}
		}
	}  
	AtivarItem(Item *item)
	{
		this->HPM(item->gethp());
		this->XPM(item->getxp());
		this->MPM(item->getmp());
		this->energiaM(item->getenergia());
		if(item->getconsumivel() == true)
		{	
			item->setquantidade(item->getquantidade()-1);
			if(item->getquantidade() == 0)
			{
				item->DeixarVazio(item);
			}
		}
	}
	bool Compra(Item *item)
 	{
 		int i;
	 	if(this->getmoedas() < item->getpreco())
	 	{
	 		cout <<"\t Você não possui moedas suficientes.\n\n";
	 		return false;
		}
		if(this->InventarioDisponivel() < item->gettamanho())
	 	{
	 		cout <<"\t Você não possui espaço suficiente.\n\n";
			return false;
		}
		this->moedasM(-item->getpreco());
        this->AdicionarItemNoInventario(item);
		cout << "\t Você comprou: \""<<item->getnome()<<" X";Verde(item->getquantidade());cout <<".\n\n";
	}	
	AbrirInventarioCombate(Criatura * oponente)
	{
		int i,contador = 0,tela = 0;
		int numeros[9];
		cout <<"\n\n\n";
		while (true)
		{
			if (tela == 0)
			{
				system("cls");
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
				cout <<  "|                                                          ";Verde("Pagina ");Verde(tela + 1);cout<<"                                                    |";                              
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
				for (i = 0; i <= this->Inventario.size();i++)
				{
					if (Inventario[i].getbatalha() == true && contador <= 8)
					{
						cout << "\t\t"<< contador + 1<< "- " << this->Inventario[i].getnome();
						Verde("  X");cout<<this->Inventario[i].getquantidade();
						cout <<"\n\t\t  ";
						cout <<this->Inventario[i].getdescricao();
						cout <<"\n\n\n";
						numeros[contador]=i;
						contador++;
					}
				}
				cout <<"\t(r)\tFechar Inventário";
				if (contador < 9)
				{
					i = Tecla();
					if (i == 49)
					{
						AtivarItem(numeros[0],oponente);
						return 0;
					}
					else if (i == 50)
					{
						AtivarItem(numeros[1],oponente);
						return 0;
					}
					else if (i == 51)
					{
						//
					}
					else if (i == 52)
					{
						//
					}
					else if (i == 53)
					{
						//
					}
					else if (i == 54)
					{
						//
					}
					else if (i == 55)
					{
						//
					}
					else if (i == 56)
					{
						//
					}
					else if (i == 57)
					{
						//
					}
				}
				if (contador == 9 )
				{
					Verde("\n\n\n\n\n\n\t\t <-- Página anterior                                                      Proxima página -->\n");
					Pause();
					i = Tecla();
					if (i == 77)
					{
						tela++;
						if(tela > 2)
							tela = 0;
					}
					if (i == 75)
					{
						tela--;
						if(tela < 0)
							tela = 2;
					}	
				}
				
			}
			/*
			if (tela == 1)
			{
				cout << "Página 2\n\n";
				for (i = 0; i < 233;i++)
				{
					
					if (i<20)
						cout << "\t\t\t"<< i + 1<< "- " << this->Inventario[i].getnome() << "\n\n\n";
					if (i==20)
					{
						Verde("\n\n\n\n\n\n\t\t <-- Página anterior                                                        Proxima página -->\n");
						c = Tecla();
						if (c == 77)
						{
							tela++;
							if(tela > 2)
								tela = 0;
						}
						if (c == 75)
						{
							tela--;
							if(tela < 0)
								tela = 2;
						}	
					}
				}
			}
			if (tela == 2)
			{
				cout << "Página 3\n\n";
				for (i = 0; i < 233;i++)
				{
				
					if (i<30)
						cout << "\t\t\t"<< i + 1<< "- " << this->Inventario[i].getnome() << "\n\n\n";
					if (i+=30)
					{
						Verde("\n\n\n\n\n\n\t\t <-- Página anterior                                                        Proxima página -->\n");
						c = Tecla();
						if (c == 77)
						{
							tela++;
							if(tela > 2)
								tela = 0;
						}
						if (c == 75)
						{
							tela--;
							if(tela < 0)
								tela = 2;
						}	
					}
				}
			}
			*/
		}
	}
	AnalisarItem(Item*item)
	{
		int i;
		system("cls");
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                     ";Verde("Descrição de item");cout<<"                                               |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
		cout << "\n\n\t\tNome: " <<item->getnome();     
		cout << "\n\n\t\tTamanho  " <<item->gettamanho();
		cout << "\n\n\t\tRestaura " <<item->gethp();Verde(" de HP");
		cout << "\n\n\t\tRestaura " <<item->getmp();Azul(" de MP");
		cout << "\n\n\t\tConcede  " <<item->getxp();AmareloClaro(" de XP");
		cout << "\n\n\t\tCausa " <<item->getmp();Vermelho(" de dano ao inimigo");
		cout << "\n\n\t\tÉ consumível? : ";
		if (item->getconsumivel() == true)
			Vermelho("Sim");
		if (item->getconsumivel() == false)
			Verde("Não");
		cout << "\n\n\t\tPode ser usado em batalha? : ";
		if (item->getbatalha() == true)
			Vermelho("Sim");
		if (item->getbatalha() == false)
			Verde("Não");
		cout << "\n\n\t\t" <<item->getdescricao()<<endl<<endl;
		cout << "\n\n\t   (1) Sair        \n";
		cout << "\n\n\t   (2) Usar o item \n";

		switch(Tecla())
		{
			case 49:
			break;
			
			case 50:
				for(i=0;i<this->Inventario.size();i++)
				{
					if(this->Inventario[i].getnome() == item->getnome())
					this->AtivarItem(&Inventario[i]);
				}
			break;
		}
	}
	AbrirInventario()
	{
		int i,contador = 0,tela = 0,n=0;

		while (true)
		{
			system("cls");
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
			cout <<  "|                                                          ";Verde("Pagina ");Verde(tela + 1);cout<<"                                                    |";                              
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
			cout<<"\t\tSlots disponíveis: "<<InventarioDisponivel()<<endl<<endl;
			
			if (tela == 0)
			{
				n = 0;
				for (i = 0; i <= this->Inventario.size();i++)
				{
					if (i >= this->Inventario.size())
						break;
					cout << "\t("<< n +1 << ")\t"<< i + 1<< "- " << this->Inventario[i].getnome();
					if (this->Inventario[i].getnome() != "Vazio.")
					{ 
						Verde("  X"); cout<<this->Inventario[i].getquantidade();
					}
					cout <<"\n\t\t  ";
					cout <<this->Inventario[i].getdescricao();
					cout <<"\n\n";
					n++;
					if (i == 8)
					{
						break;
					}	
				}
			}
			if (tela == 1)
			{
				n = 0;
				for (i = 9; i <= this->Inventario.size();i++)
				{
					if (i >= this->Inventario.size())
						break;
					cout << "\t("<< n +1 << ")\t"<< i + 1<< "- " << this->Inventario[i].getnome();
					if (this->Inventario[i].getnome() != "Vazio.")
					{ 
						Verde("  X"); cout<<this->Inventario[i].getquantidade();
					}
					cout <<"\n\t\t  ";
					cout <<this->Inventario[i].getdescricao();
					cout <<"\n\n";
					n++;
					if (i == 17)
					{
						break;
					}	
				}
			}
			if (tela == 2)
			{
				n = 0;
				for (i = 18; i <= this->Inventario.size();i++)
				{
					if (i >= this->Inventario.size())
						break;
					cout << "\t("<< n +1 << ")\t"<< i + 1<< "- " << this->Inventario[i].getnome();
					if (this->Inventario[i].getnome() != "Vazio.")
					{ 
						Verde("  X"); cout<<this->Inventario[i].getquantidade();
					}
					cout <<"\n\t\t  ";
					cout <<this->Inventario[i].getdescricao();
					cout <<"\n\n";
					n++;
					if (i == 26)
					{
						break;
					}	
				}
			}
			cout <<"\t(r)\tFechar Inventário";
			AzulClaro("\n\n\n\n    <-- Página anterior                                                                           Proxima página -->\n");
			switch(tela)
			{
				case 0:
	        	switch(Tecla())
	        	{
					case 49:
						AnalisarItem(&this->Inventario[0]);
					break;
					
					case 50:
						AnalisarItem(&this->Inventario[1]);
					break;
					
					case 52:
						AnalisarItem(&this->Inventario[2]);
					break;
					
					case 53:
						AnalisarItem(&this->Inventario[3]);
					break;
					
					case 54:
						AnalisarItem(&this->Inventario[4]);
					break;
					
					case 55:
						AnalisarItem(&this->Inventario[5]);
					break;
					
					case 56:
						AnalisarItem(&this->Inventario[6]);
					break;
					
					case 57:
						AnalisarItem(&this->Inventario[7]);
					break;
					
					case 58:
						AnalisarItem(&this->Inventario[8]);
					break;

					
					case 75:
						tela--;
						if(tela < 0)
						tela = 2;
					break;
					
					case 77:
						tela++;	
						if(tela > 2)
							tela = 0;
					break;
					
					case Retornar:
						return 0;
						Pause();
					break;
					
					case Menu:
					this->MenuPrincipal();
				    break;
				}
				break;
				
				case 1:
				switch(Tecla())
				{
					case 49:
						AnalisarItem(&this->Inventario[9]);
					break;
					
					case 50:
						AnalisarItem(&this->Inventario[10]);
					break;
					
					case 52:
						AnalisarItem(&this->Inventario[11]);
					break;
					
					case 53:
						AnalisarItem(&this->Inventario[12]);
					break;
					
					case 54:
						AnalisarItem(&this->Inventario[13]);
					break;
					
					case 55:
						AnalisarItem(&this->Inventario[14]);
					break;
					
					case 56:
						AnalisarItem(&this->Inventario[15]);
					break;
					
					case 57:
						AnalisarItem(&this->Inventario[16]);
					break;
					
					case 58:
						AnalisarItem(&this->Inventario[17]);
					break;
					
					case 75:
						tela--;
						if(tela < 0)
						tela = 2;
					break;
					
					case 77:
						tela++;	
						if(tela > 2)
							tela = 0;
					break;
				}
				break;
			
				case 2:
				switch(Tecla())
				{
					case 49:
						AnalisarItem(&this->Inventario[18]);
					break;
					
					case 50:
						AnalisarItem(&this->Inventario[19]);
					break;
					
					case 52:
						AnalisarItem(&this->Inventario[20]);
					break;
					
					case 53:
						AnalisarItem(&this->Inventario[21]);
					break;
					
					case 54:
						AnalisarItem(&this->Inventario[22]);
					break;
					
					case 55:
						AnalisarItem(&this->Inventario[23]);
					break;
					
					case 56:
						AnalisarItem(&this->Inventario[24]);
					break;
					
					case 57:
						AnalisarItem(&this->Inventario[25]);
					break;
					
					case 58:
						AnalisarItem(&this->Inventario[26]);
					break;
					
					case 75:
						tela--;
						if(tela < 0)
						tela = 2;
					break;
					
					case 77:
						tela++;	
						if(tela > 2)
							tela = 0;
					break;	
				}
				break;
			}	
		}	
	}
	CoutAtributos()
	{
		int i;
		AmareloClaro("\t\t\t");AmareloClaro(this->Nivel);Verde(" (XP ");Verde(this->xp);Verde(")");
		if (this->xphistorico>0)
		{
			Verde("  (+");
			Verde(xphistorico);
			Verde(")");	
		}
		Verde("\n\t\t\tHP ");cout <<this->HP<<"/"<<this->HPm;
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
		Amarelo("\n\t\t\tEnergia ");cout<<this->energia<<"/"<<this->energiam;
		if (this->energiahistorico<0)
		{
			Vermelho("  (");
			Vermelho(energiahistorico);
			Vermelho(")");
		}
		if (this->energiahistorico>0)
		{
			Verde("  (+");
			Verde(energiahistorico);
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
		Cinza("\n\t\t\tArmadura ");cout<<this->armadura;
			if (this->armadurahistorico<0)
		{
			Vermelho("  (");
			Vermelho(armadurahistorico);
			Vermelho(")");
		}
		if (this->armadurahistorico>0)
		{
			Verde("  (+");
			Verde(armadurahistorico);
			Verde(")");	
		}
		cout << "\n";
		for (i =0;i<this->habilidades.size();i++)
		{
			AmareloClaro("\t\t\tHabilidade");AmareloClaro(i+1);cout<< " " << this->habilidades[i].getnome()<< endl;
		}
		
		for (i =0;i<this->habilidadespassivas.size();i++)
		{
				Azul("\t\t\tHabilidade Passiva");;cout<< " " <<this->habilidadespassivas[i].getnome()<< endl;
		}
		Rosa("\t\t\tEfeitos:\n");
		if(this->efeitos[0].getativo() == true)
		{
			VerdeApagado("\t\t\tEnvenenamento "); cout << this->efeitos[0].getcontador()<< " turnos";
		}
		if(this->efeitos[1].getativo() == true)
		{
			AmareloClaro("\n\t\t\tCombustão ");cout << this->efeitos[1].getcontador()<< " turnos";
		}
		if(this->efeitos[2].getativo() == true)
		{
			Vermelho("\n\t\t\tSangramento ");cout << this->efeitos[2].getcontador()<< " turnos";
		}
		if(this->efeitos[4].getativo() == true)
		{
			Verde("\n\t\t\tAumento de Ataque ");cout << this->efeitos[4].getcontador()<< " turnos";
		}
		if(this->efeitos[3].getativo() == true)
		{
			Cinza("\n\t\t\tAumento de Armadura ");cout << this->efeitos[3].getcontador()<< " turnos";
		}
			this->Limparm();
	}
	Atacar(Criatura *marine)
	{
		system("CLS");
		marine->HPM(-this->atk);
		energiaM(-25);
		ReceberEfeitos();
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\tHIT!";
		Sleep(500);
	}
	AtivarHabilidade(int numero, Criatura* alvo)
	{
		
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\t\t\t";
		if (numero == 0)
		{
			ImprimirComDelay("Você canaliza pequenos poderes de cura de seu corpo");
			PontosBrancos();
			this->HPM(+40);
			this->PagarCusto(Habilidades[0]);
		}
		if (numero == 1)
		{
			ImprimirComDelay("Você ergue seu escudo se preparando para o confronto");
			PontosBrancos();
			this->HPM(+10);
			this->AdicionarEfeito(3,2);
			this->PagarCusto(Habilidades[numero]);
		}
		if (numero == 2)
		{
			ImprimirComDelay("Você desfere um golpe certeiro no peito o oponente, fazendo-o sangrar");
			PontosBrancos();
			this->HPM(+10);
			alvo->HPM(-this->getatk() - 10);
			alvo->AdicionarEfeito(Sangramento,3);
			alvo->armaduraM(-1);
			this->PagarCusto(Habilidades[numero]);
		}
		if (numero == 3)
		{
			ImprimirComDelay("Você Entra em estado de fúria, se concentrando na batalha");
			PontosBrancos();
			this->HPm += -10;
			this->atkM(12);
			this->armaduraM(+3);
			this->AdicionarEfeito(4,3);
			this->PagarCusto(Habilidades[numero]);

		}
	}
	AdicionarHabilidade(Habilidade H)
	{
		int l;
		for(l=0;l<this->Habilidades.size();l++)
		{
			if(this->Habilidades[l].getnome() == "Habilidade bloqueada")
			{
				this->Habilidades[l].setdisponivel(H.getdisponivel());
				this->Habilidades[l].setcustoMP(H.getcustoMP());
				this->Habilidades[l].setcustoHP(H.getcustoHP());
				this->Habilidades[l].setcustoenergia(H.getcustoenergia());
				this->Habilidades[l].setdano(H.getdano());
				this->Habilidades[l].setusar1(H.getusar1());
				this->Habilidades[l].setusar2(H.getusar2());
				this->Habilidades[l].setnome(H.getnome());
				return 0;
			}
		}
	}
	bool ExibirHabilidades(Criatura*inimigo)
	{
		int i,t;
		bool v;
		system("CLS");
		
		cout <<"+----------------------------------------------------------------------------------------------------------------------+\n"
		       "|                                                          Habilidades:                                                |\n";
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
		Verde("\t\tHabilidades disponíveis:\n\n\n");
		for (i=0;i < this->Habilidades.size() - 1;i++)
		{
			if(this->Habilidades[i].getdisponivel() == true)
			{
				cout << "\t\t"; AzulClaro(i + 1);cout << " " <<this->Habilidades[i].getnome() <<endl <<endl <<endl;		
			}
		}
		
		Vermelho("\n\t\tHabilidades bloquedas:\n\n\n");
		for (i=0;i < this->Habilidades.size() - 1;i++)
		{
			if(this->Habilidades[i].getdisponivel() == false)
			{
				cout << "\t\t"; AzulClaro(i + 1);cout<< " " <<this->Habilidades[i].getnome() <<endl <<endl <<endl;
			}
		}
		cout << "\t\tr para fechar"<<endl;
		t = Tecla();
		if(t == 49)
		{
			v = Verifica(this->Habilidades[0]);
			if (v == true)
			{
				this->AtivarHabilidade(0,inimigo);
			}
		}
		if(t == 50)
		{	
			v = Verifica(this->Habilidades[1]);
			if (v == false)
			{
				cout << "Você não possui recursos suficientes\n";
				return false;
			}
			this->AtivarHabilidade(1,inimigo);
			return true;
		}
		if(t == 51)
		{
		v = Verifica(this->Habilidades[2]);
			if (v == false)
			{
				cout << "Você não possui recursos suficientes\n";
				return false;
			}
			this->AtivarHabilidade(2,inimigo);
			return true;
		}
		if(t == 52)
		{
		v = Verifica(this->Habilidades[3]);
			if (v == false)
			{
				cout << "Você não possui recursos suficientes\n";
				return false;
			}
			this->AtivarHabilidade(3,inimigo);
			return true;
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
		if(t == Retornar)
		{
		}
	return false;
	}
	ReceberRecompensaDoInimigo(Criatura *inimigo)
	{
		this->XPM(inimigo->getDAXP());
		this->Reputacao += inimigo->getDAREP();
		this->AdicionarItemNoInventario(&inimigo->loot[1]);
	}
	luta(Criatura *inimigo)
	{
		int b;
		bool h;
		for (b=0;b<1000;b++)
		{
			if (inimigo->getHP() < 0 || this->HP < 0)
			{
				break;
			}
			system("CLS");
			int i = kbhit();
			cout <<"+----------------------------------------------------------------------------------------------------------------------+\n"
			"|\t\t\t\t           Você está enfrentando ";Vermelho(inimigo->getnome()); cout << " "; Verde(inimigo->getNivel());                               
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\t";
			cout <<"\n\n\t\t\t\tAtributos de ";AzulClaro(this->getnome());cout << "\n\n\n";
			this->CoutAtributos();
			cout <<"\n\n\t\t\t\tAtributos de ";Vermelho(inimigo->getnome());cout << "\n\n\n";
			inimigo->CoutAtributos();
			cout <<"\n\n+----------------------------------------------------------------------------------------------------------------------+\n"
			"|          1-Atacar        2-Mochila        3-Passar        4-Habilidades        5-Desistir        6-Detalhar          |\n"
			"+----------------------------------------------------------------------------------------------------------------------+\n";
			this->Limparm();
			i = Tecla();
			
			if (i == 49)
			{
				if(this->energia < 25)
				{
					cout <<"\t\tVocê não possui energia o suficiente";
				}
					if(this->energia >= 25)
				{
					Atacar(inimigo);
					inimigo->Atacar(this);
				}
			}
			if (i == 50)
				{
					system("CLS");
					this->AbrirInventarioCombate(inimigo);	
				}
			if (i == 51)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê passou seu turno";
				this->PassarTurno();
				inimigo->Atacar(this);
				}
			if (i == 52)
			{
				h = this->ExibirHabilidades(inimigo);
				if (h == true)
					inimigo->Atacar(this);
			}
			if (i == 53)
				{
				system("CLS");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê desistiu da batalha.";
				this->HP = 0;
				Sleep(1000);
				inimigo->Atacar(this);
				}
			if (i == 54)
				cout << "Apertou 6\n";
				
			if(i != 49 && i !=50 && i !=51 && i != 52 && i !=53 && i !=54)
			{
				cout<< "\nInválido\n";
			}
			Sleep(700);
		
		}
		if (this->HP <= 0 && inimigo->getHP() <=0)
		{
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVocê se sacrificou heroicamente derrotando " << inimigo->getnome();
		cout << "\n\t\t\t\t\t\tSeu sacrifício nunca será esquecido.";
		cout << "\t\t\t\t\tObrigado por jogar!";
		Sleep(2500);
		exit(0);
		}
		else if(this->HP <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê foi assasinado por " << inimigo->getnome();
		cout << "\t\t\t\t\tObrigado por jogar!";
		Sleep(2500);
		exit(0);

		}
		else if(inimigo->getHP() <= 0)
		{	
		system("CLS");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVocê derrotou " << inimigo->getnome();
		ReceberRecompensaDoInimigo(inimigo);
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
			return atributo + atributo*0.12;	
		}
		if(dif == 3)
		{
			return atributo + atributo*0.32;
		}
		if(dif == 4)
		{
			return atributo + atributo*0.51;
		}
	}
	Reset()
	{
		this->PrimeiraVezEmKyronma = true;
		this->PrimeiraVezNoMercadorDeAlimentos= true;
		this->PrimeiraVezNoCentro= true;
		this->PrimeiraVezNataverna= true;
		this->PrimeiraVezNoCurandeiro= true;
		this->PrimeiraVezNoPortao= true;
		this->PrimeiraVezEmCasa= true;
		this->PrimeiraVezNoBalcao= true;
		this->PrimeiraVezNoInstrutor = true;
		this->PrimeiraVezNosCamposPraianos = true;
		this->PrimeiraVezNaPraia = true;
		this->PrimeiraVezNaPraiaSecreta = true;
		this->PrimeiraVezNoHomemEstranho= true;
	}
	void tutoriais()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                        ";Verde("Tutoriais");cout<<"                                                     |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}	
		void ExplicacaoGeral()
	{
		system ("cls");
		tutoriais();
		ImprimirComDelay("\tEste é um jogo desenvolvido inteiramente em C++, por mim.\n\n");
	
		ImprimirComDelay("\tMeu nome é Caiubi Aguiar, e eu sou um estudante de ADS do IFSP, atualmente no 3º semestre.\n\n");
	
		ImprimirComDelay("\tCriar um jogo foi uma ideia que me chamou a atenção assim que descobri minha primeira\n");
		ImprimirComDelay("\tlinguagem de programação: C.\n\n");
	
		ImprimirComDelay("\tNo meu primeiro semestre de faculdade, surgiu uma oportunidade, \n");
		ImprimirComDelay("\te então comecei bem humildemente fazendo esse jogo.\n\n");
	
		ImprimirComDelay("\tO jogo era feito apenas de menus com números, e se passava na cidade de Greenwitch, \n");
		ImprimirComDelay("\tcomecei a usar a função KBHIT, e fazer menus mais elaborados com setas, porém era trabalhoso,\n");
		ImprimirComDelay("\te não eficiente, chegando a ter que produzir 5 variações da mesma opção,.\n");
		ImprimirComDelay("\t(o jogo continha no mínimo 28 opções) \n\n");
	
		ImprimirComDelay("\tGastei horas aprendendo a manipular cores pelo terminal, e fiz artes em ASCII usando cores,\n");
		ImprimirComDelay("\tcomo a logo do jogo, \n");
		ImprimirComDelay("\t(2 dragões se entrelaçando em um letreiro escrito o antigo nome do jogo: \"Dragon Heart\"),\n");
		ImprimirComDelay("\tPor sinal foi bem trabalhoso colorir pixel por pixel diretamente no terminal.\n\n");
	
		ImprimirComDelay("\tAinda não havia sistema de combate, e havia um pequeno sistema precário de itens.\n\n");
	
		ImprimirComDelay("\tNo segundo semestre da faculdade aprendi orientação programada a objetos,\n");
		ImprimirComDelay("\te então criei um sistema de combate.\n");
		ImprimirComDelay("\tMuito tempo depois, aprimorei o sistema de combate e resolvi com muito ânimo e disposição\n");
		ImprimirComDelay("\tunificar meu antigo jogo e esse novo sistema de combate.\n");
		ImprimirComDelay("\tO trabalho seria enorme, eu deveria transformar +- 3.800 linhas de código \n");
		ImprimirComDelay("\tEm orientação programada a objetos, além de limpar o código \n");
		ImprimirComDelay("\t(foi um choque bem grande trabalhar com um código do início da miha carreira,\n");
		ImprimirComDelay("\tpor ser muito diferente com o meu conhecimento atual)\n");
		ImprimirComDelay("\tdepois de relutar um pouco, eu comecei esse trabalho.\n");
	
		cout << "\n\t(ENTER) "; Verde("Contininuar ");cout<<"            \n";
		cout << "\n\n\t(r) "; Vermelho("Retornar");cout<<"                  \n";
		while(1)
		{
			switch(TeclaA())
			{
				case 13:
					system("CLS");
					tutoriais();
					ImprimirComDelay("\tNo fim de 2022, desenvolvi a história e mitologia do jogo, \n");
					ImprimirComDelay("\té uma lore incrível e rica em detalhes, ela está escrita em outro lugar,\n");
					ImprimirComDelay("\te eu ainda não incorporei grande parte ao jogo.\n");
					ImprimirComDelay("\tPossui raças, continentes, um mapa-mundi, histórias do mundo, histórias de itens, \n");
					ImprimirComDelay("\tpersonagens marcantes, régua histórica e etc,\n");
					ImprimirComDelay("\tusei tempo especialmente contando a história sobre um mago negro chamado Ksar’Uk,\n");
					ImprimirComDelay("\tque foi responsável por muitas coisas dentro do jogo,\n");
					ImprimirComDelay("\tEscrevi 3 capítulos de um livro contando a história dele, e agora, terei que terminar.\n\n");
				
					ImprimirComDelay("\tDesenvolvi poucas linhas de código durante as férias de 2022,\n");
					ImprimirComDelay("\tporém no começo de 2023 voltei a desenvolver algumas coisas e aqui estamos.\n\n");
				
					ImprimirComDelay("\tEssa é uma versão em C++ sem bibliotecas, e em \"2D\", é possível no futuro desenvolver \n");
					ImprimirComDelay("\tum RPG ou MMORPG em terceira pessoa bem completo,\n");
					ImprimirComDelay("\tmas por enquanto esse projeto é bom para estudo e me ajuda a estruturar o jogo para o futuro, \n");
					ImprimirComDelay("\talém de servir como portfólio, trabalho para a faculdade, e possivelmente um TCC.\n\n");
				
					ImprimirComDelay("\tAs versões mais antigas desse jogo estão comigo, porém as mais recentes eu venho tentado colocar no GitHub.\n\n");
				
					ImprimirComDelay("\tÉ bom estar progredindo na criação desse jogo, e caso você esteja testando, \n");
					ImprimirComDelay("\tPor favor entre em contato para sugestões e melhorias:\n\n");
				
					ImprimirComDelay("\tO próximo passo será a incorporação de Banco de Dados.\n\n");
					
					ImprimirComDelay("\tContato:\n\n");
				
					ImprimirComDelay("\tTelefone: 12 98162-3073\n");
					ImprimirComDelay("\tEmail caiubiaguair@gmail.com\n\n");
					Pause();
					return;
					break;
				
			case Retornar:
				return;
			break;
			}
		}

		system("cls");
	}
	void ExplicacaoItens()
	{
			system ("cls");
			tutoriais();
			VerdeCDNoFim("\n\tSeja bem Vindo as Instruções de Itens.\n\n\n");
			ImprimirComDelay("\tOs itens em "); VermelhoCD("(Título)");ImprimirComDelay(" são divididos em 6 raridades:\n\n");
			ImprimirComDelay("\tComuns ");cout<<"         -";   Branco( " Branco\n");
			VerdeCD("\tIncomuns ");cout<<"       -";   Verde(" Verde\n");
			AzulCD("\tRaros ");cout<<"          -";   Azul(" Azul\n");
			RosaCD("\tMágicos ");cout<<"        -";   Rosa(" Rosa\n");
			AmareloCD("\tLendários ");cout<<"      -";   Amarelo(" Amarelo\n");
			VermelhoCD("\tItens do Dragão ");cout<<"-";   Vermelho(" Vermelho\n\n\n");
			Sleep(2000);
			ImprimirComDelay("\tCada raridade se diferencia entre atributos e chance de ser encontrada. \n");
			ImprimirComDelay("\tItens podem ser consumiveis ou não, e possuir características especiais,\n");
			ImprimirComDelay("\tCada característica póderá ser vista na análise do inventário,\n\n\n\n");
			/*
			ImprimirComDelay("\t\tOs itens de proteção em "); VermelhoCD("(Título)");ImprimirComDelay("se dividem em:\n\n");
			cout << "- \t\tCapacetes\n";
			cout << "- \t\tPeitorais\n";
			cout << "- \t\tOmbreiras\n";
			cout << "- \t\tJuntas\n";
			cout << "- \t\tBracadeira\n";
			cout << "- \t\tLuvas\n";
			cout << "- \t\tCalça\n";
			cout << "- \t\tBotas\n";
			*/
			VermelhoCD("\t(Este menu, funcionalidades e adições ainda estão em desenviolvimento.\n\n\n");
			VoltarAoMenu();
	}
	void ExplicacaoCombate()
	{
		system ("cls");
		tutoriais();
		ImprimirComDelay("\tSeja bem Vindo as Instruções de "); Azul("Combate");ImprimirComDelayNoFim("\n\n");
		ImprimirComDelay("\tO Combate em "); VermelhoCD("(Título)");ImprimirComDelayNoFim(" funciona em Turnos.\n");
		ImprimirComDelay("\tO jogador realiza sua ação, e em seguida será o turno do "); Vermelho("oponente");ImprimirComDelayNoFim(",\n");
		ImprimirComDelay("\to qual realizará seu ataque contra o "); Verde("jogador");ImprimirComDelayNoFim(".\n");
		ImprimirComDelay("\tInimigos possuem atributos, "); Amarelo("habilidades");ImprimirComDelay(", e chance de ativá-las, diferentes entre si,\n");
		ImprimirComDelayNoFim("\tA descrição da habilidade pode ser feita em combate.\n");
	}	
	void ComoJogar()
	{
		while(1)
		{
			
			tutoriais();
			cout << "\n\n\t(1) "; Vermelho("Combate");cout<< "\n";
			cout << "\n\n\t(2) "; Verde("Mundo");cout<<"\n";
			cout << "\n\n\t(3) "; Amarelo("Itens");cout<< "\n";
			cout << "\n\n\t(r) "; Cinza("Retornar");cout<< "\n";
			switch(Tecla())
			{
				case 49:
					while(1)
					{
						tutoriais();
						cout << "\n\n\t(1) Turnos              \n";
						cout << "\n\n\t(2) Atributos           \n";
						cout << "\n\n\t(3) Efeitos             \n";
						cout << "\n\n\t(4) Opções em combate   \n";
						cout << "\n\n\t(r) "; Cinza(" Retornar ao jogo");cout<< "   \n";
						switch(Tecla())
						{
							case 49:
							tutoriais();
							ImprimirComDelay("\tO Combate em "); VermelhoCD("Secrecy");ImprimirComDelayNoFim(" funciona em Turnos.\n");
							ImprimirComDelay("\tO jogador realiza sua ação, e em seguida será o turno do "); Vermelho("oponente");ImprimirComDelayNoFim(",\n");
							ImprimirComDelay("\to qual realizará seu ataque contra o "); Verde("jogador");ImprimirComDelayNoFim(".\n");
							EnterParaRetornar();
							break;
							
							case 50:
								tutoriais();
								VerdeCD("\tAtributos:\n\n");
								VerdeCD("\t\tHP (Health Points)"); cout <<" é a quantidade de vida do seu personagem,\n\t\t\tcaso chegue a 0 você será derrotado.";
								AzulCD("\n\n\t\tMP (Mana Points)");cout <<" é a mana do seu personagem, utilizada para magias e habilidades";
								AmareloCD("\n\n\t\tEnergia ");cout <<" Energia, fundamentar para atacar e usar habilidades";
								VermelhoCD("\n\n\t\tAtaque ");cout <<" Seu ataque, valor usado para atacar seu oponente";
								CinzaCD("\n\n\t\tArmadura ");cout <<" Sua armadura, Usada na defesa e redução de dano";
								AmareloClaroCD("\n\n\t\tHabilidade"); cout <<" São as habilidades do seu oponente";
								RosaCD("\n\n\t\tEfeitos:");cout <<"Os efeitos aplicados ao personagem estão logo abaixo desse marcador.\n\n\n\n";
								VerdeCD("\t\tFim das Instruções\n");
								EnterParaRetornar();
							break;
							
							case 51:
								tutoriais();
								AzulCD("\tEfeitos:\n\n");
								AmareloClaroCD("\tCombustão:\n");
								Branco("\t\tA criatura está pegando fogo, recebendo 7 de dano por turno, não sujeito a reduções por armadura.\n\n");
								VerdeApagadoCD("\tEnvenenamento:\n");
								Branco("\t\tA criatura está  envenenada, recebendo 5 de dano por turno, não sujeito a reduções por armadura.\n\n");
								VermelhoCD("\tSangramento:\n");
								Branco("\t\tA criatura está sangrando, recebendo 6 de dano por turno, não sujeito a reduções por armadura.\n\n");
								CinzaCD("\tAumento de Armadura:\n");
								Branco("\t\tA criatura está com a armadura aumentada, com o valor sendo variado por cada habilidade.\n\n");
								VerdeCD("\tAumento de Ataque:\n");
								Branco("\t\tA criatura está com a ataque aumentada, com o valor sendo variado por cada habildiade.\n\n");
								EnterParaRetornar();
							break;
							
							case 52:
								tutoriais();
								VerdeCD("\n\tDescrição das opções em combate:\n\n\n");
								VermelhoCD("\tAtacar:\n");
								cout <<"\t\tAo atacar o Jogador golpeia o inimigo com sua arma, e em seguida será o turno do oponetne\n";
								VerdeCD("\n\tMochila:\n");
								cout <<"\t\tO jogador abre sua mochila, e caso escolha, utiliza sua ação para utilizar algum item consumível\n";
								cout <<"\t\tO efeito dos itens consumíveis é variado e é descrito no inventário.\n";
								AzulCD("\n\tPassar:\n");
								cout <<"\t\tO Jogador gasta seu turno, e recupera alguns atributos, como mana e energia\n";
								AmareloCD("\n\tHabilidades:\n");
								cout <<"\t\tO Jogador exibe sua lista de habilidades, caso escolha usar alguma, e possa pagar seu custo,\n";
								VermelhoCD("\n\tDesistir\n");
								cout <<"\t\tO Jogador desiste da luta e tem seus pontos de vidas reduzidos a 0.\n";
								AzulCD("\n\tDetalhar\n");
								cout <<"\t\tExibe informações sobre seu inimigo e suas habilidades\n";
								EnterParaRetornar();
							break;
							case Retornar:
								return;
							break;
						}
					}
				break;
				case 50:
					while(1)
					{
						tutoriais();
						cout << "\n\n\t(1) Turnos              \n";
						cout << "\n\n\t(2) Atributos           \n";
						cout << "\n\n\t(3) Efeitos             \n";
						cout << "\n\n\t(4) Opções em combate   \n";
						cout << "\n\n\t(r) "; Cinza(" Retornar ao jogo");cout<< "   \n";
						switch(Tecla())
						{
						}
					
					
					
					
					
					
					
					}
				break;
					case 52:
					while(1)
					{
					
					
					
					
					
					
					
					
					}
				break;
				case Retornar:
					return;
				break;
			}
		}
	}
	
	void MenuPrincipal()
	{
		while(1)
		{
			system("cls");
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
			cout <<  "|                                                      ";Verde("MENU PRINCIPAL");cout<<"                                                  |";                              
			cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
			cout << "\n\n\t(1) "; Verde("Como Jogar");cout<< "          \n";
		 	cout << "\n\n\t(2) "; Azul("Reiniciar Animações");cout<< " \n";
	        cout << "\n\n\t(r) "; Cinza("Retornar ao jogo");cout<< "    \n";
	        switch(Tecla())
	        {
	            case 49:
	        	   ComoJogar();
				break;
				
				case 50:
					this->Reset();
				break;
				
				case Retornar:
					return;
				break;
			}	
		}
	}
	Jogador()
	{
		int l;
		this->nome = "Jogador";//krammus
		this->Nivel = "Nível 1";
		this->HP = 130;
		this->MP = 150;
		this->atk = 20;
		this->armadura = 0;
		this->energia = 200;
		this->moedas = 500;
		this->chancedeesquiva = 10;
		this->energiam = this->energia;
		this->HPm = this->HP;
		this->MPm = this->MP;
		this->HPhistorico = 0;
		this->MPhistorico = 0;
		this->energiahistorico = 0;
		this->atkhistorico = 0;
		this->armadurahistorico = 0;
		for(l=0;l<50;l++)
		{
			this->Inventario.push_back(itemvazio);
		}
		for(l=0;l<=4;l++)
		{
			this->Habilidades.push_back(HabilidadeBloqueada);
		}
	
		
		this->HabilidadeAux.setdano(-40);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoMP(40);
		this->HabilidadeAux.setcustoenergia(15);
		this->HabilidadeAux.setnome("Cura básica");
		this->HabilidadeAux.setusar1("Você canalisa poderes curativos de suas mãos");
		this->HabilidadeAux.setinfo("Cura a si mesmo em alguns pontos de vida");
		this->HabilidadeAux.setdisponivel(true);
		this->AdicionarHabilidade(HabilidadeAux);
		
		this->HabilidadeAux.setdano(0);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoMP(35);
		this->HabilidadeAux.setcustoenergia(60);
		this->HabilidadeAux.setnome("Erguer Escudo");
		this->HabilidadeAux.setinfo("Ergue seu escudo, aumentando sua armadura");
		this->HabilidadeAux.setdisponivel(false);
		this->AdicionarHabilidade(HabilidadeAux);
		
		this->HabilidadeAux.setdano(-this->getatk());
		this->HabilidadeAux.setcustoMP(40);
		this->HabilidadeAux.setcustoHP(0);
		this->HabilidadeAux.setcustoenergia(60);
		this->HabilidadeAux.setnome("Golpe Certeiro");
		this->HabilidadeAux.setinfo("Desfere um certeiro golpe, reduzindo a armadura do alvo e fazendo-o sangrar.");
		this->HabilidadeAux.setdisponivel(false);
		this->AdicionarHabilidade(HabilidadeAux);
		
		this->HabilidadeAux.setdano(0);
		this->HabilidadeAux.setcustoMP(10);
		this->HabilidadeAux.setcustoHP(35);
		this->HabilidadeAux.setcustoenergia(50);
		this->HabilidadeAux.setnome("Fúria de Batalha");
		this->HabilidadeAux.setinfo("Desfere um forte golpe, reduzindo a armadura do alvo e fazendo-o sangrar.");
		this->HabilidadeAux.setdisponivel(false);
		this->AdicionarHabilidade(HabilidadeAux);

		this->Casas.push_back(Casa(0));
		
// RESET ANIMAÇÔES		
		this->PrimeiraVezEmKyronma = true;
		this->PrimeiraVezNoMercadorDeAlimentos= true;
		this->PrimeiraVezNoCentro= true;
		this->PrimeiraVezNataverna= true;
		this->PrimeiraVezNoCurandeiro= true;
		this->PrimeiraVezNoPortao= true;
		this->PrimeiraVezEmCasa= true;
		this->PrimeiraVezNoBalcao= true;
		this->PrimeiraVezNoInstrutor = true;
		this->PrimeiraVezNosCamposPraianos = true;
		this->PrimeiraVezNaPraia = true;
		this->PrimeiraVezNaPraiaSecreta = true;
		this->PrimeiraVezNoHomemEstranho= true;
		
	}
};
class BancoDeItens
{
	public:
	Item itens[7];
	
	BancoDeItens()
	{
/*
		this->itens[0].setnome("XB112013");
		this->itens[0].setcodigo(0000);
		this->itens[0].settamanho(-1);
		this->itens[0].setxp(1000);
		this->itens[0].sethp(1000);
		this->itens[0].setdescricao("3RRO N0 J0G00 957C867A6B983C97E9T98YH\n3ST3 IT3M D3V3 S3R D3S7RUID0.");
		
		this->itens[1].setnome("Naco de pão duro");
		this->itens[1].setcodigo(0001);
		this->itens[1].settamanho(-1);
		this->itens[1].setxp(0);
		this->itens[1].sethp(3);
		this->itens[1].setdescricao("Pedaços simples de um pão velho.");
		
		this->itens[2].setnome("Água da Fonte");
		this->itens[2].setcodigo(0002);
		this->itens[2].settamanho(-1);
		this->itens[2].setxp(1);
		this->itens[2].sethp(2);
		this->itens[2].setdescricao("Água advinda de alguma fonte do reino.");
		
		this->itens[3].setnome("Pedaço de Carne-seca");
		this->itens[3].setcodigo(0003);
		this->itens[3].settamanho(-1);
		this->itens[3].setxp(0);
		this->itens[3].sethp(6);
		this->itens[3].setdescricao("Pedaços de uma carne barata, e que um dia ja foram melhores.");
		
		this->itens[4].setnome("Peixe-seco");
		this->itens[4].setcodigo(0004);
		this->itens[4].settamanho(-1);
		this->itens[4].setxp(0);
		this->itens[4].sethp(13);
		this->itens[4].setdescricao (" Peixes secos vindo de  alguma cidade portuária precária");
		
		this->itens[5].setnome("Carne Salgada");
		this->itens[5].setcodigo(0005);
		this->itens[5].settamanho(-1);
		this->itens[5].setxp(0);
		this->itens[5].sethp(10);
		this->itens[5].setdescricao("Um bife de carne que foi salgado ao invés de descartado.");
		
		this->itens[6].setnome("Vinho caseiro simples");
		this->itens[6].setcodigo(0006);
		this->itens[6].settamanho(-1);
		this->itens[6].setxp(5);
		this->itens[6].sethp(10);
		this->itens[6].setdescricao("Vinho feito de forma caseira, com baixo tempo e fermentação e origem duvidosa.");
*/
	}
};
class MeuJogo
{	
public:
						
	void Tutorial(Jogador *x)
	{
		system("cls");

		
	}

	
//Cabeçalhos
	void taverna()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                            ";Verde("Taverna");cout<<"                                                   |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void casa()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                             ";Verde("Casa");cout<<"                                                     |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void centro()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                         ";Verde("Centro");cout<<"                                                       |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void campospraianos()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                      ";Verde("Campos Praianos");cout<<"                                               |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void portao()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                           ";Verde("Portão");cout<<"                                                   |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void instrutor()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                         ";Verde("Instrutor");cout<<"                                                    |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void comerciante()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                        ";Verde("Comerciante");cout<<"                                                   |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void artesao()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                       ";Verde("Artesão");cout<<"                                                   |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void curandeiro()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                      ";Verde("Curandeiro");cout<<"                                                  |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void praia()
	{
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
		cout <<  "|                                                         ";Verde("Praia");cout<<"                                                   |";                              
		cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
	}
	void ProcurarInimigoNosCamposPraianos(Jogador*jogador,MarineLutador Lutadores[], MarineCacador Cacadores[],MarineMago Magos[],Monstro Monstros[])
	{
        int q;
        system("CLS");
        q = NumeroAleatorio(100);
        if(q < 20)
        {
        	jogador->Encontro(Monstros[1]);
		}
		if(q >= 20 && q < 30)
        {
        	jogador->Encontro(Monstros[2]);
		}
		if(q >= 30 && q < 42)
        {
        	jogador->Encontro(Monstros[3]);
		}
		if(q >= 42 && q < 52)
        {
        	jogador->Encontro(Monstros[4]);
		}
		if(q >= 52 && q < 60)
        {
        	jogador->Encontro(Monstros[5]);
		}
		if(q >= 60 && q < 72)
        {
        	jogador->Encontro(Monstros[6]);
		}
		if(q >= 72 && q < 84)
        {
        	jogador->Encontro(Lutadores[0]);
		}
		if(q >= 84 && q < 92)
        {
        	jogador->Encontro(Cacadores[0]);
		}
		if(q >= 92 && q < 100)
        {
        	jogador->Encontro(Magos[0]);
		}
		
	}
    void ProcurarLugaresNosCamposPraianos(Jogador*jogador,MarineLutador Lutadores[], MarineCacador Cacadores[],MarineMago Magos[],Monstro Monstros[])
    {
    	
    	
    	int q;
        system("CLS");
        q = NumeroAleatorio(100);
      	if(q < 20)
        {
        	jogador->Encontro(Monstros[1]);
		}
		if(q >= 20 && q < 30)
        {
        	jogador->Encontro(Monstros[2]);
		}
		if(q >= 30 && q < 42)
        {
        	jogador->Encontro(Monstros[3]);
		}
		if(q >= 42 && q < 52)
        {
        	jogador->Encontro(Monstros[4]);
		}
		if(q >= 52 && q < 60)
        {
        	jogador->Encontro(Monstros[5]);
		}
		if(q >= 60 && q < 72)
        {
        	jogador->Encontro(Monstros[6]);
		}
		if(q >= 72 && q < 84)
        {
        	jogador->Encontro(Lutadores[0]);
		}
		if(q >= 92 && q < 100)
        {
		}
    	if( q >=84&&q<=100)
    	{
    		system("CLS");
    		campospraianos();
    		ImprimirComDelay("\tEnquanto buscava, por de trás de moitas, você encontrou uma praia anormalmente tranquila\n");
    		ImprimirComDelay("\tO que irá fazer ");ImprimirComDelay(jogador->getnome());ImprimirComDelayNoFim("?\n");
            cout << "\n\n\t(1) Entrar na Praia          \n";
            cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " aos";Verde(" Campos Praianos");cout<<"   \n";
            switch(Tecla())
            {
                case 49:
            	PraiaSecreta(jogador);    
				break;
				
				case Retornar:
					return;
				break;
				
				case Menu:
					jogador->MenuPrincipal();
				break;
					
			}
		}
	}
    void PraiaSecreta(Jogador*jogador)
    {
    	system ("CLS");
    	praia();
    	if(jogador->PrimeiraVezNaPraiaSecreta == true)
        {
            ImprimirComDelay("\tVocê está em uma ");RosaCD("Praia Secreta");ImprimirComDelayNoFim(".\n");
            ImprimirComDelay("\tÉ possível ouvir apenas as ondas do mar, trazendo sensações relaxantes e serenas.\n"); 
            ImprimirComDelay("\tHá uma mulher em meio a praia, com sua pele morena brilhando sob o céu,\n"); 
			ImprimirComDelay("\te trajando um longo vestido branco.\n"); 
			ImprimirComDelay("\tO que irá fazer ");ImprimirComDelay(jogador->getnome());ImprimirComDelayNoFim("?\n");
            cout << "\n\n\t(1) Falar com a mulher       \n";
            cout << "\n\n\t(2) Mergulhar no mar         \n";
            cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " aos";Verde("Campos Praianos");cout<<"   \n";
            cout << "\n\n\t(i) Abrir inventário \n";
            jogador->PrimeiraVezNaPraia == false;
        }
    	else if(jogador->PrimeiraVezNaPraia == false)
        {
        
            cout <<"\tVocê se localiza nos ";Verde("Campos Praianos");cout<<".\n";
            cout <<"\tCampos quentes e abertos, repletos de areia e plantas.\n";
            cout <<"\tCuidado com cobras de areia, Marines e outros inimigos."; 
            cout <<"\tO que irá fazer "; cout << jogador->getnome() << "?\n";
            cout << "\n\n\t(1) Procurar um Inimigo            \n";
            cout << "\n\n\t(2) Procurar mais localidades      \n";
            cout << "\n\n\t(3) Andar até a praia mais próxima \n";
            cout << "\n\n\t(4) Andar até o Covil Marine       \n";
            cout << "\n\n\t(r) Tentar "; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"   \n";
            cout << "\n\n\t(i) Abrir inventário \n";
        }
        switch(Tecla())
        {
        	
                case 49:
            		while(1)
					{
						praia();
            			ImprimirComDelay("\tA mulher lhe olha com uma feição doçe e tênue, enquanto fala, ó ceu se curva perante a sua beleza");
			            ImprimirComDelay("\tCom um sorriso ela lhe pergunta:\n"); 
			            ImprimirComDelay("\tO que posso fazer por você viajante?,\n"); 
						cout << "\n\n\t(1) - Quem é você?            \n";
						switch(Tecla())
						{
			                case 49:
			                ImprimirComDelay("\tAh, Perdoe");
				            ImprimirComDelay("\tCom um sorriso ela lhe pergunta:\n"); 
				            ImprimirComDelay("\tO que posso fazer por você viajante?,\n"); 
			            	cout << "\n\n\t(2) Curar Feridas        \n";
				            cout << "\n\n\t(3) Poção magica         \n";
				            cout << "\n\n\t(4) Poção energética     \n";
				            cout << "\n\n\t(3) Receber o itema      \n";
				            cout << "\n\n\t(4) Receber a surpresa   \n";
							break;				
						}



					
			    
       				}
				break;
			
				
				case Inventario:
					jogador->AbrirInventario();
				break;
				
				case Retornar:
					return;
				break;
				
				case Menu:
					jogador->MenuPrincipal();
				break;
				
		}
	}
    void CovilDosMarines()
    {
	}               
	void CamposPraianos(Jogador*jogador,MarineLutador Lutadores[], MarineCacador Cacadores[],MarineMago Magos[],Monstro Monstros[])
	{
        while(1)
        {
            if(jogador->PrimeiraVezNosCamposPraianos == true)
            {
                system("cls");
                cout <<"+----------------------------------------------------------------------------------------------------------------------+\n";
                cout <<"|                                                     Os ";Verde("Campos Praianos");cout<<"                                               |";                              
                cout <<"+----------------------------------------------------------------------------------------------------------------------+\n\n";
                cout << "MMMMMMMMWWWWWWWWWWWWWWWXkxxxkkkxk0XKK0KNWWWWWWNK0OkkxkOk0XNNNNXKK0OOOO0000OOO0KNMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWNN0llONWMMMWWWWWWX000XWWNOxkOKXNWNXOxooooodkkkkOOkk00KKX0kdxXMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWNNNNX\n"
                "WWWWWWWWWWWWWWWWNXKKKXKk0WMMMMMMMMMMMWMWNNWWKOXWMMMMMXxdxk0XXNWMMMMMMWWWWMMMN00O00000000OOOOOOOOOOOOkkkkOOOOOOOO00000000\n"
                "WWWNXK00OOkOO00Oxxk0XNNXNNWWWMMMMMMMMMMMMMMMMMMWWWWNNXKKXXXKKKKKKKKKKKKKKKKKKKXXXXKK00KKKKKKKKKKKKXXXXXXXXXXNNNNWWWWWWWW\n"
                "X0kxxddxxxkOOO00OOkxdddddxdddOKKK000KKKKKKKKKKKKKKKKKKKKKKKKKKXXXXXXNNNNNNNNNNNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "X00K0KKKKXXXXNNXXXXXXXXXXXXKKKKXXXXXXNNNNNNNWWWWWWWWWNXKKKKKKKKKKKXWWWWWWWWWWNK000kO0KK0KNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWX0OxoolodOKXXNNXK000NWWWWWXOxddxk0XNWWXOONWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWOc:cclllodxxxkOOXWN0OKNNKxlcldkKXK000KKOKWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWX0kxdol:;cllclx0XNWN0kxc:odx000000kk00XWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0xol::cllldKWXxookXNXXX0kkkOKNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNOc::cdKX0ocox0KKKOo;;kNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWKlcdxddllOKNNNN0dc:o0XKKKXXXXXXXNNWWWWWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXXXXXXNWWWWOcclokddOKKKKOc;cd0KKKKKKKKKKKKKKKK0KKNWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXKK000K0KKNWWMMMNklddlxOOXMWNOk0XWMMMMMMMWWWMMMMMMWNXK00XWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKOOxooooooodkkkkO0KNMWNOxkkc;:::lxO0Ok0NNX0XKOXWOkNWMMMMMWKOKNWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWXx::lccccccdxoc:;;;:oxOXMW0xkxxxooxkOKOxk00xoOKdkNxl00kKWX0NMXkKWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKkxolodxdoxOkxkdodxxdkKXO0Ko:kWWMMMMWkxXNNWWNK000dxXOo0XdOKkO0KK0XWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKKXKKX00K0XN0OKkdk0XXNXxdxl':OXWWMWWWk::odONWWWMWXKKko0NkxkKWNXXWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWN0XWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNKO0XWWMMXdodxo:ckXN0kkXWk,',:lddkk0WMMMNK00kxONWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWOcdOXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNOxxKMMX0OOxdOxOk:ldK0lcd00o':oddlclddkOO0NMWNKOkXWWWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWWWk:lokWWWWNXKKKXNWWWWWWWWWWWWWWWWWWNOdxkkNM0dkKNOOOd0O:cddocldOd;';d0Oocodlccco0NMMMWKOKNWWWWWWWWWWWWWWWWWW\n"
                "WWWWWWWWWWWWNNk:ldx0KKKKKXXKOONWWWWWWWWWWWWWWWWKddKXk0MNdkW0xx00kK0:;dl:loxKKo:d0KOxx0XXOokXKOOKXWMNkKWWWX0kKWWKKNWWWWWW\n"
                "WWWWWNX0OOO000xclox0KXWMWNKK0KNWWWWWWWWWWWWWWW0okNW0KNNOlkKkdkK0KNWd'd0dlcxNMWWWMMWNK0KKOokWKkKX0KKKKNNNWk;;k0dcxXXXNWWW\n"
                "WWWWWXoclllllll:ldKMMMWKkkkOKXNNWWWWWWWWWWWWWXxkWN0OKKKkxKWNNWMMMMWKx0MXo,dNMMMMMMMMMMWNKOO0dxNWNKOKX0okXkcoOkolxKKO0KKK\n"
                "WWWWWWX000kc,':lx0K0NWXkdkkkxxkkkXWWWWWWWWWWNKOOKKKXWWNXNNNNWWMMWWMMMMMXo:l0MMMMMMMMMMMMMMWXOOXXx:;coxk0KXXNWWWMMWNXKKKX\n"
                "WWWWWWWN0o;,lxk0Ol;:cx0XK00KKKKKXNWWWWWWWNKK0O0XWMMWWNNNNNWWMMWWMMMMMMMXoclkWMMMMMMMMMMMNK0OkOkddxkKNMMWMMMMWNKKKKKXXNWW\n"
                "WWWWWN0l''cok0dc;:coooodkKKO0NWWWWWWWWN0O00KXWMMMMMWNNNNWMMMMMMMMMMMMMMKlldkXMMMMMMMMWXXk,.,,lkKWWWNNNWNNNK0KKXNWMMMMMMM\n"
                "WWWWXx;;dxdc:;,ldodxcclc:cdxl:oKWWWNKOkOKXXWMMMMMWNNXNWWWMMMMMMWWWX0XWMKllxOKWNNXXXNKl';dxoxKNWWWNXNNNXK000XWMWNWWWWWNXN\n"
                "WWWWKxkXWk;..:kN0cll'.':ooc;,',cxOOO0KWNKXWMWNKKNWNNNWWMMNK00OxoododxdxxocdO0koldlc;..;xXWNNNNNNNNNNNNNNXWMWNKkkOxoxxlco\n"
                "WWWWWWWWW0l:xXNKd;;lldONMWXkl:lodoclooxkkdooodoclokNMMMMW0doodxlco0Kkoddoco0K0KNWNkl,,OWWNNWNNNNNNNWMMW0xkkdlccldOkcoOxl\n"
                "WWWWWWWN0OOkddxxd,lNMMMMMNkolcc;cxkxc;;'';codkK0Ol'oNNXklclk0KKllKMNx:loo:l00kOOO0KWXl;dKNWNNNNNNWMMWXx:',lkOOkxd00odkkX\n"
                "WWNXOkxdc:ldkKNMNoxWMMMMMXl'..':;',c;ldcdOkkxx0Xkc,:kkc:dOK0kOxlkNOx0kxkOlcOKxkd;lKWWNd:d0XNWNWMMMMXdclldkXMMNKkodO0dlxK\n"
                "K0OoccccclxxkOO0k:l0KKXXXK000x:';c,,',lc:;:dkdooll:';;:x0Okl;:okKXxo00ddxc;xK0OkoOWKdokOxo0WMMMMMMM0::c:oxxKXd:clllodkKN\n"
                "xolllodxkkxxxxdkx;o0OkOKKOddXMNOxkk:,c:cc:,,;,:ooc:lc:c:,,dOOd::ldddd0K00o;o0kx00KWWKOkl':KMMMMMWXkoc;,;dkl;ldxK0l,';ok0\n"
                "oldkO0KXK00OkOKWk,oWWOkNMWkxXMMMMWKldXK0OOkolcldocokOkddo;:kNNOc'';,'ckKNO;collodxxdddlldOXXNNNKd:',oc';oOKkxXMWk::cl::x\n"
                "xkOOOOKNX0OkkOXWk'l00xx0KOxk00OOOOdcd00000kl;',cc::dkdc:;,';ccodl;;c:::lkx:dOdddolc;ckOOKXKXNWWNOc'lkl;;oxdoclddlcc:cl;'\n"
                "xxxddxO00OkxkO00kx0KKKKKXXXXXXNNNNNNNNNNXXKOxodxkkkkxxxoccccclodxocoxdoc:;,o0do0KO000XOkKXXXNNNNWXkoxo::cxkdllx0KKXKOxxk\n"
                "XXKKXNWWWWMMMMMMMWWMMMWNNWMMMMMMMMWXNWWX000KNWWMMWMMMNNNXXXXXXNNXK000OkdolcxKockkxdddddoodxxxxkkO00O000000xllOWMMWNXXKXN\n"
                "MMMMMWWWWWMMWNNNX0OKNKOO0KNNXKKNWX0KNMX00xdXMMWNXXXNNXNK0NNKOKWWMWWWNXXXNWNXNKKNNK0000OOkxddxkxddodxkkOO0OocdOO0OkkkOOkk\n"
                "WX0OO0O0KXNNKO0KKOKKOOKXKNWNKKKNWNNMWNWX0K0KNWWWN0O0KXWNKKXXXNWWWKKNWNXKNMX0XWWWWWNKNMMMMMNXKKKXNXXKKKKK00XXXXX00NMMMMMW\n"
                "K0000KXXNWWNXNWWWWMNXNNXNNNNNNXKXNXNK0NNKWWNXXKKK0KNNKXNXKNMMNNWXOkOKNXXWW0ONNKOKWNKXWMWWWNNWWK0KNMMMMMWKOKWMMWXXWMMMMMM\n"
                "MMMWWMMWXXNMMWWWWNXKXXKKKXXXNN0OXXKXK0NMWNKKXXXXXNWN0xONXNMN0OKNKXNXXNWWWMWXXWNKXX0NWK00XNNNWWWWNNWMMWNWWNNWWNNWMMMMMMMM\n";
                Sleep(5000);
                system("CLS");
                campospraianos();
                ImprimirComDelay ("\tVocê se localiza nos ");VerdeCD("Campos Praianos");cout<<".\n";
                ImprimirComDelay ("\tCampos quentes e abertos, repletos de areia e plantas.\n");
                ImprimirComDelayNoFim ("\tCuidado com cobras de areia, Marines e outros inimigos."); 
                cout <<"\tO que irá fazer "; cout << jogador->getnome() << "?\n";
                cout << "\n\n\t(1) Procurar um Inimigo            \n";
                cout << "\n\n\t(2) Procurar mais localidades      \n";
                cout << "\n\n\t(3) Andar até a praia mais próxima \n";
                cout << "\n\n\t(4) Andar até o Covil Marine       \n";
                cout << "\n\n\t(r) Tentar "; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"   \n";
                cout << "\n\n\t(i) Abrir inventário \n";
                jogador->PrimeiraVezNosCamposPraianos = false;
            }
            else if(jogador->PrimeiraVezNoPortao == false)
            {
            	system ("CLS");
            	campospraianos();
                cout <<"\tVocê se localiza nos ";Verde("Campos Praianos");cout<<".\n";
                cout <<"\tCampos quentes e abertos, repletos de areia e plantas.\n";
                cout <<"\tCuidado com cobras de areia, Marines e outros inimigos."; 
                cout <<"\tO que irá fazer "; cout << jogador->getnome() << "?\n";
                cout << "\n\n\t(1) Procurar um Inimigo            \n";
                cout << "\n\n\t(2) Procurar mais localidades      \n";
                cout << "\n\n\t(3) Andar até a praia mais próxima \n";
                cout << "\n\n\t(4) Andar até o Covil Marine       \n";
                cout << "\n\n\t(r) Tentar "; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"   \n";
                cout << "\n\n\t(i) Abrir inventário \n";
            }
            switch(Tecla())
            {
                case 49:
                    ProcurarInimigoNosCamposPraianos(jogador, Lutadores,Cacadores,Magos,Monstros);
                break;

                case 50:
                    ProcurarLugaresNosCamposPraianos(jogador, Lutadores,Cacadores,Magos,Monstros);
                break;

                case 51:
                    
                    
                break;

                case 52:
                    CovilDosMarines();
                break;

                case Retornar:
                    return;
                break;

                case Inventario:
                    jogador->AbrirInventario();
                break;
                
                case Menu:
					jogador->MenuPrincipal();
				break;
            }
        }       
	}
	void TreinoEmKyronma(Jogador*jogador,BonecoDeTreino Bonecos[])
	{
		while (1)
    	{
            instrutor();
            cout << "\tPague algumas ";Verde("moedas");cout <<", e eu te entregarei alvos para treinar sua habilidades. \n\n";
            cout << "\n\t(1) Boneco de treino nível ";Verde("1");cout <<"  (100 Moedas)     \n";
            cout << "\n\t(2) Boneco de treino nível ";Verde("2");cout <<"  (200 Moedas)     \n";
            cout << "\n\t(3) Boneco de treino nível ";Amarelo("3");cout <<"  (400 Moedas)     \n";
            cout << "\n\t(4) Boneco de treino nível ";Amarelo("4");cout <<"  (700 Moedas)     \n";
            cout << "\n\t(5) Boneco de treino nível ";Vermelho("5");cout <<"  (1100 Moedas)    \n";
            cout << "\n\t(6) Desafiar o instrutor      (Nivel Recomendado: ";Vermelho("6");cout <<") \n";
            cout << "\n\n\t(r) Sair do instrutor              \n";
            cout << "\n\n\t(i) Abrir inventário               \n";
            switch(Tecla())
            {
                bool q;
                case 49:
                	instrutor();
                    q = jogador->VerificarMoedas(100);
                    if (q = true)
                    {
                        jogador->luta(&Bonecos[1]);
                    }
                break;
                case 50:
                	instrutor();
                    q = jogador->VerificarMoedas(200);
                    if (q = true)
                    {
                        
                    }
                break;
                case 51:
                	instrutor();
                    q = jogador->VerificarMoedas(400);
                    if (q = true)
                    {
                        
                    }
                break;
                case 52:
                	instrutor();
                    q = jogador->VerificarMoedas(700);
                    if (q = true)
                    {
                    
                    }
                break;
                case 53:
             	   instrutor();
                    q = jogador->VerificarMoedas(1100);
                    if (q = true)
                    {
                        
                    }
                break;
                
                case Retornar:
            		return;
            	break;
            	
            	case Menu:
					jogador->MenuPrincipal();
				break;
            	
                case Inventario:
					jogador->AbrirInventario();
				break;
            }
        }
	}
	void InstrutorDeKyronma(Jogador*jogador,BonecoDeTreino Bonecos[])
	{
        while (1)
        {
        	instrutor();
            if(jogador->PrimeiraVezNoInstrutor == true)
            {
                ImprimirComDelay ("\tUma homem com uma longa");VerdeCD(" barba branca ");ImprimirComDelay("está em pé ao lado de alguns bonecos de treino.\n\n\n");
                ImprimirComDelay ("\tEle olha para você, e com uma expressão carrancuda pergunta:\n\n");
                VerdeCD("\t- Oque você quer?\n");
                cout << "\n\n\t(1) - Eu gostaria de treinar.      \n";
                cout << "\n\n\t(2) - Como funciona o treinamento? \n";
                cout << "\n\n\t(3) - Quem é você?                 \n";
                cout << "\n\n\t(r) Sair do instrutor              \n";
                cout << "\n\n\t(i) Abrir inventário               \n";
                jogador->PrimeiraVezNoInstrutor = false;
            }
            else if(jogador->PrimeiraVezNoInstrutor == false)
            {
                cout << "\tUma homem com uma longa";Verde(" barba branca ");cout <<" barba branca está em pé ao lado de alguns bonecos de treino.\n\n\n";
                cout << "\tEle continua a te encarar com sua expressão carrancuda no rosto:\n\n";
                cout << "\n\n\t(1) - Eu gostaria de treinar.      \n";
                cout << "\n\n\t(2) - Como funciona o treinamento? \n";
                cout << "\n\n\t(3) - Quem é você?                 \n";
                cout << "\n\n\t(r) Sair do instrutor              \n";
                cout << "\n\n\t(i) Abrir inventário               \n";
            }
            Sleep(200);	
            switch(Tecla())
            {
                case 49:
                	TreinoEmKyronma(jogador,Bonecos);
                break;
                case 50:
                	instrutor();
                    ImprimirComDelay("\tÉ simples seu ");VerdeCD("Insolente");ImprimirComDelayNoFim(".\n");
                    ImprimirComDelay("\tVocê me paga, e eu te dou um boneco para treinar.\n");
                    ImprimirComDelay("\tCaso ganhe, você será recompensado.\n");
                    ImprimirComDelay("\tCaso você seja muito imprudente e ");Vermelho("Idiota");ImprimirComDelay(", pode me desafiar,\n");
                    ImprimirComDelay("\tMas já aviso que você provávelmente irá se ");Rosa("arrepender");ImprimirComDelayNoFim(".\n");
                    cout << "\n\n\t(1) Obrigado!       \n";
                    if (Tecla()==49)
                break;
                case 51:
                    instrutor();
                    ImprimirComDelay("\tEu me chamo ");AzulClaro("Ikant"); cout <<".\n";
                    ImprimirComDelayNoFim("\tSou o de Istrutor de ");Verde("Kyronma");cout<<".\n";
                    ImprimirComDelay("\tPosso te ensinar a usar suas armas com maestria.\n\n");
                    ImprimirComDelay("\tTambém posso te ensinar a usar novas armas e te tornar experiente.\n");
                    ImprimirComDelay("\tVocê paga um determinado valor, e eu te entrego bonecos de treinamento para treinar.\n");
                    cout << "\n\n\t(1) Obrigado!       \n";
                    if (Tecla()==49)
                break;
                
                case Retornar:
                	return;
               	break;
               	case Menu:
					jogador->MenuPrincipal();
				break;
                case Inventario:
					jogador->AbrirInventario();
				break;
            }
        }
	}
	void MercadorDeAlimentosDeKyronma(Jogador*jogador,Item item[])
	{
		comerciante();
		while(1)
		{
			 cout<<"         Você possui ";Amarelo(jogador->getmoedas());Verde(" Moedas"); cout<<", O quê gostaria comprar?\n\n"
	         "         +-----------------------------------------------------------------------+\n"
		     "         |  Naco de     _  _        |                                            |\n"
		     "  (1)    |  pão duro    _||_        |   Pedaços simples de um pão velho.         |\n"
		     "         |             |_  _|       |                                            |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Água        _  _        |                                            |\n"
		     "  (2)    |  da Fonte    _||_        |   Água de alguma fonte desconhecida.       |\n"
		     "         |             |_  _|       |                                            |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |               _  _       |                                            |\n"
		     "  (3)    |  Cocos      ||_ | |      |   Deliciosa fruta tropical, mas            |\n"
		     "         |             ||_||_|      |   você terá que quebrar antes de consumir. |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Pedaço de   _  _        |                                            |\n"
		     "  (4)    |  Carne-      _||_        |   Pedaços de uma carne barata,             |\n"
		     "         |  Seca       |_  _|       |   Receba 4 de HP.                          |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n\n"
		     "  (r)    "; Cinza("Retornar");cout<< " ao centro\n\n"
		     "  (i)    Abrir o inventário  ";
		     switch(Tecla())
		     {
		     	case 49:
		     		comerciante();
		     		jogador->Compra(&item[1]);
		     	break;
		     	
		     	case 50:
		     		comerciante();
		     		jogador->Compra(&item[2]);
		     	break;
		     	
		     	case 51:
		     		comerciante();
		     		jogador->Compra(&item[3]);
		     	break;
		     	
		     	case 52:
		     		comerciante();
		     		jogador->Compra(&item[4]);
		     	break;
		     	
		     	case Retornar:
		     		return;
				break;
				
				case Inventario:
					jogador->AbrirInventario();
		     	break;
		     	
		     	case Menu:
					jogador->MenuPrincipal();
				break;
			 }
		}
	}
	void PeixeiroDeKyronma(Jogador*jogador,Item item[])
	{
		comerciante();
		while(1)
		{
			
	   cout<<"         Você possui ";Amarelo(jogador->getmoedas());Verde(" Moedas"); cout<<", O quê gostaria comprar?\n\n"
	         "         +-----------------------------------------------------------------------+\n"
		     "         |  Algas          _        |                                            |\n"
		     "  (1)    |  Marinhas   |_|| |       |   Algas para vegetarianos,                 |\n"
		     "         |               ||_|       |   mas se metabolizam rápido.               |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Carne de      _         |                                            |\n"
		     "  (2)    |  Enguia      | _|        |   Carne de Enguia. Não muito agradável,    |\n"
		     "         |              | _|        |   mas ambundante e comestível.             |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Peixe-      _  _        |                                            |\n"
		     "  (4)    |  seco        _||_        |   Peixes secos ao sol,                     |\n"
		     "         |             |_  _|       |   restauram 5 de HP.                       |\n"
		     "         |                          |                                            |\n"
			 "         +--------------------------+--------------------------------------------+\n"
		     "         |  Carne de   _  _  _      |                                            |\n"
		     "  (4)    |  Peixe-     _| _|| |     |  Carne do raro Peixe-Imperador,            |\n"
		     "         |  Imperador  _||_ |_|     |  obtido apenas na ilha de Kronnomar.      |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n\n"
		     "  (r)    "; Cinza("Retornar");cout<< " ao centro\n\n"
		     "  (i)    Abrir o inventário  ";
		     switch(Tecla())
		     {
		     	case 49:
		     		comerciante();
		     		jogador->Compra(&item[7]);
		     		
		     	break;
		     	
		     	case 50:
		     		comerciante();
		     		jogador->Compra(&item[6]);
		     		
		     	break;
		     	
		     	case 51:
		     		comerciante();
		     		jogador->Compra(&item[5]);
		     	break;
		     	
		     	case 52:
					comerciante();
		     		jogador->Compra(&item[8]);
		     	break;
		     	
		     	case Retornar:
		     		return;
				break;
				
				case Menu:
					jogador->MenuPrincipal();
				break;
				
				case Inventario:
					jogador->AbrirInventario();
		     	break;
			 }
		}
	}
	void ArtesaoDeKyronma(Jogador*jogador,Item item[])
	{
		comerciante();
		while(1)
		{
	   cout<<"         Você possui ";Amarelo(jogador->getmoedas());Verde(" Moedas"); cout<<", O quê gostaria comprar?\n\n"
	         "         +-----------------------------------------------------------------------+\n"
		     "         |  Algas          _        |                                            |\n"
		     "  (1)    |  Marinhas   |_|| |       |   Algas para vegetarianos,                 |\n"
		     "         |               ||_|       |   mas se metabolizam rápido.               |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Carne de      _         |                                            |\n"
		     "  (2)    |  Enguia      | _|        |   Carne de Enguia. Não muito agradável,    |\n"
		     "         |              | _|        |   mas ambundante e comestível.             |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Peixe-      _  _        |                                            |\n"
		     "  (4)    |  seco        _||_        |   Peixes secos ao sol,                     |\n"
		     "         |             |_  _|       |   restauram 5 de HP.                       |\n"
		     "         |                          |                                            |\n"
			 "         +--------------------------+--------------------------------------------+\n"
		     "         |  Carne de   _  _  _      |                                            |\n"
		     "  (4)    |  Peixe-     _| _|| |     |  Carne do raro Peixe-Imperador,            |\n"
		     "         |  Imperador  _||_ |_|     |  obtido apenas na ilha de Kronnomar.      |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n\n"
		     "  (r)    "; Cinza("Retornar");cout<< " ao centro\n\n"
		     "  (i)    Abrir o inventário  ";
		     switch(Tecla())
		     {
		     	case 49:
		     		comerciante();
		     		jogador->Compra(&item[7]);
		     	break;
		     	
		     	case 50:
		     		comerciante();
		     		jogador->Compra(&item[6]);
		     	break;
		     	
		     	case 51:
		     		comerciante();
		     		jogador->Compra(&item[5]);
		     	break;
		     	
		     	case 52:
		     		comerciante();
		     		jogador->Compra(&item[8]);
		     	break;
		     	
		     	case Retornar:
		     		return;
				break;
				
				case Menu:
					jogador->MenuPrincipal();
				break;
				
				case Inventario:
					jogador->AbrirInventario();
		     	break;
			 }
		}
	}
	void CentroDeKyronma(Jogador*jogador,Item itens[],BonecoDeTreino Bonecos[])
	{
		while(1)
		{
			system("cls");
			centro();
			if(jogador->PrimeiraVezNoCentro == true)
			{
				
				ImprimirComDelay ("\tVocê se encontra no ");AmareloCDNoFim("Centro da cidade...\n\n\n");
				ImprimirComDelay ("\tUm pequeno conjunto de poucas estradas de poeira e barro formam o centro da cidade.\n");
				ImprimirComDelay ("\tVários vendedores de ");VerdeCD("produtos marinhos");ImprimirComDelay (" podem ser vistos, e também algumas construções de madeira e palha,\n");
				ImprimirComDelay ("\tusadas como pontos de comercio.\n");
				cout << "\n\n\t(1) Ir ao Mercador de Alimentos \n";
				cout << "\n\n\t(2) Ir ao Pescador              \n";
				cout << "\n\n\t(3) Ir ao Artesão da aldeia     \n";
				cout << "\n\n\t(4) Ir ao Instrutor             \n";
				cout << "\n\n\t(r) "; Cinza("Retornar");cout<< "                    \n";
				cout << "\n\n\t(i) Abrir inventário            \n";
				jogador->PrimeiraVezNoCentro = false;
			}
			else if(jogador->PrimeiraVezNoCentro == false)
			{
				cout << "\tVocê se encontra no ";Amarelo("Centro da cidade...\n\n\n");
				cout << "\tUm pequeno conjunto de poucas estradas de poeira e barro formam o centro da cidade.\n";
				cout << "\tVários vendedores de produtos marinhos podem ser vistos, e também algumas construções de madeira e palha,\n";
				cout << "\tusadas como pontos de comercio.\n";
				cout << "\n\n\t(1) Ir ao Mercador de Alimentos \n";
				cout << "\n\n\t(2) Ir ao Pescador              \n";
				cout << "\n\n\t(3) Ir ao Artesão da aldeia     \n";
				cout << "\n\n\t(4) Ir ao Instrutor             \n";
				cout << "\n\n\t(r) "; Cinza("Retornar");cout<< "                    \n";
				cout << "\n\n\t(i) Abrir inventário            \n";
			}
			switch(Tecla())
			{
			case 49:
				MercadorDeAlimentosDeKyronma(jogador,itens);
			break;
			
			case 50:
				PeixeiroDeKyronma(jogador,itens);
			break;
			
			
			case 51:
				ArtesaoDeKyronma(jogador,itens);
			break;
			
			case 52:
				InstrutorDeKyronma(jogador,Bonecos);
			break;
			
			case Retornar:
				return;
			break;
			
			case Inventario:
				jogador->AbrirInventario();
			break;	
			}
		}
	}
	void LojaDaTaverna(Jogador*jogador,Item item[])
	{
		comerciante();
		while(1)
		{
	   cout<<"         Você possui ";Amarelo(jogador->getmoedas());Verde(" Moedas"); cout<<", O quê gostaria comprar?\n\n"
		     "         +-----------------------------------------------------------------------+\n"
		     "         |  Aguardente              |                                            |\n"
		     "  (1)    |  de cana       |_|       |   Aguardente de cana,                      |\n"
		     "         |                  |       |   essa bebida ainda irá te matar.          |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Água           _        |                                            |\n"
		     "  (2)    |  limpa         |_|       |   Água filtrada.                           |\n"
		     "         |                  |       |                                            |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |                 _        |                                            |\n"
		     "  (3)    |  Hidromel      |_|       |   Uma maravilhosa bebida                   |\n"
		     "         |                |_|       |   Receba o efeito: \"HIDROMEL!\".            |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n"
		     "         |  Vinho       _  _        |                                            |\n"
		     "  (4)    |  Simples     _|| |       |   Vinho feito de forma caseira, com baixo  |\n"
		     "         |             |_ |_|       |   tempo e fermentação e origem duvidosa.   |\n"
		     "         |                          |                                            |\n"
		     "         +--------------------------+--------------------------------------------+\n\n"
		     "  (i)   Abrir o Inventário\n\n\n"
		     "  (r)   "; Cinza("Retornar");cout<< " a taverna\n";
		     switch(Tecla())
		     {
		     	case 49:
		     		comerciante();
		     		jogador->Compra(&item[10]);
		     	break;
		     	
		     	case 50:
		     		comerciante();
		     		jogador->Compra(&item[2]);
		     	break;
		     	
		     	case 51:
		     		comerciante();
		     		jogador->Compra(&item[11]);
		     	break;
		     	
		     	case 52:
		     		comerciante();
		     		jogador->Compra(&item[12]);
		     	break;
		     	
		     	case Retornar:
		     		return;
				break;
				
				case Inventario:
					jogador->AbrirInventario();
		     	break;
			 }
		 }
	}
	void BalcaoDaTaverna(Jogador*jogador,Item item[])
	{
//BALCÂO
		while(1)
		{
			taverna();
			if(jogador->PrimeiraVezNoBalcao == true)
			{
				ImprimirComDelay ("\tO Barman te olha, e com um sorriso lhe pergunta:\n\n");
				VerdeCD("\tOlá senhor, o que o trás aqui?\n");
				cout << "\n\n\t(1) Pedir uma missão  (Em Breve!)\n";
				cout << "\n\n\t(2) Pedir informações \n";
				cout << "\n\n\t(3) Compar algo       \n";
				cout << "\n\n\t(r) Sair do balcão    \n";
				cout << "\n\n\t(i) Abrir inventário  \n";
				jogador->PrimeiraVezNoBalcao = false;
			}
			else if(jogador->PrimeiraVezNoBalcao == false)
			{
				Branco("\tO Barman te olha, e com um sorriso lhe pergunta:\n\n");
				Verde("\tOlá senhor, o que o trás aqui?\n");
				cout << "\n\n\t(1) Pedir uma missão  (Em Breve!)\n";
				cout << "\n\n\t(2) Pedir informações \n";
				cout << "\n\n\t(3) Compar algo       \n";
				cout << "\n\n\t(r) Sair do balcão    \n";
				cout << "\n\n\t(i) Abrir inventário  \n";
			}
			switch (Tecla())
			{
		//ABRIR MISSÕES DA TAVERNA
				case 49:
					taverna();
				break;
				
		//INFORMAÇÕES	
				case 50:
					while(1)
					{
						taverna();
						int i;
						ImprimirComDelay ("\tNão sei ao certo qual é a sua intenção por aqui,\n");
						ImprimirComDelay ("\tmas eu me chamo ");AzulClaro("Barton"); cout <<".\n";
						ImprimirComDelay ("\tSou o dono dessa taverna, e moro em ");Verde("Kyronma");cout<<" dês de garoto.\n";
						ImprimirComDelayNoFim ("\tTambém sou conhecido como um bom contratante para todo tipo de serviços...\n\n");
						ImprimirComDelay ("\tVenha a minha taverna quando quiser uma bebida ou algum trabalho.\n");
						ImprimirComDelay ("\tMeus funcionarios são muito bem remunerados com moedas...\n");
						ImprimirComDelayNoFim ("\tPosso espalhar diversas notícias por aqui, e mudar e reputação de qualquer um.\n");
						cout << "\n\n\t(1) Obrigado! \n";
						i = Tecla();
						if(i==49)
							break;
					}	
				break;
				
				case 51:
					LojaDaTaverna(jogador,item);
				break;
				
				case Retornar:
					return;
				break;
				
				case Inventario:
					jogador->AbrirInventario();
				break;
			}
		}
	}
	void BrigaDeBarEmKyronma(Jogador*jogador,Humano Bebados[])
	{
		taverna();
		int q;
		q = NumeroAleatorio(100);
		if ( q < 60)
		{
			jogador->Encontro(Bebados[1]);
			
		}
		if ( q >= 60 && q < 85)
		{
			jogador->Encontro(Bebados[2]);
		}
		if ( q >= 85)
		{
			jogador->Encontro(Bebados[3]);
		}
	}
	void DonzelaDaTavernaDeKyronma(Jogador*jogador)
	{
		while (1)
		{
			if(jogador->getReputacao() < 8000);
			{
				system("cls");
				taverna();
				ImprimirComDelay ("\tA ");VerdeCD("donzela");ImprimirComDelayNoFim(" lhe olha com uma expressão enojada e lhe dá um tapa.\n\n");
				jogador->HPM(-10);
				ImprimirComDelay ("\n\n\t(");VerdeCD("HP");ImprimirComDelay("-");VermelhoCD("10");ImprimirComDelayNoFim(")\n");
				ImprimirComDelay ("\t- Volte a falar comigo quando tiver alguma");AmareloCD(" reputação");ImprimirComDelayNoFim(".\n");
				cout << "\n\n\t(1) Continuar.                  \n";
				int q;
				do{
					q = Tecla();
					if (q == 49)
						return;
				}
				while(q != 49);
			}
		}
	}
	void HomemEstranhoEmKyronma(Jogador*jogador)
	{
		while(1)
		{
			if(jogador->getReputacao() < 8000);
			{
				system("cls");
				taverna();
				VerdeCDNoFim("\t- Não faço a menor idéia de quem você seja.\n\n");
				ImprimirComDelay ("\t- Volte a falar comigo quando tiver alguma");AzulCD(" reputação ");ImprimirComDelayNoFim("nesse lugar.\n");
				cout << "\n\n\t(1) Continuar.           \n";
				int q;
				do{
					q = Tecla();
					if (q == 49)
						return;
				}
				while(q != 49);
			}
			if(jogador->PrimeiraVezNoHomemEstranho== true)
			{
				system("cls");
				taverna();
				ImprimirComDelayNoFim ("\tVocê se aproxima da estranha e esguia figura...\n\n");
				ImprimirComDelay("\tO Homem inclina sua cabeça o suficiente para olhar no fundo dos seus olhos.\n");
				ImprimirComDelay("\tEstudando seu corpo de cima a baixo com seu único olho saudável, ele pergunta com sua voz falha e rouca:\n\n");
				VerdeCD("\t- O que o faz pertubar meu descanso?");
				cout << "\n\n\t(1) - Quem é você?                \n";
				cout << "\n\n\t(r) Sair do vendedor              \n";
				cout << "\n\n\t(i) Abrir inventário              \n";
				jogador->PrimeiraVezNoHomemEstranho = false;
			}
			else if(jogador->PrimeiraVezNoHomemEstranho == false)
			{
				system("cls");
				taverna();
				Branco("\tVocê se aproxima da estranha e esguia figura...\n\n");
				Branco("\tO Homem inclina sua cabeça o suficiente para olhar no fundo dos seus olhos.\n");
				Branco("\tEstudando seu corpo de cima a baixo com seu único olho saudável, ele pergunta com sua voz falha e rouca:\n\n");
				Verde("\t- O que o faz pertubar meu descanso?");
				cout << "\n\n\t(1) - Quem é você?                 \n";
				cout << "\n\n\t(1) - Quem é você?                 \n";
				cout << "\n\n\t(1) - Quem é você?                 \n";
				cout << "\n\n\t(1) - Quem é você?                 \n";
				cout << "\n\n\t(r) Sair do vendedor               \n";
				cout << "\n\n\t(i) Abrir inventário               \n";
			}
			switch(Tecla())
			{
				case 49:
				break;	
				
				case Retornar:
					return;
				break;
				
				case Inventario:
					jogador->AbrirInventario();
				break;
			}			
		}
	}
	void TavernaDeKyronma(Jogador*jogador,Item item[],Humano Bebados[])
	{
		while(1)
		{
			system("cls");
			taverna();
			if(jogador->PrimeiraVezNataverna == true)
			{
				ImprimirComDelay ("\tVocê entra em uma pequenina ");VerdeCD("taverna");ImprimirComDelayNoFim(" com poucas pessoas, e um barmen de meia idade\n\n\n");
				ImprimirComDelay ("\tHá alguns homens no balcão, uma donzela em pé, e um estranho homem\n");
				ImprimirComDelay ("\tportando uma enorme cicatriz no rosto, sentado em uma das mesas.\n");
				ImprimirComDelay ("\tOque irá fazer "); cout << jogador->getnome() << "?\n";
				cout << "\n\n\t(1) Ir ao balcão                  \n";
				cout << "\n\n\t(2) Ir até a donzela              \n";
				cout << "\n\n\t(3) Ir até o homem estranho       \n";
				cout << "\n\n\t(4) Desafiar alguém para uma luta \n";
				cout << "\n\n\t(r) Sair da tavernaa              \n";
				cout << "\n\n\t(i) Abrir inventário              \n";
				jogador->PrimeiraVezNataverna = false;
			}
			else if(jogador->PrimeiraVezNataverna == false)
			{
				cout <<"\tVocê entra em uma pequenina ";Verde("taverna");cout <<" com poucas pessoas, e um barmen de meia idade\n\n\n";
				cout <<"\tHá alguns homens no balcão, uma donzela em pé, e um estranho homem\n";
				cout <<"\tportando uma enorme cicatriz no rosto, sentado em uma das mesas.\n";
				cout <<"\tOque irá fazer "; cout << jogador->getnome() << "?\n";
				cout << "\n\n\t(1) Ir ao balcão                  \n";
				cout << "\n\n\t(2) Ir até a donzela              \n";
				cout << "\n\n\t(3) Ir até o homem estranho       \n";
				cout << "\n\n\t(4) Desafiar alguém para uma luta \n";
				cout << "\n\n\t(r) Sair da taverna               \n";
				cout << "\n\n\t(i) Abrir inventário              \n";
			}
			switch(Tecla())
			{
				case 49:
					 BalcaoDaTaverna(jogador,item);
				break;
				
				case 50:
					DonzelaDaTavernaDeKyronma(jogador);
				break;
				
				case 51:
					HomemEstranhoEmKyronma(jogador);
				break;
			
		//BRIGA DE BAAAAAR!
				case 52:
					BrigaDeBarEmKyronma(jogador,Bebados);
					
				break;
				
				case Retornar:
					return;
				break;
				
				case Inventario:
					jogador->AbrirInventario();
				break;
			}
		}
	}
	void CurandeiroDeKyronma(Jogador*jogador)
	{
		while(1)
		{
			system("cls");
			curandeiro();
			if(jogador->PrimeiraVezNoCurandeiro == true)
			{
				VerdeCD("\tDugh'Ju");ImprimirComDelayNoFim(" é o curandeiro da aldeia.\n\n");
				ImprimirComDelay ("\tUm homem velho, de estatura baixa, e que impõe um grande respeito.\n");
				ImprimirComDelay ("\tUm sábio ancião, que teve muitos dias de glória.\n");
				ImprimirComDelayNoFim ("\tOque irá fazer?\n");
				cout << "\n\tPontos de Reputação :\n";
				cout << "\n\n\t(1) - Quem é você?                        \n";
                cout << "\n\n\t(2) - Qual é a Origem do mundo?           \n";
                cout << "\n\n\t(3) - Qual é a diferença entre bem e mal? \n";
                cout << "\n\n\t(r) - Qual é meu objetivo?                \n";
                cout << "\n\n\t(5) - O que me aguarda?                   \n";
				cout << "\n\n\t(6) - Me conte uma lenda .                \n";
                cout << "\n\n\t(i) Abrir inventário                      \n";
                cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " a ";Verde("Kyronma                    \n");
				jogador->PrimeiraVezNoCurandeiro = false;
			}
			else if(jogador->PrimeiraVezNoCurandeiro == false)
			{
				Verde("\tDugh'Ju");cout<<" é o curandeiro da aldeia.\n\n";
				cout <<"\tUm homem velho, de estatura baixa, e que impõe um grande respeito.\n";
				cout <<"\tUm sábio ancião, que teve muitos dias de glória.\n";
				cout <<"\tOque irá fazer?\n";
				cout << "\n\tPontos de Reputação :\n";
				cout << "\n\n\t(1) - Quem é você?                        \n";
                cout << "\n\n\t(2) - Qual é a Origem do mundo?           \n";
                cout << "\n\n\t(3) - Qual é a diferença entre bem e mal? \n";
                cout << "\n\n\t(4) - Qual é meu objetivo?                \n";
                cout << "\n\n\t(5) - O que me aguarda?                   \n";
				cout << "\n\n\t(6) - Me conte uma lenda.                 \n";
                cout << "\n\n\t(i) Abrir inventário                      \n";
                cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " a ";Verde("Kyronma                    \n");
			}
			switch(Tecla())
			{
				case 49:
					while(1)
					{

						curandeiro();
						ImprimirComDelay("\tEu me chamo ");Verde("Dugh'Ju"); ImprimirComDelay(" e isso é tudo que importa.\n");
						ImprimirComDelayNoFim("\tJá vivi e ouvi muito nessa vida, e em outras.\n");
						ImprimirComDelay("\tQuem somos, ou para onde vamos, são perguntas geralmente feitas por");Vermelho(" tolos ");ImprimirComDelay("sem propósito.\n");
						ImprimirComDelay("\tEscolha bem, e eu responderei uma pergunta ou farei algo por você.\n");
						ImprimirComDelay("\tTorne-se uma ");AmareloCD("lenda");ImprimirComDelayNoFim(".\n");
						ImprimirComDelay("\tE a cada vez que eu ouvir seu nome em meio aos débeis sussuros dessa cidade,\n");
						ImprimirComDelay("\tEu o recompesarei com o ");Azul("conhecimento");ImprimirComDelayNoFim(" há muito perdido.\n");
						cout << "\n\n\t(1) Continuar \n";
						int q; 
						(q = Tecla());
						if(q == 49)	
						break;	
					}
				break;
				
				
				case Retornar:
					return ;
				break;
				
				
				case Inventario:
					jogador->AbrirInventario();
				break;
				
			}
		}
	}
	int PortaoDeKyronma(Jogador*jogador)
	{
		while(1)
		{
			system("cls");
			portao();
			if(jogador->PrimeiraVezNoPortao == true)
			{
				ImprimirComDelay ("\tVocê se aproxima de uma pequena porteira de madeira,\n");
				ImprimirComDelay ("\tEla representa os limites da aldeia.\n");
				ImprimirComDelay ("\tO que irá fazer "); cout << jogador->getnome() << "?\n";
				cout << "\n\n\t(1) Sair da aldeia   \n";
				cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"   \n";
				cout << "\n\n\t(i) Abrir inventário \n";
				jogador->PrimeiraVezNoPortao = false;
			}
			else if(jogador->PrimeiraVezNoPortao == false)
			{
				cout <<"\tVocê se aproxima de uma pequena porteira de madeira,\n";
				cout <<"\tEla representa os limites da aldeia.\n";
				cout <<"\tO que irá fazer "; cout << jogador->getnome() << "?\n";
				cout << "\n\n\t(1) Sair da aldeia     \n";
				cout << "\n\n\t(r)"; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"   \n";
				cout << "\n\n\t(i) Abrir inventário \n";
			}
			switch(Tecla())
			{
				case 49:
					return 2;
				break;
				
				
				case Retornar:
					return 0;
				break;
				
				
				case Inventario:
					jogador->AbrirInventario();
				break;
			}
		}
	}
	void CasaDeKyronma(Jogador*jogador)
	{
		while(1)
		{
			system("cls");
			casa();
			if(jogador->PrimeiraVezEmCasa == true)
			{
				ImprimirComDelayNoFim ("\tLar doce lar.\n");
				ImprimirComDelay ("\tSua pequena casa feita de palha e barro.\n");
				VerdeCD("\tKyronma");ImprimirComDelayNoFim(" colabora com sua atmosfera serena e pacífica.\n");
				cout << "\n\n\t(1) Abrir o Baú      \n";
				cout << "\n\n\t(2) Descansar        \n";
				cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"\n";
				cout << "\n\n\t(i) Abrir inventário \n";
				jogador->PrimeiraVezEmCasa = false;
			}
			else if(jogador->PrimeiraVezEmCasa == false)
			{
				cout <<"\tLar doce lar.\n";
				cout <<"\tSua pequena casa feita de palha e barro.\n";
				Verde("\tKyronma");cout <<" colabora com sua atmosfera serena e pacífica.\n";
				cout << "\n\n\t(1) Abrir o Baú      \n";
				cout << "\n\n\t(2) Descansar        \n";
				cout << "\n\n\t(r) "; Cinza("Retornar");cout<< " a ";Verde("Kyronma");cout<<"\n";
				cout << "\n\n\t(i) Abrir inventário \n";
			}
			switch(Tecla())
			{
				case 49:
					jogador->Casas[0].AbrirBau(jogador);
				break;
				
				
				case 50:
					cout <<"\n\n\n\n\n\n\n\t\t\tVocê se deita e se concentra em pensamentos relaxantes";PontosBrancos();
					jogador->energiaM(jogador->getenergiam());
				break;
				
				case Retornar:
					return;
				break;
				
				case Inventario:
					jogador->AbrirInventario();
				break;
			}
		}
	}
	int Kyronma(Jogador *jogador,Item itens[],BonecoDeTreino Bonecos[],Humano Bebados[])
	{
		
		int i,controle = 0;
		while(1)
		{
			system("cls");
			if(jogador->PrimeiraVezEmKyronma == true)
			{
				cout <<"+----------------------------------------------------------------------------------------------------------------------+\n";
				cout <<"|                                                      A aldeia de ";Verde("Kyronma");cout<<"                                             |";                              
				cout <<"+----------------------------------------------------------------------------------------------------------------------+\n\n";
				cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOcoKOOXN0kXMMXl,oOOK0o:l0MMMMMMMMMMMMMMMMMMMMMMMMW0o:;;,'.'.......;xXWMMMMMMMMMMMM\n"
				"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx,'';dxllKMMMK:.';cc,.,OMMMMMMMMMMMMMMMMMMMMMMWKdlodolc;'..........;xNMMMMMMMMMMM\n"
				"MMMMMMMMMMMMMMMMMMMMMMMWNMMMMMMMMMMMMMMXl...,oodXMMMWx...'c;.:KMMMMMMMMMMMMMMMMMMMWWKdccodddlc:;'...........c0NMMMMMMMMM\n"
				"MMMMMMMMMMMMMMMMMMMMMMMKoxXNNXXWMMMMMMMWx'...;;cKWMMNx;'...,';lkNMMMMMMMMMMMMMMMM0olllddooooooool:,.''...''..'lKWMMMMMMM\n"
				"WWWWWWWWWWWWWWWWMMWWMWWWx,,lo:oNMWWWWWNklc;.....,kX0dlo;'.......:OWMMMMMMMMMMMMW0l;ldxxxdxxdxddxdoc;;,,'.''''..;d0NMMMMM\n"
				"WWWWWWWWWWWWWWXkOXXXXNWWNo..'.oNWWWWNOocccc;'....'cccoll:;'......,lOWMMMMMMMMWNkc;llllllooooddddc:looc;'.........'dXMMMM\n"
				"WWWWWWWWWWWWWWNd,ccldkNWNk;'..'ckXXOocclcccl:,...;oddooddo:,,''''..,oKWMMMMWKkolclllc,;cllcllllccloodl;............:OWMM\n"
				"WWWWWWWWWWWWWWWXl..,cdKOolc:,'...;cclllllllc::;,:ccccllllllloc;'.....;xXMNOoclddddddoodxdooddoooodxxxdc,''..........'l0W\n"
				"WWWWWWWWWWWWWWN0o;''';ccccccc:,.';:::::cccc:,:loooooooollddddoc,,'.....ckoclodxxxxxxxxxdodxxdodxxxxxxdolclc'.'''..''..;d\n"
				"WWWWWWWWWWWWWKxccc:,',:clcccc:;;clllllllllc;;cllolcclol::coolcclc;'...',:ldxxxxxxxxxxxxddxxxdodxxxxoc:codoc;'..''''''..'\n"
				"NNNWWNNNWNWXkl:ccc:;:cccccc:;;:clccclllccc:cooloollllo:. .ldoloddc,'..,cooooolllodollooooooooooooool:coxxl;;cc,..'......\n"
				"NNNNNNNNNNOlccccc::cccccccc;;::::::::c:::lddddddddxddd:. .ldddddl:::'':llolc:::clc:;:cll:'....:olllllloddocloo:.........\n"
				"NNNNNNNNXxc:ccc:;:clllccc:::ccccccccc::;clllllllooooolc;;;cccllollc:coxxxxdddddxoloodxxxc.    ;xxdddxddxxxddxl;'........\n"
				"XXNNNNXOoclllcc:::::::::;;:lllllclllc:clllooccclolodoloxdlloodddoccoxxxxxxdxxxxxxdxxxxxxc.    ;xxdxxxxdxxxxxxdl;''..''''\n"
				"WXKXNNOc:::::;:cccccccc;;:::::::::::;:oddxxddddddddddxxdddxddddlcoxxxxxddxxxxxxxxxxxxxxxc.    ;xxdxxxxxxxxxolcloll:'',,'\n"
				"MMNXKXKOkl;do::cccccc:;:ccccccccccc:coddddddddddddddooddollodoc:cllolc:;:llllcclooolllooc'....:l:lddllodlldoc::codo:'','\n"
				"NWWWNXKXXo:kx,',;;''.':cccllllccc::;clccccllolc::clccloolccc::;,:lll:;;cllcc:;:loollclolccoolcc;,;llclc::ldlcclllllc;'..\n"
				"KKXNNNXKk:';,...,'...';;;;:::;;,,:lllollloooolllodooodxxddddol:cdxxxdodxxxdddddxxdddxxddddxddddlcodddxxdodxxddxxxxxdc,..\n"
				"XX0KNX0xllcc:;;;,'........';,,'':oddddddddddddxxdoodddddlooc::oxxxxxxxxxxddxxxxxxxxxxxxxxxxddxxdxxxxxxxxddxxxddxxxxxdl:'\n"
				"Oxx0XKOOKXXK0Od;;;;;;;;;;;,,::';ooooooooddooodolloooooolc:;:loxxxxxxxxxxxxxxxxxxxxxdxxxxxxxdxxxxxxxxxxxdddolcccoxxxxxxdo\n"
				"'',dXNXXXXNNXOxx0KKXXK0OOd;,c;.';,;;;;;;;,,,,,'.',;:::cc;,:oxddddooddddddddxdloooooddxddddddxxxxddxxxxxddl:;:::coodxxxxd\n"
				"''''l0NNXKXNNXNNNNNKkdlcc;,''.....';'.','..........;::::;:ccc:::;,;cllcclllc;,;c::cllocllcloolcc:cllcloooc::ccccc::clldo\n"
				":::::lkXNNXXXXNNNNNX0xoc:;,'.......,''',...........;:;,:loolllllllodoodddolcllollooodoodooollolcllollllooloooollllc:::od\n"
				"cccccclkXNNNXXXXNNNNNNX0Oo;,;cllodo;;dd:...........;:;;ldxxxxxxxxxxxxxxxxddxxxxddxxxdodxxdoloxdoxxxxxxddxxxxxxxxxxdc::od\n"
				"ooooooooxKNNNNXXKXNNNNNNKdcok0KXXNKc;Ok:...........;;:lddxddxxxxxxxxxxxxddxxxxddxxxdodxxddddxxddxxxxxxxxxxxxxxxxxxxocodd\n"
				"oolllooood0XNNNNXXXXXNNNK0KXNNNNNNKc'cc;...........,:loddoddddddddoodddddloxxxddddooddxxdodxxxdxxxxxxxxxdxxxxxxxxxxxxxdo\n"
				"ddddddddxddkXNNNNXXXKXXNNNNNNXK0Oko,':c;...........',:ccc:cccc:cccc:;:::;..,c:,,;'';ccc:::clllllcc::coo:,:ooooolloooooll\n"
				",,',,;oOkodO0XNNNNNNXXKXXNNNNX0kxl,,colc:::;;,,;;;;::;;::,;::,,:llc,................';,,;::::::;;,'..'.......','.',,;;,,\n"
				".....'o0klOWXKKXXXNNNNXXKXXXXNNNOcckKXXKKK000000Okoc:codxxxl;',dXXO;................';,,;::::::;,,'.....................\n"
				".....'o0klOWNXKKKXXXNNNNXXKXXXXX0kKNNNNNNNNNNNNXklc,.,cokXXo'';kNW0;................';,,;::::::;,,'.....................\n"
				".....'oX0lo00KKXXXXNNXNNNNXXXXXXXXNNNNNNNNNNNNNXd;lo;,;dKXKl'.;OXNk,................';,,:cc::::;;;,.....................\n"
				";;;::coxl:lkKXXNXXXNNNNXNNNNNNNXXKXXXXNNNNNNNNNNOcclclox0Kkc'.,looc.................';;;:c:::::;:c,.....................\n"
				"XXXXKxc;'',;clx0XXNNNNXXNNXXXXNXNNXXXXXXXXXXXXXNXxc:::lxdoc;'.,:cc;.................,;:lc:loooool:'.....................\n"
				"NNNNKd;.......';lkKXXXXXXXXXXXXXXXXXXXXXXXXXKX0kko:;,',::c:,'.,:cc;'................,;:lccllllloc;'.....................\n"
				"NNNNN0dooc::ldddk0KXXXXXXXXXXXXXXXXXXXXXXXXKKK0kd;....',;:;''.,cccc:;;;,,,'''.......,;:::ccccccc:;'.....................\n"
				"NNNNNNNNNXXXNNXKKKKXXXXXXXXXXXXXXXXXXXXXXXXXXXXX0dc;;;lol;,''';coooollllccccc:::;;;;;;clloolllc:;;,....................'\n"
				"NNNNNNNNNNNXXNXXKK0KKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKOxxOOo:::ccoxOKXKKKK0000OOOOOkxdolcccloxkkxoc:::c::;;,,,,,,''......';\n"
				"XXXXXXXXXXXXXXXXXKKK0KXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKK00OO0KKKKXXXXXXXXXXXXXKOxdl::lollccc;:coddlcokO0OOkkkxxddoolcccccc\n"
				"XXXXXXXXXXXXXXXK0000KKKXXXXXXXXXXXXXXXXXXXXXXXXXKXXXXXXXKKXXXXXXXXXXXXXXXKOdoc:::clooolccc::cc:;;;;coOXXXXXXXXXKKK000OOk\n"
				"KKKKKKKKKKKKKK0OO00KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0OOOOxdkkxxkkxkOkxxxxxkkkkk0KKKKKKKKKKKKKKKKKK\n";
			    Sleep(5000);
			    system("cls");
			    cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
				cout <<  "|                                                      A Aldeia de ";Verde("Kyronma");cout<<"                                             |";                              
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
			    Sleep(200);
				Verde("\tKyronma");ImprimirComDelay (" é uma pequena aldeia, localizada no continente de "); Azul("Kronnomar\n");
				ImprimirComDelay ("\tSeu nome significa ");AzulClaro("\"A Força das Águas\""); cout <<".\n";
				ImprimirComDelay ("\tSua terra natal.\n");
				ImprimirComDelay ("\tOnde gostaria de ir "); cout << jogador->getnome();ImprimirComDelay("?\n");
				cout << "\n\n\t(1) Ir ao Centro da cidade            \n";
				cout << "\n\n\t(2) Ir a Taverna                      \n";
				cout << "\n\n\t(3) Ir ao Curandeiro                  \n";
				cout << "\n\n\t(4) Ir para a saída da cidade         \n";
				cout << "\n\n\t(5) Ir a sua casa                     \n";
				cout << "\n\n\t(i) Abrir inventário                  \n";
				jogador->PrimeiraVezEmKyronma = false;
			}
			else if(jogador->PrimeiraVezEmKyronma == false)
			{
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n";
				cout <<  "|                                                      A Aldeia de ";Verde("Kyronma");cout<<"                                             |";                              
				cout <<"\n+----------------------------------------------------------------------------------------------------------------------+\n\n\n";
			   	Verde("\tKyronma");cout <<" é uma pequena aldeia, localizada no continente de "; Azul("Kronnomar\n");
				cout <<"\tSeu nome significa ";AzulClaro("\"A Força das Águas\""); cout <<".\n";
				cout <<"\tSua terra natal.\n";
				cout <<"\tOnde gostaria de ir "; cout << jogador->getnome() << "?\n";
				cout << "\n\n\t(1) Ir ao Centro da cidade            \n";
				cout << "\n\n\t(2) Ir a Taverna                      \n";
				cout << "\n\n\t(3) Ir ao Curandeiro                  \n";
				cout << "\n\n\t(4) Ir para a saída da cidade         \n";
				cout << "\n\n\t(5) Ir a sua casa                     \n";
				cout << "\n\n\t(i) Abrir inventário                  \n";
			}
			if (controle == 2)
				return controle;
			switch (Tecla())
			{	
		//CENTRO DA ALDEIA
				case 49:
					CentroDeKyronma(jogador,itens,Bonecos);
				break;	
		//TAVERNA DA ALDEIA
				case 50:
					TavernaDeKyronma(jogador,itens, Bebados);
				break;
		//CURANDEIRO DA ALDEIA
				case 51:
					CurandeiroDeKyronma(jogador);
				break;
		//PORTÃO DA CIDADE
				case 52:
					controle = PortaoDeKyronma(jogador);
				break;		
		//CASA
				case 53:
					CasaDeKyronma(jogador);
				break;	
		//INVENTARIO
		
				case Menu:
					jogador->MenuPrincipal();
				break;
				
				case Retornar:
				break;
				
				case Inventario:
					jogador->AbrirInventario();
				break;
		
			}
		}
	}
	void conteudoparausar()
	{
	
	}  
};
int main ()
{
	system("mode con:cols=120 lines=50");
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	Jogador x;
	MeuJogo jogo;
	Item itens[100];
	x.setDificuldade(1);
	BancoDeItens Banco;
	string codigo;
	
//ITENS
{
	
	itens[0].setnome("Naco dnta do phanteon");
	itens[0].settamanho(1);
	itens[0].setxp(2);
	itens[0].sethp(06);
	itens[0].setmp(0);
	itens[0].setenergia(0);
	itens[0].setpreco(25);
	itens[0].setquantidade(1);
	itens[0].setdescricao("Um pão velho quem restauram 6 de HP");
	itens[0].setbatalha(true);
	itens[0].setconsumivel(true);
	
	
	itens[1].setnome("Naco de pão duro");
	itens[1].setcodigo(1);
	itens[1].settamanho(1);
	itens[1].setxp(2);
	itens[1].sethp(16);
	itens[1].setmp(0);
	itens[1].setenergia(0);
	itens[1].setpreco(25);
	itens[1].setquantidade(1);
	itens[1].setdescricao("Um pão velho quem restauram 16 de HP");
	itens[1].setbatalha(true);
	itens[1].setconsumivel(true);
	
	itens[3].setnome("Cocos");
	itens[3].setcodigo(3);
	itens[3].settamanho(1);
	itens[3].setxp(3);
	itens[3].sethp(30);
	itens[3].setmp(10);
	itens[3].setenergia(-20);
	itens[3].setquantidade(3);
	itens[3].setpreco(160);
	itens[3].setdescricao("Deliciosa fruta tropical, você terá que quebrar antes de consumir");
	itens[3].setbatalha(true);
	itens[3].setconsumivel(true);

	itens[2].setnome("Água da Fonte");
	itens[2].setcodigo(2);
	itens[2].settamanho(1);
	itens[2].setxp(1);
	itens[2].sethp(18);
	itens[2].setmp(0);
	itens[2].setenergia(5);
	itens[2].setquantidade(1);
	itens[2].setpreco(25);
	itens[2].setdescricao("Água filtrada.");
	itens[2].setbatalha(true);
	itens[2].setconsumivel(true);
	
	itens[4].setnome("Pedaço de Carne-seca");
	itens[4].setcodigo(4);
	itens[4].settamanho(1);
	itens[4].setxp(0);
	itens[4].sethp(4);
	itens[4].setmp(0);
	itens[4].setenergia(1);
	itens[4].setquantidade(4);
	itens[4].setpreco(18);
	itens[4].setdescricao("Pedaços de uma carne barata, e que um dia ja foram melhores, Receba 4 de HP.");
	itens[4].setbatalha(true);
	itens[4].setconsumivel(true);
	
	itens[5].setnome("Peixe-secos");
	itens[5].setcodigo(5);
	itens[5].settamanho(1);
	itens[5].setxp(0);
	itens[5].sethp(5);
	itens[5].setmp(0);
	itens[5].setenergia(1);
	itens[5].setquantidade(4);
	itens[5].setpreco(25);
	itens[5].setdescricao("Peixes secos ao sol, restauram 5 de HP.");
	itens[5].setbatalha(true);
	itens[5].setconsumivel(true);
	
	itens[6].setnome("Carne de Enguia");
	itens[6].setcodigo(6);
	itens[6].settamanho(1);
	itens[6].setxp(0);
	itens[6].sethp(14);
	itens[6].setmp(0);
	itens[6].setenergia(-10);
	itens[6].setpreco(13);
	itens[6].setquantidade(1);
	itens[6].setdescricao("Carne de Enguia. Não muito agradável, mas ambundante e comestível");
	itens[6].setbatalha(true);
	itens[6].setconsumivel(true);
	
	itens[7].setnome("Algas Marinhas");
	itens[7].setcodigo(7);
	itens[7].settamanho(1);
	itens[7].setxp(2);
	itens[7].sethp(7);
	itens[7].setmp(4);
	itens[7].setenergia(14);
	itens[7].setpreco(40);
	itens[7].setquantidade(3);
	itens[7].setdescricao("Algas pas os vegetarianos, mas se metabolizam rápido");
	itens[7].setbatalha(true);
	itens[7].setconsumivel(true);
	
	itens[8].setnome("Carne de Peixe-Imperador");
	itens[8].setcodigo(8);
	itens[8].settamanho(1);
	itens[8].setxp(40);
	itens[8].sethp(70);
	itens[8].setmp(30);
	itens[8].setenergia(20);
	itens[8].setpreco(320);
	itens[8].setquantidade(2);
	itens[8].setdescricao("Carne do raro Peixe-Imperador, obtido apenas na ilha de Kronnomar.");
	itens[8].setbatalha(true);
	itens[8].setconsumivel(true);
	
//BEBIDAS
	
	
	itens[10].setnome("Aguardente");
	itens[10].setcodigo(10);
	itens[10].settamanho(1);
	itens[10].setxp(2);
	itens[10].sethp(-12);
	itens[10].setmp(0);
	itens[10].setenergia(0);
	itens[10].setquantidade(1);
	itens[10].setpreco(180);
	itens[10].setdescricao("Essa bebida ainda irá te matar, causa dano ao usuário e restaura energia.");
	itens[10].setbatalha(true);
	itens[10].setconsumivel(true);
	
	itens[11].setnome("Hidromel");
	itens[11].setcodigo(11);
	itens[11].settamanho(1);
	itens[11].setxp(5);
	itens[11].sethp(5);
	itens[11].setmp(0);
	itens[11].setenergia(0);
	itens[11].setquantidade(1);
	itens[11].setdescricao("Receba o efeito: \"HIDROMEL!\".");
	itens[11].setbatalha(true);
	itens[11].setconsumivel(true);
	
	itens[12].setnome("Vinho simples");
	itens[12].setcodigo(12);
	itens[12].settamanho(1);
	itens[12].setxp(5);
	itens[12].sethp(8);
	itens[12].setmp(0);
	itens[12].setenergia(0);
	itens[12].setpreco(25);
	itens[12].setquantidade(1);
	itens[12].setdescricao("Vinho, baixo preço e baixa qualidade");
	itens[12].setbatalha(true);
	itens[12].setconsumivel(true);

//MÀGICOS

	itens[23].setnome("Poção de Cura Grande");
	itens[23].setcodigo(23);
	itens[23].settamanho(1);
	itens[23].setxp(0);
	itens[23].sethp(250);
	itens[23].setmp(0);
	itens[23].setenergia(0);
	itens[23].setquantidade(1);
	itens[23].setpreco(350);
	itens[23].setdescricao("Uma poção curativa feita por magos dedicados.");
	itens[23].setbatalha(true);
	itens[23].setconsumivel(true);
	
	itens[24].setnome("Poção de Cura Média");
	itens[24].setcodigo(24);
	itens[24].settamanho(1);
	itens[24].setxp(0);
	itens[24].sethp(130);
	itens[24].setmp(0);
	itens[24].setenergia(0);
	itens[24].setquantidade(1);
	itens[24].setpreco(180);
	itens[24].setdescricao("Uma poção curativa mediana, que restaura pontos de HP.");
	itens[24].setbatalha(true);
	itens[24].setconsumivel(true);
	
	itens[25].setnome("Poção de Cura Pequena");
	itens[25].setcodigo(25);
	itens[25].settamanho(1);
	itens[25].setxp(0);
	itens[25].sethp(0);
	itens[25].setmp(50);
	itens[25].setenergia(0);
	itens[25].setquantidade(1);
	itens[25].setpreco(80);
	itens[25].setdescricao("Uma pequena poção curativa verde que restaura pontos de HP.");
	itens[25].setbatalha(true);
	itens[25].setconsumivel(true);
	
	itens[26].setnome("Poção de Mana Pequena");
	itens[26].setcodigo(26);
	itens[26].settamanho(1);
	itens[26].setxp(0);
	itens[26].sethp(0);
	itens[26].setmp(100);
	itens[26].setenergia(0);
	itens[26].setquantidade(1);
	itens[26].setpreco(100);
	itens[26].setdescricao("Uma pequena poção brilhando em azul intenso, restaura MP.");
	itens[26].setbatalha(true);
	itens[26].setconsumivel(true);
	
	itens[27].setnome("Poção de Mana Média");
	itens[27].setcodigo(27);
	itens[27].settamanho(1);
	itens[27].setxp(0);
	itens[27].sethp(0);
	itens[27].setmp(200);
	itens[27].setenergia(0);
	itens[27].setquantidade(1);
	itens[27].setpreco(190);
	itens[27].setdescricao("Uma consíderável poção Mágica.");
	itens[27].setbatalha(true);
	itens[27].setconsumivel(true);
	
	itens[28].setnome("Poção de Mana Grande");
	itens[28].setcodigo(26);
	itens[28].settamanho(1);
	itens[28].setxp(0);
	itens[28].sethp(0);
	itens[28].setmp(100);
	itens[28].setenergia(0);
	itens[28].setquantidade(1);
	itens[28].setpreco(100);
	itens[28].setdescricao("Uma grande poção, Pura magia engarrafada.");
	itens[28].setbatalha(true);
	itens[28].setconsumivel(true);
	
	itens[29].setnome("Poção Envenedada I");
	itens[29].setcodigo(29);
	itens[29].settamanho(1);
	itens[29].setxp(00);
	itens[29].sethp(0);
	itens[29].setmp(-10);
	itens[29].setenergia(0);
	itens[29].setquantidade(1);
	itens[29].setpreco(100);
	itens[29].setdescricao("Uma poção tóxica, seus inimigos não irão gostar...");
	itens[29].setbatalha(true);
	itens[29].setconsumivel(true);
	
	
//ESPECIAIS

	itens[50].setnome("Mapa antigo");
	itens[50].setcodigo(50);
	itens[50].settamanho(1);
	itens[50].setxp(00);
	itens[50].sethp(0);
	itens[50].setmp(0);
	itens[50].setenergia(0);
	itens[50].setquantidade(1);
	itens[50].setpreco(500);
	itens[50].setdescricao("Um para parcialmente rasgado, mas ainda é possíve ler.");
	itens[50].setbatalha(false);
	itens[50].setconsumivel(false);
	
	itens[51].setnome("Runa Mágica");
	itens[51].setcodigo(51);
	itens[51].settamanho(1);
	itens[51].setxp(25);
	itens[51].sethp(10);
	itens[51].setmp(25);
	itens[51].setenergia(-20);
	itens[51].setquantidade(1);
	itens[51].setpreco(1000);
	itens[51].setdescricao("Uma runa arcana, que aumentará seu HP e MP máximos.");
	itens[51].setbatalha(true);
	itens[51].setconsumivel(true);
	
	itens[52].setnome("Cabeça de Durotan");
	itens[52].setcodigo(52);
	itens[52].settamanho(1);
	itens[52].setquantidade(1);
	itens[52].setpreco(1800);
	itens[52].setdescricao("O Troféu por derrotar o terrível Marine guerreiro Durotan.");
	itens[52].setbatalha(false);
	itens[52].setconsumivel(false);
	
	
//LOOTS

	itens[65].setnome("Crânio de Cobra da areia");
	itens[65].setcodigo(65);
	itens[65].settamanho(1);
	itens[65].setquantidade(1);
	itens[65].setpreco(40);
	itens[65].setdescricao("Obtido ao derrotar Cobras da areia.");
	itens[65].setbatalha(false);
	itens[65].setconsumivel(false);
	
	itens[66].setnome("Crânio de Javali Selvagem");
	itens[66].setcodigo(66);
	itens[66].settamanho(1);
	itens[66].setquantidade(1);
	itens[66].setpreco(200);
	itens[66].setdescricao("Obtido ao derrotarum Javali Selvagem.");
	itens[66].setbatalha(false);
	itens[66].setconsumivel(false);

// MATERIAIS

	itens[78].setnome("Madeira");
	itens[78].setcodigo(78);
	itens[78].settamanho(1);
	itens[78].setquantidade(1);
	itens[78].setpreco(15);
	itens[78].setdescricao("Pedaços de madeira, eficietes para uma fogueira.");
	itens[78].setbatalha(false);
	itens[78].setconsumivel(false);
	
	itens[79].setnome("Palha Seca");
	itens[79].setcodigo(79);
	itens[79].settamanho(1);
	itens[79].setquantidade(1);
	itens[79].setpreco(6);
	itens[79].setdescricao("Palha, serve principalmente de cama para animais.");
	itens[79].setbatalha(false);
	itens[79].setconsumivel(false);
	
	itens[80].setnome("Ferro");
	itens[80].setcodigo(80);
	itens[80].settamanho(1);
	itens[80].setquantidade(1);
	itens[80].setpreco(50);
	itens[80].setdescricao("Um dos materiais mais fortes e amplamente utilizados.");
	itens[80].setbatalha(false);
	itens[80].setconsumivel(false);
	
	
	
	
	
	
//BEBIDAS

	itens[10].setnome("Aguardente");
	itens[10].setcodigo(10);
	itens[10].settamanho(1);
	itens[10].setxp(2);
	itens[10].sethp(-12);
	itens[10].setmp(0);
	itens[10].setquantidade(1);
	itens[10].setdescricao ("Essa bebida ainda irá te matar, causa dano ao usuário e restaura energia.");
	itens[10].setbatalha(true);
	itens[10].setconsumivel(true);
	
	itens[11].setnome("Hidromel");
	itens[11].setcodigo(11);
	itens[11].settamanho(1);
	itens[11].setxp(5);
	itens[11].sethp(-4);
	itens[11].setmp(0);
	itens[11].setquantidade(1);
	itens[11].setdescricao ("Receba o efeito: \"HIDROMEL!\".");
	itens[11].setbatalha(true);
	itens[11].setconsumivel(true);
}
MarineLutador MarinesLutadores[5];
MarineCacador MarinesCacadores[3];
MarineMago MarinesMagos[3];
Monstro Monstros[10];
BonecoDeTreino Bonecos[4];
Humano Bebados[5];
//Inimigos
{
	
	//Marines Lutadores
	{
		MarinesLutadores[0].setnome("Durotan");
		MarinesLutadores[0].setNivel("Nível 5");
		MarinesLutadores[0].setraca("Marine");
		MarinesLutadores[0].setHP(x.ModDificuldade(x.getDificuldade(),130));
		MarinesLutadores[0].setMP(x.ModDificuldade(x.getDificuldade(),60));
		MarinesLutadores[0].setenergia(x.ModDificuldade(x.getDificuldade(),140));
		MarinesLutadores[0].setarmadura(x.ModDificuldade(x.getDificuldade(),3));
		MarinesLutadores[0].setatk(x.ModDificuldade(x.getDificuldade(),12));
		MarinesLutadores[0].setchancedeesquiva(1);
		MarinesLutadores[0].setHPm(MarinesLutadores[0].getHP());
		MarinesLutadores[0].setMPm(MarinesLutadores[0].getMP());
		MarinesLutadores[0].setenergiam(MarinesLutadores[0].getenergia());
		MarinesLutadores[0].setDAXP(0);
		MarinesLutadores[0].setDAREP(0);
		MarinesLutadores[0].setDAMOEDAS(0);
		//Ukundu
	}
	//Marines Caçadores
	{
		MarinesCacadores[0].setnome("Igvuld");
		MarinesCacadores[0].setNivel("Nível 5");
		MarinesCacadores[0].setraca("Marine");
		MarinesCacadores[0].setHP(x.ModDificuldade(x.getDificuldade(),130));
		MarinesCacadores[0].setMP(x.ModDificuldade(x.getDificuldade(),60));
		MarinesCacadores[0].setenergia(x.ModDificuldade(x.getDificuldade(),140));
		MarinesCacadores[0].setarmadura(x.ModDificuldade(x.getDificuldade(),3));
		MarinesCacadores[0].setatk(x.ModDificuldade(x.getDificuldade(),12));
		MarinesCacadores[0].setchancedeesquiva(1);
		MarinesCacadores[0].setHPm(MarinesCacadores[0].getHP());
		MarinesCacadores[0].setMPm(MarinesCacadores[0].getMP());
		MarinesCacadores[0].setenergiam(MarinesCacadores[0].getenergia());
		MarinesCacadores[0].setDAXP(0);
		MarinesCacadores[0].setDAREP(0);
		MarinesCacadores[0].setDAMOEDAS(0);
	}
	//Marines Magos
	{
	//Uk'Zur
		MarinesMagos[0].setnome("Zirgur");
		MarinesMagos[0].setNivel("Nível 5");
		MarinesMagos[0].setraca("Marine");
		MarinesMagos[0].setHP(x.ModDificuldade(x.getDificuldade(),130));
		MarinesMagos[0].setMP(x.ModDificuldade(x.getDificuldade(),60));
		MarinesMagos[0].setenergia(x.ModDificuldade(x.getDificuldade(),140));
		MarinesMagos[0].setarmadura(x.ModDificuldade(x.getDificuldade(),3));
		MarinesMagos[0].setatk(x.ModDificuldade(x.getDificuldade(),12));
		MarinesMagos[0].setchancedeesquiva(1);
		MarinesMagos[0].setHPm(MarinesMagos[0].getHP());
		MarinesMagos[0].setMPm(MarinesMagos[0].getMP());
		MarinesMagos[0].setenergiam(MarinesMagos[0].getenergia());
		MarinesMagos[0].setDAXP(0);
		MarinesMagos[0].setDAREP(0);
		MarinesMagos[0].setDAMOEDAS(0);
	}
	//Monstros
	{
		Monstros[1].setnome("Cobra da Areia");
		Monstros[1].setNivel("Nível 1");
		Monstros[1].setraca("Cobra");
		Monstros[1].setHP(x.ModDificuldade(x.getDificuldade(),100));
		Monstros[1].setMP(x.ModDificuldade(x.getDificuldade(),50));
		Monstros[1].setenergia(x.ModDificuldade(x.getDificuldade(),100));
		Monstros[1].setarmadura(x.ModDificuldade(x.getDificuldade(),0));
		Monstros[1].setatk(x.ModDificuldade(x.getDificuldade(),9));
		Monstros[1].setchancedeesquiva(1);
		Monstros[1].setHPm(Monstros[1].getHP());
		Monstros[1].setMPm(Monstros[1].getMP());
		Monstros[1].setenergiam(Monstros[1].getenergia());
		Monstros[1].setDAXP(15);
		Monstros[1].setDAREP(1);
		Monstros[1].setDAMOEDAS(0);	
		
		Monstros[2].setnome("Cobra da Areia");
		Monstros[2].setNivel("Nível 2");
		Monstros[2].setraca("Cobra");
		Monstros[2].setHP(x.ModDificuldade(x.getDificuldade(),120));
		Monstros[2].setMP(x.ModDificuldade(x.getDificuldade(),60));
		Monstros[2].setenergia(x.ModDificuldade(x.getDificuldade(),120));
		Monstros[2].setarmadura(x.ModDificuldade(x.getDificuldade(),1));
		Monstros[2].setatk(x.ModDificuldade(x.getDificuldade(),11));
		Monstros[2].setchancedeesquiva(1);
		Monstros[2].setHPm(Monstros[2].getHP());
		Monstros[2].setMPm(Monstros[2].getMP());
		Monstros[2].setenergiam(Monstros[2].getenergia());
		Monstros[2].setDAXP(25);
		Monstros[2].setDAREP(2);
		Monstros[2].setDAMOEDAS(0);	
		
		Monstros[3].setnome("Aranha da Areia");
		Monstros[3].setNivel("Nível 3");
		Monstros[3].setraca("Cobra");
		Monstros[3].setHP(x.ModDificuldade(x.getDificuldade(),150));
		Monstros[3].setMP(x.ModDificuldade(x.getDificuldade(),70));
		Monstros[3].setenergia(x.ModDificuldade(x.getDificuldade(),150));
		Monstros[3].setarmadura(x.ModDificuldade(x.getDificuldade(),2));
		Monstros[3].setatk(x.ModDificuldade(x.getDificuldade(),14));
		Monstros[3].setchancedeesquiva(1);
		Monstros[3].setHPm(Monstros[3].getHP());
		Monstros[3].setMPm(Monstros[3].getMP());
		Monstros[3].setenergiam(Monstros[3].getenergia());
		Monstros[3].setDAXP(40);
		Monstros[3].setDAREP(3);
		Monstros[3].setDAMOEDAS(20);	
		
		Monstros[4].setnome("Javali selvagem");
		Monstros[4].setNivel("Nível 3");
		Monstros[4].setraca("Javali");
		Monstros[4].setHP(x.ModDificuldade(x.getDificuldade(),160));
		Monstros[4].setMP(x.ModDificuldade(x.getDificuldade(),60));
		Monstros[3].setenergia(x.ModDificuldade(x.getDificuldade(),180));
		Monstros[4].setarmadura(x.ModDificuldade(x.getDificuldade(),3));
		Monstros[4].setatk(x.ModDificuldade(x.getDificuldade(),15));
		Monstros[4].setchancedeesquiva(1);
		Monstros[4].setHPm(Monstros[4].getHP());
		Monstros[4].setMPm(Monstros[4].getMP());
		Monstros[4].setenergiam(Monstros[4].getenergia());
		Monstros[4].setDAXP(50);
		Monstros[4].setDAREP(3);
		Monstros[4].setDAMOEDAS(35);	
		
		Monstros[5].setnome("Javali selvagem");
		Monstros[5].setNivel("Nível 4");
		Monstros[5].setraca("Javali");
		Monstros[5].setHP(x.ModDificuldade(x.getDificuldade(),175));
		Monstros[5].setMP(x.ModDificuldade(x.getDificuldade(),70));
		Monstros[5].setenergia(x.ModDificuldade(x.getDificuldade(),190));
		Monstros[5].setarmadura(x.ModDificuldade(x.getDificuldade(),4));
		Monstros[5].setatk(x.ModDificuldade(x.getDificuldade(),17));
		Monstros[5].setchancedeesquiva(1);
		Monstros[5].setHPm(Monstros[5].getHP());
		Monstros[5].setMPm(Monstros[5].getMP());
		Monstros[5].setenergiam(Monstros[5].getenergia());
		Monstros[5].setDAXP(65);
		Monstros[5].setDAREP(4);
		Monstros[5].setDAMOEDAS(40);	
		
		Monstros[6].setnome("Javali selvagem");
		Monstros[6].setNivel("Nível 5");
		Monstros[6].setraca("Javali");
		Monstros[6].setHP(x.ModDificuldade(x.getDificuldade(),190));
		Monstros[6].setMP(x.ModDificuldade(x.getDificuldade(),80));
		Monstros[6].setenergia(x.ModDificuldade(x.getDificuldade(),200));
		Monstros[6].setarmadura(x.ModDificuldade(x.getDificuldade(),5));
		Monstros[6].setatk(x.ModDificuldade(x.getDificuldade(),19));
		Monstros[6].setchancedeesquiva(1);
		Monstros[6].setHPm(Monstros[6].getHP());
		Monstros[6].setMPm(Monstros[6].getMP());
		Monstros[6].setenergiam(Monstros[6].getenergia());
		Monstros[6].setDAXP(75);
		Monstros[6].setDAREP(5);
		Monstros[6].setDAMOEDAS(80);
		
	}
	//Bonecos
	{
		
		Bonecos[1].setnome("Boneco de Treino");
		Bonecos[1].setNivel("Nível 1");
		Bonecos[1].setHP(x.ModDificuldade(x.getDificuldade(),200));
		Bonecos[1].setMP(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[1].setenergia(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[1].setarmadura(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[1].setatk(x.ModDificuldade(x.getDificuldade(),13));
		Bonecos[1].setchancedeesquiva(8);
		Bonecos[1].setHPm(Bonecos[1].getHP());
		Bonecos[1].setMPm(Bonecos[1].getMP());
		Bonecos[1].setenergiam(Bonecos[1].getenergia());
		Bonecos[1].setDAXP(50);
		Bonecos[1].setDAREP(0);
		Bonecos[1].setDAMOEDAS(0);
		
		Bonecos[2].setnome("Boneco de Treino");
		Bonecos[2].setNivel("Nível 2");
		Bonecos[2].setHP(x.ModDificuldade(x.getDificuldade(),350));
		Bonecos[2].setMP(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[2].setenergia(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[2].setarmadura(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[2].setatk(x.ModDificuldade(x.getDificuldade(),22));
		Bonecos[2].setchancedeesquiva(10);
		Bonecos[2].setHPm(Bonecos[2].getHP());
		Bonecos[2].setMPm(Bonecos[2].getMP());
		Bonecos[2].setenergiam(Bonecos[2].getenergia());
		Bonecos[2].setDAXP(150);
		Bonecos[2].setDAREP(0);
		Bonecos[2].setDAMOEDAS(0);
		
		Bonecos[3].setnome("Boneco de Treino");
		Bonecos[3].setNivel("Nível 3");
		Bonecos[3].setHP(x.ModDificuldade(x.getDificuldade(),500));
		Bonecos[3].setMP(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[3].setenergia(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[3].setarmadura(x.ModDificuldade(x.getDificuldade(),0));
		Bonecos[3].setatk(x.ModDificuldade(x.getDificuldade(),28));
		Bonecos[3].setchancedeesquiva(12);
		Bonecos[3].setHPm(Bonecos[3].getHP());
		Bonecos[3].setMPm(Bonecos[3].getMP());
		Bonecos[3].setenergiam(Bonecos[3].getenergia());
		Bonecos[3].setDAXP(380);
		Bonecos[3].setDAREP(0);
		Bonecos[3].setDAMOEDAS(0);
	}
	//Bêbados
	{
		Bebados[1].setnome("Bebado Irritante");
		Bebados[1].setNivel("Nível 2");
		Bebados[1].setraca("Humano");
		Bebados[1].setHP(x.ModDificuldade(x.getDificuldade(),120));
		Bebados[1].setMP(x.ModDificuldade(x.getDificuldade(),0));
		Bebados[1].setenergia(x.ModDificuldade(x.getDificuldade(),140));
		Bebados[1].setarmadura(x.ModDificuldade(x.getDificuldade(),2));
		Bebados[1].setatk(x.ModDificuldade(x.getDificuldade(),13));
		Bebados[1].setHPm(Bebados[1].getHP());
		Bebados[1].setMPm(Bebados[1].getMP());
		Bebados[1].setenergiam(Bebados[1].getenergia());
		Bebados[1].setDAXP(70);
		Bebados[1].setDAREP(-20);
		Bebados[1].setDAMOEDAS(40);
		
		Bebados[2].setnome("Bêbado");
		Bebados[2].setNivel("Nível 3");
		Bebados[2].setraca("Humano");
		Bebados[2].setHP(x.ModDificuldade(x.getDificuldade(),160));
		Bebados[2].setMP(x.ModDificuldade(x.getDificuldade(),0));
		Bebados[2].setenergia(x.ModDificuldade(x.getDificuldade(),160));
		Bebados[2].setarmadura(x.ModDificuldade(x.getDificuldade(),3));
		Bebados[2].setatk(x.ModDificuldade(x.getDificuldade(),13));
		Bebados[2].setHPm(Bebados[2].getHP());
		Bebados[2].setMPm(Bebados[2].getMP());
		Bebados[2].setenergiam(Bebados[2].getenergia());
		Bebados[2].setDAXP(100);
		Bebados[2].setDAREP(-25);
		Bebados[2].setDAMOEDAS(60);
		
		Bebados[3].setnome("Bêbado Forte");
		Bebados[3].setNivel("Nível 5");
		Bebados[3].setraca("Humano");
		Bebados[3].setHP(x.ModDificuldade(x.getDificuldade(),220));
		Bebados[3].setMP(x.ModDificuldade(x.getDificuldade(),0));
		Bebados[3].setenergia(x.ModDificuldade(x.getDificuldade(),200));
		Bebados[3].setarmadura(x.ModDificuldade(x.getDificuldade(),5));
		Bebados[3].setatk(x.ModDificuldade(x.getDificuldade(),17));
		Bebados[3].setHPm(Bebados[3].getHP());
		Bebados[3].setMPm(Bebados[3].getMP());
		Bebados[3].setenergiam(Bebados[3].getenergia());
		Bebados[3].setDAXP(160);
		Bebados[3].setDAREP(-35);
		Bebados[3].setDAMOEDAS(110);
	}
}
//	jogo.MercadorDeAlimentosDeKyronma(&x,itens);
	x.setDificuldade(1);
	while (1) 
	{
		x.Casas[0].ColocarItem(itens[3]);
		x.Casas[0].ColocarItem(itens[2]);
		x.Casas[0].ColocarItem(itens[3]);
		x.Casas[0].ColocarItem(itens[3]);
		x.Casas[0].ColocarItem(itens[1]);
		x.Casas[0].ColocarItem(itens[1]);
		x.Casas[0].ColocarItem(itens[1]);
		x.Casas[0].ColocarItem(itens[1]);
		x.Casas[0].ColocarItem(itens[3]);
		system("cls");
		cout<<"+----------------------------------------------------------------------------------------------------------------------+\n"
	      "|                                                                                                                      |\n"
		  "|";Verde("                                                _    _                                                                ");cout<<"|"
		  "|";Verde("                                               | \\  / | ___  _ __  _   _                                              ");cout<<"|"
	  	  "|";Verde("                                               | |\\/| |/ _ \\| '_ \\| | | |                                             ");cout<<"|"
		  "|";Verde("                                               | |  | || __/| | | | |_| |                                             ");cout<<"|"
	  	  "|";Verde("                                               |_|  |_|\\___ |_| |_|\\__,_|                                             ");cout<<"|"
          "|                                                                                                                      |\n"
	  	  "|                                                                                                                      |\n"
		  "|                                                       ";Azul("Jogar");cout<<" (1)                                                      |\n"
		  "|                                                                                                                      |\n"
		  "|                                                     ";Verde("Como jogar");cout<<" (2)                                                   |\n"
		  "|                                                                                                                      |\n"
		  "|                                                      ";Amarelo("Códigos");cout<<" (3)                                                     |\n"         
		  "|                                                                                                                      |\n"
		  "|                                                      ";Rosa("Créditos");cout<<" (4)                                                    |\n"         
		  "|                                                                                                                      |\n"
		  "|                                                        ";Vermelho("Sair");cout<<" (5)                                                      |\n"         
		  "|                                                                                                                      |\n"
		  "+----------------------------------------------------------------------------------------------------------------------+\n";
			
		switch (Tecla())
		{
			case 49:
				int controle;
				jogo.PraiaSecreta(&x);
				jogo.CamposPraianos(&x,MarinesLutadores,MarinesCacadores,MarinesMagos,Monstros);
				controle = jogo.Kyronma(&x,itens,Bonecos,Bebados);
				if (controle == 2)
				{
					jogo.CamposPraianos(&x,MarinesLutadores,MarinesCacadores,MarinesMagos,Monstros);
				}

			break;
			
			case 50:
				int i;
				cout<<"+----------------------------------------------------------------------------------------------------------------------+\n"
			      "|                                                                                                                      |\n"
				  "|";Verde("                                                _    _                                                                ");cout<<"|"
				  "|";Verde("                                               | \\  / | ___  _ __  _   _                                              ");cout<<"|"
			  	  "|";Verde("                                               | |\\/| |/ _ \\| '_ \\| | | |                                             ");cout<<"|"
				  "|";Verde("                                               | |  | || __/| | | | |_| |                                             ");cout<<"|"
			  	  "|";Verde("                                               |_|  |_|\\___ |_| |_|\\__,_|                                             ");cout<<"|"
				"|                                                                                                                      |\n"
				"|                                                                                                                      |\n"
	  		    "|                                                  ";Amarelo("Oque é este jogo");cout<<" (1)                                                |\n"
				"|                                                                                                                      |\n"
				"|                                                  ";Vermelho("Combate");cout<<" (2)                                                         |\n"
				"|                                                                                                                      |\n"
				"|                                                  ";Verde("Itens");cout<<" (3)                                                           |\n"         
				"|                                                                                                                      |\n"
				"|                                                  ";Rosa("Tutorial De Combate");cout<<" (4)                                             |\n"         
				"|                                                                                                                      |\n"
				"|                                                  ";Azul("Voltar");cout<<" (5)                                                          |\n"         
				"|                                                                                                                      |\n"
				"+----------------------------------------------------------------------------------------------------------------------+\n";
			 	switch (Tecla())
				{
					case Menu:
						x.MenuPrincipal();
					break;
					
					case 49:
						x.ExplicacaoGeral();
					break;
					
					case 50:
						x.ExplicacaoCombate();
					break;
					
					case 51:
						x.ExplicacaoItens();
					break;
					
					case 52:
						jogo.Tutorial(&x);
						system("cls");
						ImprimirComDelay("\n\n\n\n\t\t\t\t\tEm que dificuldade gostaria de jogar?\n\n\n");
						cout <<"\t\t\t\t  1-";AzulClaro("Fácil      ");cout << "2-";Verde("Médio     ");cout <<"3-";Amarelo("Difícil      ");cout<<"4-";Vermelho("Insano");
						do{
							i = Tecla();
							if(i==49)
								x.setDificuldade(1);
							else if (i == 50)
								x.setDificuldade(2);
							else if (i == 51)
								x.setDificuldade(3);
							else if (i == 52)
								x.setDificuldade(4);
						}while(i != 49 && i != 50 && i != 51 && i != 52);
						ImprimirComDelayNoFim("\n\n\n\n\t\t\t\t\tA sua jornada começa agora ... ");
						MarineLutador Durotan;
						Durotan.setnome("Durotan");
						Durotan.setHP(x.ModDificuldade(x.getDificuldade(),130));
						Durotan.setMP(x.ModDificuldade(x.getDificuldade(),60));
						Durotan.setenergia(x.ModDificuldade(x.getDificuldade(),140));
						Durotan.setatk(x.ModDificuldade(x.getDificuldade(),12));
						Durotan.setarmadura(x.ModDificuldade(x.getDificuldade(),3));
						Durotan.setchancedeesquiva(0);
						Durotan.setHPm(Durotan.getHP());
						Durotan.setMPm(Durotan.getMP());
						Durotan.setenergiam(Durotan.getenergia());
						x.luta(&Durotan);
					break;
			
				}
			
				break;
			case 51:
				cout << "Código:";
				cin >> codigo;
				if (codigo == "ps")
				{
					jogo.PraiaSecreta(&x);
				}
				if (codigo == "gr")
				{
				}
			break;
			
			case 52:
				Branco("\n\n\n\t\tEsse jogo está sendo desenvolvido inteiramente por ");Verde("Caiubi Aguiar.\n");
				Branco("\t\tContato: \n\n\t\t@caiubiaguiar@gmail.com\n\t\t12 98162-3073\n\n");
				
				Vermelho("\t\tDiretor Executivo");Branco(": Caiubi Aguiar\n");
				Amarelo("\t\tDireção Artistica");Branco(": Caiubi Aguiar\n");
				Verde("\t\tScrum Master");Branco(": Caiubi Aguiar\n");
				Rosa("\t\tBack-End");Branco(": Caiubi Aguiar\n");
				Azul("\t\tFront-End");Branco(": Caiubi Aguiar\n");
				AzulClaro("\t\tDiretor de História");Branco(": Caiubi Aguiar\n");
				Branco("\t\tBrincadeiras a parte, estou desenvolvendo sozinho,\n");
				Branco("\t\tCaso queira saber mais, leia a seção \"");Amarelo("O que é este jogo");Branco("\" no menu \"");Verde("Como Jogar");Branco("\"\n");
				
				Branco("\t\t©Caiubi Aguiar\n");
				Pause();
			break;
			
			case 53:
				exit(0);
			break;
			
			case Menu:
				x.MenuPrincipal();
			break;
		}
	}
	return 0;	
}
void al()
{
/*

void CaminhandoAGreenWitch()
	{
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t\\:::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t>>::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t/:::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t\\\\::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:\\\\:::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::>>::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t://:::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t//::::::::::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::\\\\:::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::\\\\::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::>>:::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::://::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::://:::::::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::\\\\:::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::\\\\::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::>>:::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::://::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::://:::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::\\\\:::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::\\\\::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::>>:::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::://::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::://:::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::\\\\:::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::\\\\::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::>>:::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::://::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::://:::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::\\\\:::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::\\\\::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::>>:::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::://::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::://:::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::\\\\:::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::\\\\::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::>>:::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::://::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::://:::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::\\\\:::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::\\\\::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::>>:::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::://::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::://:::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::\\\\:::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::\\\\::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::>>:::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::://::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::://:::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::\\\\:::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::\\\\::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::>>:::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::://::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::://:::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::\\\\:::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::\\\\::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::>>:\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::://::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::://:::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tCaminhando até GreenWitch...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::\\\\:\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::\\\\\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::::>\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::://\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::://:\n";
		Sleep (50);
		system("cls");
		cout << "\t\tA Grande cidade de GreenWitch\n\n\n";
		cout << "\tGreenWitch é a maior capital do continente de ";Verde("Valória.\n");
		cout << "\tUm lugar extenso, barulhento e agitado, com diversos aldeões nas ruas, Mercadores ambulantes e crianças correndo.\n";
		cout << "\tAo longe é possível ver um extenso e alto castelo std::cinza-musgo, centros comerciais, instalações comerciais.\n";
	}
	void CaminhandoAoCentro()
	{
		std::string line;
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t\\:::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t>>::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t/:::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t\\\\::::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:\\\\:::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::>>::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t://:::::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t//::::::::::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::\\\\:::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::\\\\::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::>>:::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::://::::::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::://:::::::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::\\\\:::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::\\\\::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::>>:::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::://::::::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::://:::::::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::\\\\:::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::\\\\::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::>>:::::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::://::::::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::://:::::::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::\\\\:::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::\\\\::::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::>>:::::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::://::::::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::://:::::::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::\\\\:::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::\\\\::::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::>>:::::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::://::::::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::://:::::::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::\\\\:::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::\\\\::::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::>>:::::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::://::::::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::://:::::::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::\\\\:::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::\\\\::::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::>>:::::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::://::::::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::://:::::::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::\\\\:::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::\\\\::::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::>>:::::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::://::::::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::://:::::::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::\\\\:::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::\\\\::::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::>>:::::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::://::::::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::://:::::::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::\\\\:::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::\\\\::\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::>>:\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::://::\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::://:::\n";
		Sleep (50);
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tIndo ao Centro...\n\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::\\\\:\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::\\\\\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::::>\n";
		cout << "\t\t\t:::::::::::::::::::::::::::::::::::::::::://\n";
		cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::://:\n";
		Sleep (50);
		system("cls");
		cout <<"\n\t\tVocê se encontra no centro da cidade...\n\n\n";
		ifstream myfile ("CentroDeGreenWitch.txt"); 
		if (myfile.is_open()){
		while (! myfile.eof() ) {
		getline (myfile,line); 
		cout << line << std::endl;}
		myfile.close();}
		cout <<"\tNa rua principal, extremamente movimentada há pessoas de todos os tipos:\n";
		cout <<"\tVendedores ambulantes, homens da guarda real, mercadores, crianças correndo, e charlatões\n";
		cout <<"\tdispostos a extorquir boas quantidades de moedas de ouro...\n";
	}	
	
	
	
	ImprimirComDelay ("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tHave you feel the ");Vermelho("despair? "); ImprimirComDelayNoFim(" ...\n\n\n");
	ImprimirComDelay ("\tO terrível Lorde do submundo está acordando de seu sono nas profundezas...\n");
	ImprimirComDelay ("\tVocê é um dos poucos que sente seu maligno poder se expandindo lentamente, cobrindo de medo o coração dos homens...\n");
	ImprimirComDelay ("\tSeu dever é manter a esperança no continente de "); Verde("Valória.\n");
	ImprimirComDelay ("\tQual é o seu nome jovem aventureiro?\n");
    ImprimirComDelay ("\tMeu nome é: ");std::cin >> atributosp1.nome;
 */	
 	/*void greenwitch (Item TodosOsItens[],Jogador *x)
	{
		bool jogador->PrimeiraVezEmGreenwitch, jogador->PrimeiraVezNoMercadorDeAlimentos, jogador->PrimeiraVezNoCentro, jogador->PrimeiraVezNoCoureiro;
		int i;
	
		system("cls");
		if(jogador->PrimeiraVezEmGreenwitch == true)
		{
		    ImprimirComDelayNoFim("\t\tA Grande cidade de GreenWitch\n\n\n");
			ImprimirComDelay ("\tGreenWitch é a maior capital do continente de "); Verde("Valória.\n");
			ImprimirComDelay ("\tUm lugar extenso, barulhento e agitado, com diversos aldeões nas ruas, Mercadores ambulantes e crianças correndo.\n");
			ImprimirComDelay ("\tAo longe é possível ver um extenso e alto castelo cinza-musgo, centros comerciais, instalações comerciais.\n");
			ImprimirComDelay ("\tOnde gostaria de ir "); cout << x->getnome() << "?\n";
			cout << "\n\n\t(1) Ir ao Centro da cidade \n";
			cout << "\n\n\t(2) Ir a sua casa          \n";
			cout << "\n\n\t(3) Ir ao Palácio real     \n";
			cout << "\n\n\t(4) Ir ao Ferreiro         \n";
			cout << "\n\n\t(5) Ir a Catedral          \n";
			cout << "\n\n\t(6) Ir ao Portão da Cidade \n";
			cout << "\n\n\t(7) Ir a Taverna           \n";
			cout << "\n\n\t(i) Abrir inventário       \n";
			jogador->PrimeiraVezEmGreenwitch = false;
		}
		if(jogador->PrimeiraVezEmGreenwitch == false)
		{
		    cout << "\t\tA Grande cidade de GreenWitch\n\n\n";
			cout << "\tGreenWitch é a maior capital do continente de ";Verde("Valória.\n");
			cout << "\tUm lugar extenso, barulhento e agitado, com diversos aldeões nas ruas, Mercadores ambulantes e crianças correndo.\n";
			cout << "\tAo longe é possível ver um extenso e alto castelo cinza-musgo, centros comerciais, instalações comerciais.\n";
			cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
			cout << "\n\n\t(1) Ir ao Centro da cidade \n";
			cout << "\n\n\t(2) Ir a sua casa          \n";
			cout << "\n\n\t(3) Ir ao Palácio real     \n";
			cout << "\n\n\t(4) Ir ao Ferreiro         \n";
			cout << "\n\n\t(5) Ir a Catedral          \n";
			cout << "\n\n\t(6) Ir ao Portão da Cidade \n";
			cout << "\n\n\t(7) Ir a Taverna           \n";
			cout << "\n\n\t(i) Abrir inventário       \n";
		}
		i = Tecla();
			Case 49:
			{
			//Centro da cidade
				if(jogador->PrimeiraVezNoCentro == true)
				{
					ImprimirComDelayNoFim("\n\t\tVocê se encontra no centro da cidade...\n\n\n");
					ImprimirComDelay ("\tNa rua principal, extremamente movimentada há pessoas de todos os tipos,\n");
					ImprimirComDelay ("\tVendedores ambulantes, homens da guarda real, mercadores, crianças correndo, e charlatões\n");
					ImprimirComDelay ("\tdispostos a extorquir boas quantidades de moedas de ouro...\n");
					cout << "\n\n\t(1) Ir ao Mercador de alimentos \n";
					cout << "\n\n\t(2) Ir ao Coureiro              \n";
					cout << "\n\n\t(3) Ir ao Homem da guarda       \n";
					cout << "\n\n\t(4) Ir ao Sábio                 \n";
					cout << "\n\n\t(5) Ir ao Vendedor obscuro      \n";
					cout << "\n\n\t(r) Retornar a GreenWitch       \n";
					cout << "\n\n\t(i) Abrir inventário            \n";
				}
				if(jogador->PrimeiraVezNoCentro == false)
				{
					cout <<"\n\t\tVocê se encontra no centro da cidade...\n\n\n";
					cout <<"\tNa rua principal, extremamente movimentada há pessoas de todos os tipos:\n";
					cout <<"\tVendedores ambulantes, homens da guarda real, mercadores, crianças correndo, e charlatões\n";
					cout <<"\tdispostos a extorquir boas quantidades de moedas de ouro...\n";
					cout << "\n\n\t(1) Ir ao Mercador de alimentos \n";
					cout << "\n\n\t(2) Ir ao Coureiro              \n";
					cout << "\n\n\t(3) Ir ao Homem da guarda       \n";
					cout << "\n\n\t(4) Ir ao Sábio                 \n";
					cout << "\n\n\t(5) Ir ao Vendedor obscuro      \n";
					cout << "\n\n\t(r) Retornar a GreenWitch       \n";
					cout << "\n\n\t(i) Abrir inventário            \n";
				}
				Case 49:
				{
		//Vendedor de aimentos
					if(jogador->PrimeiraVezNoMercadorDeAlimentos == true)
					{
						ImprimirComDelay ("\n\n\n\t\tVocê possui "); cout << x->getmoedas() << " moedas\n";
					}
					if(jogador->PrimeiraVezNoMercadorDeAlimentos == false)
					{
						cout << "\n\n\n\t\tVocê possui "<< x->getmoedas() << " moedas\n";
					}
		//INICIO DAS COMRPAS DE ALIMENTOS
					Case 49: 
					{
		                if(x->getmoedas() >= 4 && x->InventarioDisponivel() >= 1)
		                {
		                	x->moedasM(-4);
		                	cout << "\t\tVocê comprou: X1 Naco de pão duro.\n";
		                	for(i=0; i < x->Inventario.size(); i++)
		                	{
			                	if (x->Inventario[i].getnome() == "Vazio")
								{
									x->Atribuir(&TodosOsItens[5],&x->Inventario[i]);
			                	}
							}	
		                }
		                else
		                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
		           	} 	
				}
				case 50:
				{
		//COUREIRO
					if (jogador->PrimeiraVezNoCoureiro = true)
					{
		                system("cls");
						ImprimirComDelayNoFim("\t\tVocê entra em uma pequena casa úmida e mal cuidada.\n");
						ImprimirComDelay("\tDentre roupas sujas, e um cheiro de mofo de um ambiente mal iluminado,\n");
						ImprimirComDelay("\té possível avistar um homem de idade sentado no centro do ambiente.\n");
						ImprimirComDelay("\to homem se levanta escorando-se em sua bengala,e lhe diz:\n");
						ImprimirComDelay("\t - Olá jovem viajante, o que o trás a meus aposentos?\n");
						cout << "\n\n\t(1) - Olá senhor, quem é você?\n";
						cout << "\n\n\t(2) - Desculpe o incômodo, estou de passsagem\n";
						cout << "\n\n\t(r) Retornar a GreenWitch       \n";
						cout << "\n\n\t(i) Abrir inventário            \n";
					}
					if (jogador->PrimeiraVezNoCoureiro = false)
					{
		                system("cls");
						cout << "\t\tVocê entra em uma pequena casa úmida e mal cuidada.\n";
						cout << "\tDentre roupas sujas, e um cheiro de mofo de um ambiente mal iluminado,\n";
						cout << "\té possível avistar um homem de idade sentado no centro do ambiente.\n";
						cout << "\to homem se levanta escorando-se em sua bengala,e lhe diz:\n";
						cout << "\t - Olá jovem viajante, o que o trás a meus aposentos?\n";
						cout << "\n\n\t(1) - Olá senhor, quem é você?\n";
						cout << "\n\n\t(2) - Desculpe o incômodo, estou de passsagem\n";
						cout << "\n\n\t(r) Retornar a GreenWitch       \n";
						cout << "\n\n\t(i) Abrir inventário            \n";
					}
		//INICIO DO HOMEM SÀBIO
					i = Tecla();
					Case 49: 
					{
					}
					if (i == 50) 
					{
					}
					Case 49: 
					{
					}
					Case 49: 
					{
					}
				}
				else if (i == 51)
				{
					//
				}
			}
			case 50:
			{
				//
			}
			else if (i == 51)
			{
				//
			}
			else if (i == 52)
			{
				//
			}
			else if (i == 53)
			{
				//
			}
			else if (i == 54)
			{
			}
			else if (i == 55)
			{
				//
			}
			else if (i == 105)
			{
			}
		}
		*/
	
	
										            /*
										            COMPRAAAAAAAAAAAAAAAAAAA
										            
										            
										            
													else if (lugar == 1) 
													{
										            if(x->getmoedas() >=5)
													{
														x->getmoedas() += -5;
														cout << "\t\tVocê comprou: X1 Água da fonte.\n";
														for(i=0; i < x->imax; i++)
														{
													    	if (x->mochila.itens[i].codigo == 0)
															{
													    		x->mochila.itens[i].codigo = y[2].codigo;
													    		x->mochila.itens[i].hp = y[2].hp;
													    		x->mochila.itens[i].xp = y[2].xp;
													    		x->mochila.itens[i].nome = y[2].nome;
													    		x->mochila.itens[i].tamanho = y[2].tamanho;
													    		x->mochila.itens[i].descricao = y[2].descricao;
													    		x->Idisp += x->mochila.itens[i].tamanho;
													    	    break;
													    	}
														}	
													}
													else
														cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }
													else if (lugar == 2) 
													{
										            if(x->getmoedas() >=8)
														{
															x->getmoedas() += -8;
															cout << "\t\tVocê comprou: X1 Pedaço de carne seca.\n";
															for(i=0; i < x->imax; i++)
															{
														    	if (x->mochila.itens[i].codigo == 0)
																{
														    		x->mochila.itens[i].codigo = y[3].codigo;
														    		x->mochila.itens[i].hp = y[3].hp;
														    		x->mochila.itens[i].xp = y[3].xp;
														    		x->mochila.itens[i].nome = y[3].nome;
														    		x->mochila.itens[i].tamanho = y[3].tamanho;
														    		x->mochila.itens[i].descricao = y[3].descricao;
														    		x->Idisp += x->mochila.itens[i].tamanho;
														    	    break;
														    	}
															}	
														}
														else
															cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }
										            else if (lugar == 3) 
													{
										             if(x->getmoedas() >=15)
														{
															x->getmoedas() += -15;
															cout << "\t\tVocê comprou: X1 Peixe-Seco.\n";
															for(i=0; i < x->imax; i++)
															{
														    	if (x->mochila.itens[i].codigo == 0)
																{
														    		x->mochila.itens[i].codigo = y[4].codigo;
														    		x->mochila.itens[i].hp = y[4].hp;
														    		x->mochila.itens[i].xp = y[4].xp;
														    		x->mochila.itens[i].nome = y[4].nome;
														    		x->mochila.itens[i].tamanho = y[4].tamanho;
														    		x->mochila.itens[i].descricao = y[4].descricao;
														    		x->Idisp += x->mochila.itens[i].tamanho;
														    	    break;
														    	}
															}	
														}
														else
															cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }     
													else if (lugar == 4) 
													{
										            if(x->getmoedas() >=10)
														{
															x->getmoedas() += -10;
															cout << "\t\tVocê comprou: X1 Carne-Salgada.\n";
															for(i=0; i < x->imax; i++)
															{
														    	if (x->mochila.itens[i].codigo == 0)
																{
														    		x->mochila.itens[i].codigo = y[5].codigo;
														    		x->mochila.itens[i].hp = y[5].hp;
														    		x->mochila.itens[i].xp = y[5].xp;
														    		x->mochila.itens[i].nome = y[5].nome;
														    		x->mochila.itens[i].tamanho = y[5].tamanho;
														    		x->mochila.itens[i].descricao = y[5].descricao;
														    		x->Idisp += x->mochila.itens[i].tamanho;
														    	    break;
														    	}
															}	
														}
														else
															cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }   
													else if (lugar == 5) 
													{
										            if(x->getmoedas() >=20)
														{
															x->getmoedas() += -20;
															cout << "\t\tVocê comprou: ";EX("X1 Vinho caseiro simples.\n");
															for(i=0; i < x->imax; i++)
															{
														    	if (x->mochila.itens[i].codigo == 0)
																{
														    		x->mochila.itens[i].codigo = y[6].codigo;
														    		x->mochila.itens[i].hp = y[6].hp;
														    		x->mochila.itens[i].xp = y[6].xp;
														    		x->mochila.itens[i].nome = y[6].nome;
														    		x->mochila.itens[i].tamanho = y[6].tamanho;
														    		x->mochila.itens[i].descricao = y[6].descricao;
														    		x->Idisp += x->mochila.itens[i].tamanho;
														    	    break;
														    	}
															}	
														}
														else
															cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }      	
										            else if (lugar == 6) 
													{
										                CaminhandoAoCentro();
														lugar=0;
														break;	
										            }  
					//FIM DAS COMPRAS DE ALIMENTOS   
												}
										        if (lugar == 0) {
										        	cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
										            ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos0.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
										        if (lugar == 1) {
										        	cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos1.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
												if (lugar == 2) {
													cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos2.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
												if (lugar == 3) {
													cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos3.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
												if (lugar == 4) {
													cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos4.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
												if (lugar == 5) {
													cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos5.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
												if (lugar == 6) {
													cout << "\n\n\n\t\tVocê possui "; cout << x->getmoedas() << " moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Mercador De Alimentos6.txt"); 
													if (myfile.is_open()){
														while (! myfile.eof() ) {
															getline (myfile,line); 
															cout << line << std::endl;}
															myfile.close();}}
											}
										}
					               	}
	//FIM DO IF VENDEDOR DE ALIMENTOS
	*/
	//INICIO DO SÁBIO
					                /*
									else if (lugar == 3) 
									{
								
											while (1) 
											{
											    if (kbhit()) 
												{
													system("cls");
													cout <<"\t\t\tVocê entra em uma pequena casa úmida e mal cuidada.\n";
													cout <<"\tDentre roupas sujas, e um cheiro de mofo de um ambiente mal iluminado,\n";
													cout <<"\té possível avistar um homem de idade sentado no centro do ambiente.\n";
													cout <<"\to homem se levanta escorando-se em sua bengala,e lhe diz:\n";
													cout <<"\t - Olá jovem viajante, o que o trás a meus aposentos?\n";
											        c = Tecla();
											  		if (c == 80) 
													{
											            lugar++;
											            if (lugar > 2)
											                lugar = 0;
													}
											        if (c == 72)
													{
											        	lugar--;
											            if (lugar < 0)
											                lugar = 2;
													}
											        if (c == 13)  
													{
											            if (lugar == 0) 
														{
											                system("cls");
															ImprimirComDelayNoFim("\t\tEu me chamo Albert, e fui o conselheiro real durante muito tempo\n");
															ImprimirComDelay("\tGostaria de conhecer minha hístória jovem?\n");
															cout << "\n\n --> - Claro senhor, com certeza\n";											
															cout << "\n\n     - Desculpe senhor, mas eu tenho que sair,\n";
															cout << "         O dever me chama.\n";
															while (1) 
															{
															    if (kbhit()) 
																{system("cls");
																	cout <<"\t\tEu me chamo Albert, e fui o conselheiro real durante muito tempo\n";
																	cout <<"\tGostaria de conhecer minha hístória jovem?\n";
																	cout << "\n\n --> - Claro senhor, com certeza\n";											
																	cout << "\n\n     - Desculpe senhor, mas eu tenho que sair,\n";
																	cout << "         O dever me chama.\n";
																
															        c = Tecla();
															  		if (c == 80) 
																	{    lugar++;
															            if (lugar > 1)
															                lugar = 0;}
															        if (c == 72)
																	{	lugar--;
															            if (lugar < 0)
															                lugar = 1;}
															        if (c == 13)  {
															        	
															            if (lugar == 0) 
																		{
															                cout << "\t\tHistoria do velho\n";
															                sair = 2;
															        		break;
															           	}
																		else if (lugar == 1) 
																		{
															        		cout << "O Homem esboça uma triste reação, e acena com a cabeça na direção da porta...\n";
															        		cout << "Tudo bem jovem, agora me deixe só.\n";
															        		sair = 1;
															        		break;
															        		
															            }   
																	}
															        if (lugar == 0) {
															            cout << "\n\n --> - Claro senhor, com certeza\n";											
																		cout << "\n\n     - Desculpe senhor, mas eu tenho que sair,\n";
																		cout << "         O dever me chama.\n";}
															        if (lugar == 1) {
																        cout << "\n\n     - Claro senhor, com certeza\n";											
																		cout << "\n\n --> - Desculpe senhor, mas eu tenho que sair,\n";
																		cout << "         O dever me chama.\n";}
															
																}
															}
											           	} 
											           	
														else if (lugar == 1) 
														{
											                x->mochila.AbrirInventario();
											                break;
											            }
											            
														else if (lugar == 2) 
														{
											                CaminhandoAGreenWitch();
															cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
															lugar=0;
															break;
											            }     
													}
											        if (lugar == 0) {
											            cout << "\n\n --> - Olá senhor, quem é você?\n";
														cout << "\n\n     Abrir o inventário\n";
														cout << "\n\n     - Desculpe o incômodo, estou de passsagem\n";}
											        if (lugar == 1) {
												        cout << "\n\n     - Olá senhor, quem é você?\n";
														cout << "\n\n --> Abrir o inventário\n";
														cout << "\n\n     - Desculpe o incômodo, estou de passsagem\n";}
													if (lugar == 2) {
												        cout << "\n\n     - Olá senhor, quem é você?\n";
														cout << "\n\n     Abrir o inventário\n";
														cout << "\n\n --> - Desculpe o incômod0, estou de passsagem\n";}
												}
											}
										} 
										else if (sair = 1)
										cout << "deixa o velho";
							        }
						            
		//FIM DO SÁBIO
					  
		//INICIO DO VENDEDOR OBSCURO              
									else if (lugar == 4) 
									{
					                    printf("\n\n\tVoce selecionou a opcao 4!\n\n\n");
					                    system("pause");
					                } 
		//FIM DO VENDEDOR OBSCURO
					                
		//VOLTANDO A GREENWITCH 
					                else if (lugar == 5) 
									{
										CaminhandoAGreenWitch();
										cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
										lugar=0;
					                    break;
					                } 
					            } 
					            if (lugar == 0) {
					                cout << "\n\n --> Ir ao Mercador de alimentos \n";
									cout << "\n\n     Ir ao Coureiro              \n";
									cout << "\n\n     Ir ao Homem da guarda       \n";
									cout << "\n\n     Ir ao Sábio                 \n";
									cout << "\n\n     Ir ao Vendedor obscuro      \n";
									cout << "\n\n     Retornar a GreenWitch       \n";}
					            if (lugar == 1) {
					           		cout << "\n\n     Ir ao Mercador de alimentos \n";
									cout << "\n\n --> Ir ao Coureiro              \n";
									cout << "\n\n     Ir ao Homem da guarda       \n";
									cout << "\n\n     Ir ao Sábio                 \n";
									cout << "\n\n     Ir ao Vendedor obscuro      \n";
									cout << "\n\n     Retornar a GreenWitch       \n";}
					            if (lugar == 2) {
									cout << "\n\n     Ir ao Mercador de alimentos \n";
									cout << "\n\n     Ir ao Coureiro              \n";
									cout << "\n\n --> Ir ao Homem da guarda       \n";
									cout << "\n\n     Ir ao Sábio                 \n";
									cout << "\n\n     Ir ao Vendedor obscuro      \n";
									cout << "\n\n     Retornar a GreenWitch       \n";}
					            if (lugar == 3) {
									cout << "\n\n     Ir ao Mercador de alimentos \n";
									cout << "\n\n     Ir ao Coureiro              \n";
									cout << "\n\n     Ir ao Homem da guarda       \n";
									cout << "\n\n --> Ir ao Sábio                 \n";
									cout << "\n\n     Ir ao Vendedor obscuro      \n";
									cout << "\n\n     Retornar a GreenWitch       \n";}
								if (lugar == 4) {
									cout << "\n\n     Ir ao Mercador de alimentos \n";
									cout << "\n\n     Ir ao Coureiro              \n";
									cout << "\n\n     Ir ao Homem da guarda       \n";
									cout << "\n\n     Ir ao Sábio                 \n";
									cout << "\n\n --> Ir ao Vendedor obscuro      \n";
									cout << "\n\n     Retornar a GreenWitch       \n";}
					            if (lugar == 5) {
									cout << "\n\n     Ir ao Mercador de alimentos \n";
									cout << "\n\n     Ir ao Coureiro              \n";
									cout << "\n\n     Ir ao Homem da guarda       \n";
									cout << "\n\n     Ir ao Sábio                 \n";
									cout << "\n\n     Ir ao Vendedor obscuro      \n";
									cout << "\n\n --> Retornar a GreenWitch       \n";}
								}
					        }
						}
	//FIM DO IF DO CENTRO
	               	 
	//IINICIO DO IF DA CASA
					else if (lugar == 1) 
					{
						lugar = 0;
	                    system("cls");
						ImprimirComDelayNoFim ("\t\t Lar, Doce Lar.\n\n\n");
						ImprimirComDelay ("\t Você entra em sua simples e aconchegante casa, feita de madeiras, palhas e pedras.\n");
						ImprimirComDelay ("\t Oque irá fazer "); cout << x->getnome() << "?\n";
						cout << "\n\n --> Ir ao Armário       \n";
						cout << "\n\n     Ir a Dispensa       \n";
						cout << "\n\n     Sentar-se a Mesa    \n";
						cout << "\n\n     Dormir              \n";
						cout << "\n\n     Abrir o Inventário  \n";
						cout << "\n\n     Sair de Casa        \n";
						while (1) 
						{
						    if (kbhit()) 
							{
						        system("cls");
							    cout << "\t Lar, Doce Lar...\n\n";
								cout << "\t Você entra em sua simples e aconchegante casa, feita de madeiras, palhas e pedras.\n";
								cout << "\t Oque irá fazer "; cout << x->getnome() << "?\n";
						        c = Tecla();
						  		if (c == 80) 
								{
						            lugar++;
						            if (lugar > 5)
						                lugar = 0;
								}
						        if (c == 72)
								{
						        	lugar--;
						            if (lugar < 0)
						                lugar = 5;
								}
						        if (c == 13)  
								{
		//INCIO DO ARMÁRIO
						            if (lugar == 0) 
									{
						                printf("\n\n\tVoce selecionou a opcao 0!\n\n\n");
						                system("pause");
						           	} 
		//FIM DO ARMÁRIO
		
		//INICIO DA DISPENSA
						           	
									else if (lugar == 1) 
									{
						                printf("\n\n\tVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
		//FIM DA DISPENSA 
		
		//INICIO SENTAR A MESA
						            
									else if (lugar == 2) 
									{
						                printf("\n\n\tVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
		//FIMN SENTAR A MESA
		
		//INICIO DORMIR				            
									else if (lugar == 3) 
									{
						                printf("\n\n\tVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
		//FIM DORMIR
						            
		//ABRIR INVENTÁRIO
									else if (lugar == 4) 
									{
						                x->mochila.AbrirInventario();
						                cout << "\t Lar, Doce Lar...\n\n";
										cout << "\t Você entra em sua simples e aconchegante casa, feita de madeiras, palhas e pedras.\n";
										cout << "\t Oque irá fazer "; cout << x->getnome() << "?\n";
						            }
						            else if (lugar == 5)
		// VOLTANDO A GREENWITCH 
									{
									system("cls");
									CaminhandoAGreenWitch();
									cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
									lugar=0;
									break;
						            }
						
						        }
						        if (lugar == 0) {
									cout << "\n\n --> Ir ao Armário       \n";
									cout << "\n\n     Ir a Dispensa       \n";
									cout << "\n\n     Sentar-se a Mesa    \n";
									cout << "\n\n     Dormir              \n";
									cout << "\n\n     Abrir o Inventário  \n";
									cout << "\n\n     Sair de Casa        \n";}
						        if (lugar == 1) {
							        cout << "\n\n     Ir ao Armário       \n";
									cout << "\n\n --> Ir a Dispensa       \n";
									cout << "\n\n     Sentar-se a Mesa    \n";
									cout << "\n\n     Dormir              \n";
									cout << "\n\n     Abrir o Inventário  \n";
									cout << "\n\n     Sair de Casa        \n";}
								if (lugar == 2) {
							        cout << "\n\n     Ir ao Armário       \n";
									cout << "\n\n     Ir a Dispensa       \n";
									cout << "\n\n --> Sentar-se a Mesa    \n";
									cout << "\n\n     Dormir              \n";
									cout << "\n\n     Abrir o Inventário  \n";
									cout << "\n\n     Sair de Casa        \n";}
								if (lugar == 3) {
							        cout << "\n\n     Ir ao Armário       \n";
									cout << "\n\n     Ir a Dispensa       \n";
									cout << "\n\n     Sentar-se a Mesa    \n";
									cout << "\n\n --> Dormir              \n";
									cout << "\n\n     Abrir o Inventário  \n";
									cout << "\n\n     Sair de Casa        \n";}
								if (lugar == 4) {
							       	cout << "\n\n     Ir ao Armário       \n";
									cout << "\n\n     Ir a Dispensa       \n";
									cout << "\n\n     Sentar-se a Mesa    \n";
									cout << "\n\n     Dormir              \n";
									cout << "\n\n --> Abrir o Inventário  \n";
									cout << "\n\n     Sair de Casa        \n";}
								if (lugar == 5) {
							  	    cout << "\n\n     Ir ao Armário       \n";
									cout << "\n\n     Ir a Dispensa       \n";
									cout << "\n\n     Sentar-se a Mesa    \n";
									cout << "\n\n     Dormir              \n";
									cout << "\n\n     Abrir o Inventário  \n";
									cout << "\n\n --> Sair de Casa        \n";}
						}
						}
	                }
	// FIM do if da minha casa
	                
	//Inicio do palácio
					else if (lugar == 2) 
					{
						system("cls");
						ImprimirComDelayNoFim ("\n\t\tVocê se aproxima de um enorme palácio feito em mármore branco.\n\n\n");
						ifstream myfile ("PD.txt"); 
						if (myfile.is_open()){
						while (! myfile.eof() ) {
						getline (myfile,line); 
						cout << line << std::endl;}
						myfile.close();}
						else cout << "Unable to open file"; 
						ImprimirComDelay ("\tÉ possível observar poucos habitantes aos arredores, e e um clima tenso no ar.\n\n\n");
						ImprimirComDelay ("\tGuardando a entrada do palácio existem 5 guardas armados.\n");
						cout << "\tOque irá fazer "; cout << x->getnome() << "?\n";
						cout << "\n\n --> Se aproximar paíficamente.\n";
						cout << "\n\n     Explorar os arredores do palácio.\n";
						cout << "\n\n     - Olá guardas, gostaria de entrar no palácio\n";
						cout << "\n\n     - Abra o caminho\n.";
						cout << "\n\n     Abrir o Inventário\n";
						cout << "\n\n     Retornar a cidade.\n";
						while (1) 
						{
						    if (kbhit()) 
							{
								system("cls");
						        cout << "\n\t\tVocê se aproxima de um enorme portão guardado por 5 guardas.\n\n\n";
						        ifstream myfile ("PD.txt"); 
								if (myfile.is_open()){
								while (! myfile.eof() ) {
								getline (myfile,line); 
								cout << line << std::endl;}
								myfile.close();}
								cout << "\tO Capitão dos guardas se aproxima de você e diz:\n";
								cout << "\t - Olá viajante, o que o tráz aqui?\n\n\n";
								cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
						        c = Tecla();
						  		if (c == 80) 
								{
						            lugar++;
						            if (lugar > 5)
						                lugar = 0;
								}
						        if (c == 72)
								{
						        	lugar--;
						            if (lugar < 0)
						                lugar = 5;
								}
						        if (c == 13)  
								{
						            if (lugar == 0) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 0!\n\n\n");
						                system("pause");
						           	} 
						           	
									else if (lugar == 1) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
						            
									else if (lugar == 2) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
						            else if (lugar == 3) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }     
									else if (lugar == 4) 
									
	//abrir o inventário
									{
									x->mochila.AbrirInventario();
									cout << "\n\t\tVocê se aproxima de um enorme portão guardado por 5 guardas.\n\n\n";
							        ifstream myfile ("PD.txt"); 
									if (myfile.is_open())
									{
										while (! myfile.eof() ) 
										{
											getline (myfile,line); 
											cout << line << std::endl;
										}
										myfile.close();
									}
									cout << "\tO Capitão dos guardas se aproxima de você e diz:\n";
									cout << "\t - Olá viajante, o que o tráz aqui?\n\n\n";
									cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";	
						            }     	
						            else if (lugar == 5) 
									{
						                CaminhandoAGreenWitch();
										cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
										lugar=0;
										break;
						            }     
								}
						        if (lugar == 0) {
						            cout << "\n\n --> Se aproximar paíficamente.\n";
									cout << "\n\n     Explorar os arredores do palácio.\n";
									cout << "\n\n     - Olá guardas, gostaria de entrar no palácio\n";
									cout << "\n\n     - Abra o caminho\n.";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Retornar a cidade.\n";}
						        if (lugar == 1) {
							        cout << "\n\n     Se aproximar paíficamente.\n";
									cout << "\n\n --> Explorar os arredores do palácio.\n";
									cout << "\n\n     - Olá guardas, gostaria de entrar no palácio\n";
									cout << "\n\n     - Abra o caminho\n.";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Retornar a cidade.\n";}
								if (lugar == 2) {
							        cout << "\n\n     Se aproximar paíficamente.\n";
									cout << "\n\n     Explorar os arredores do palácio.\n";
									cout << "\n\n --> - Olá guardas, gostaria de entrar no palácio\n";
									cout << "\n\n     - Abra o caminho\n.";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Retornar a cidade.\n";}
								if (lugar == 3) {
							        cout << "\n\n     Se aproximar paíficamente.\n";
									cout << "\n\n     Explorar os arredores do palácio.\n";
									cout << "\n\n     - Olá guardas, gostaria de entrar no palácio\n";
									cout << "\n\n --> - Abra o caminho\n.";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Retornar a cidade.\n";}
								if (lugar == 4) {
							        cout << "\n\n     Se aproximar paíficamente.\n";
									cout << "\n\n     Explorar os arredores do palácio.\n";
									cout << "\n\n     - Olá guardas, gostaria de entrar no palácio\n";
									cout << "\n\n     - Abra o caminho\n.";
									cout << "\n\n --> Abrir o Inventário\n";
									cout << "\n\n     Retornar a cidade.\n";}
								if (lugar == 5) {
							     	cout << "\n\n     Se aproximar paíficamente.\n";
									cout << "\n\n     Explorar os arredores do palácio.\n";
									cout << "\n\n     - Olá guardas, gostaria de entrar no palácio\n";
									cout << "\n\n     - Abra o caminho\n.";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n --> Retornar a cidade.\n";}
							}
						}
	                }
	// FIM do palácio
	
	// começo do ferreiro
					else if (lugar == 3) 
					{
	                    system("cls");
						ImprimirComDelay ("\t\tVocê se aproxima de uma ferraria simples e antiga feita sob pedras e madeiras.\n\n\n");
						ImprimirComDelay ("\t Um homem grande e robusto vestindo um avental de couro se aproxima de você.\n");
						ImprimirComDelay ("\t Com sua longa barba e seus olhos cansados ele pergunta :\n");
						ImprimirComDelay ("\t - Olá viajante, o que o tráz aqui?\n\n");
						cout << "\n\n --> - Olá, gostaria de convesar sobre equipamentos \n";
						cout << "\n\n     - Apenas estou de passagem, obrigado  \n";
						cout << "\n\n     - Quem é você?, sou novo por aqui  \n";
						while (1) 
						{
						    if (kbhit()) 
							{
						        system("cls");
							    cout << "\t\tVocê se aproxima de uma ferraria simples e antiga feita sob pedras e madeiras.\n\n\n";
								cout << "\t Um homem grande e robusto vestindo um avental de couro se aproxima de você.\n";
								cout << "\t Com sua longa barba e seus olhos cansados ele pergunta :\n";
								cout << "\t - Olá viajante, o que o tráz aqui?\n\n";
						        c = Tecla();
						  		if (c == 80) 
								{
						            lugar++;
						            if (lugar > 2)
						                lugar = 0;
								}
						        if (c == 72)
								{
						        	lugar--;
						            if (lugar < 0)
						                lugar = 2;
								}
						        if (c == 13)  
								{
						            if (lugar == 0) 
									{
						                system("cls");
										ImprimirComDelay ("Você possui "); cout << x->getmoedas() << "moedas.\n";
										ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro0.txt"); 
										if (myfile.is_open()){
										while (! myfile.eof() ) {
										getline (myfile,line); 
										cout << line << std::endl;}
										myfile.close();}
										lugar = 0;
										while (1) 
										{
										    if (kbhit()) 
											{
												system("cls");
										        c = Tecla();
										  		if (c == 80) 
												{
										            lugar++;
										            if (lugar > 6)
										                lugar = 0;
												}
										        if (c == 72)
												{
										        	lugar--;
										            if (lugar < 0)
										                lugar = 6;
												}
										        if (c == 13)  
												{
										            if (lugar == 0) 
													{
										                if(x->getmoedas() >=4)
										                {
										                	x->getmoedas() += -4;
										                	cout << "\t\tVocê comprou: X1 espada de ferro enferrujada.\n";
										                }
										                else
										                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										           	} 
										           	
													else if (lugar == 1) 
													{
										                if(x->getmoedas() >=5)
										                {
										                	x->getmoedas() += -5;
										                	cout << "\t\tVocê comprou: X1 Escudo de lata em farrapos.\n";
										                }
										                	
										                else
										                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }
										            
													else if (lugar == 2) 
													{
										                if(x->getmoedas() >=8)
										                {
										                	x->getmoedas() += -8;
										                	cout << "\t\tVocê comprou: X1 Ferradura simples para cavalos.\n";
										                }
										                else
										                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }
										            else if (lugar == 3) 
													{
										                if(x->getmoedas() >=15)
										                {
										                	x->getmoedas() += -15;
										                	cout << "\t\tVocê comprou: X1 Machado antigo do aprendiz.\n";
										                }
										                else
										                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }     
													else if (lugar == 4) 
													{
										                if(x->getmoedas() >=10)
										                {
										                	x->getmoedas() += -10;
										                	cout << "\t\tVocê comprou: X5 Flechas simples.\n";
										                }
										                else
										                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }   
													else if (lugar == 5) 
													{
										                if(x->getmoedas() >=20)
										                {
										                	x->getmoedas() += -20;
										                	cout << "\t\tVocê comprou: X1 Vinho Ombreiras de ferro de GreenWotch.\n";
										                }
										                else
										                	cout <<"\n\n\n\t\tVocê não possui moedas suficientes,\n ou seu inventário está cheio..\n";
										            }      	
										            else if (lugar == 6) 
													{
										                CaminhandoAoCentro();
														lugar=0;
														break;
														break;
										            }     
												}
										        if (lugar == 0) {
										        	cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
										            ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro0.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
										        if (lugar == 1) {
										        	cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro1.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
												if (lugar == 2) {
													cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro2.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
												if (lugar == 3) {
													cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro3.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
												if (lugar == 4) {
													cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro4.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
												if (lugar == 5) {
													cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro5.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
												if (lugar == 6) {
													cout << "\n\t\tVocê possui "; cout << x->getmoedas() << "moedas.\n";
											        ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro6.txt"); 
													if (myfile.is_open()){
													while (! myfile.eof() ) {
													getline (myfile,line); 
													cout << line << std::endl;}
													myfile.close();}}
											}
										}
										
						           	} 
						           	
									else if (lugar == 1) 
									{
						                cout << "- Eu me chamo Gondor, sou o D:\\Em Dev\\The Caisamgas Game\\TXTS\\Ferreiro d cidade de GreenWittch.\n";
						            }
						            
									else if (lugar == 2) 
									{
						            CaminhandoAGreenWitch();
						           	cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
						           	lugar=0;
						            break;
						            }
						
						        }
						        if (lugar == 0) {
						            cout << "\n\n --> - Olá, gostaria de convesar sobre equipamentos \n";
									cout << "\n\n     - Quem é você?, sou novo por aqui  \n";
									cout << "\n\n     - Apenas estou de passagem, obrigado  \n";}
						        if (lugar == 1) {
							       	cout << "\n\n     - Olá, gostaria de convesar sobre equipamentos \n";
									cout << "\n\n --> - Quem é você?, sou novo por aqui  \n";
									cout << "\n\n     - Apenas estou de passagem, obrigado  \n";}
								if (lugar == 2) {
							       	cout << "\n\n     - Olá, gostaria de convesar sobre equipamentos \n";
									cout << "\n\n     - Quem é você?, sou novo por aqui  \n";
									cout << "\n\n --> - Apenas estou de passagem, obrigado  \n";}
							}
						}
	                } 
	// fim do ferreiro
	
	// Inicio da catedral
					else if (lugar == 4) 
					{
	                    system("cls");
						ImprimirComDelayNoFim("\t\tVocê entra em uma catedral grande e luxuosa...\n\n\n");
						ImprimirComDelay ("\tÉ possível notar diversos entalhes e esculturas nas paredes, candelabros acesos e um homem ajoelhado em frente ao altar.\n");
						ImprimirComDelay ("\tNão distante, é possível ver uma fonte jorrando água fresca...\n");
						ImprimirComDelayNoFim("\tE ao fundo é possível ouvir uma doce e suave voz entoando uma canção...\n");
						ImprimirComDelay("\tOque irá fazer "); cout << x->getnome() << "?\n";
						cout << "\n\n --> Se aproximar do homem\n";
						cout << "\n\n     Abrir o Inventário\n";
						cout << "\n\n     Ir até a fonte\n";
						cout << "\n\n     Ir até o canto\n";
						cout << "\n\n     Voltar para a cidade \n";
						while (1) 
						{
						    if (kbhit()) 
							{
								system("cls");
						        cout << "\t\tVocê entra em uma catedral grande e luxuosa...\n\n\n";
								cout << "\tÉ possível notar diversos entalhes e esculturas nas paredes, candelabros acesos e um homem ajoelhado em frente ao altar.\n";
								cout << "\tNão distante, é possível ver uma fonte jorrando água fresca...\n";
								cout << "\tE ao fundo é possível ouvir uma doce e suave voz entoando uma canção...\n";
								cout << "\tOque irá fazer "; cout << x->getnome() << "?\n";
						        c = Tecla();
						  		if (c == 80) 
								{
						            lugar++;
						            if (lugar > 4)
						                lugar = 0;
								}
						        if (c == 72)
								{
						        	lugar--;
						            if (lugar < 0)
						                lugar = 4;
								}
						        if (c == 13)  
								{
						            if (lugar == 0) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 0!\n\n\n");
						                system("pause");
						           	} 
						           	
									else if (lugar == 1) 
									{
						                x->mochila.AbrirInventario();
						            }
						            
									else if (lugar == 2) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
						            else if (lugar == 3) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }     
									else if (lugar == 4) 
									{
						                CaminhandoAGreenWitch();
										cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
										lugar=0;
										break;
						            }     	
								}
						        if (lugar == 0) {
						            cout << "\n\n --> Se aproximar do homem\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Ir até a fonte\n";
									cout << "\n\n     Ir até o canto\n";
									cout << "\n\n     Voltar para a cidade \n";}
						        if (lugar == 1) {
							        cout << "\n\n     Se aproximar do homem\n";
									cout << "\n\n --> Abrir o Inventário\n";
									cout << "\n\n     Ir até a fonte\n";
									cout << "\n\n     Ir até o canto\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 2) {
							        cout << "\n\n     Se aproximar do homem\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n --> Ir até a fonte\n";
									cout << "\n\n     Ir até o canto\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 3) {
							     	cout << "\n\n     Se aproximar do homem\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Ir até a fonte\n";
									cout << "\n\n --> Ir até o canto\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 4) {
							     	cout << "\n\n     Se aproximar do homem\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Ir até a fonte\n";
									cout << "\n\n     Ir até o canto\n";
									cout << "\n\n --> Voltar para a cidade \n";}
							}
						}
	                } 
	// FIM da catedral     
	                
	// Inicio do portão da cidade
					else if (lugar == 5) 
					{
	                    system("cls");
						ImprimirComDelayNoFim ("\n\t\tVocê se aproxima de um enorme portão guardado por 5 guardas.\n\n\n");
						ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\PortaoDeGreenWitch.txt"); 
						if (myfile.is_open()){
						while (! myfile.eof() ) {
						getline (myfile,line); 
						cout << line << std::endl;}
						myfile.close();}
						else cout << "Unable to open file"; 
						ImprimirComDelay ("\tO Capitão dos guardas se aproxima de você e diz:\n");
						ImprimirComDelay ("\t - Olá viajante, o que o tráz aqui?\n");
						cout << "\n\n --> - Olá senhor, poderia me explicar do que se trata este lugar?\n";
						cout << "\n\n     - Olá senhor, poderia abrir o portão da cidade?\n";
						cout << "\n\n     - Abra o portão da cidade.?\n";
						cout << "\n\n     Abrir o Inventário\n";
						cout << "\n\n     - Estou apenas observando.\n";
						while (1) 
						{
						    if (kbhit()) 
							{
								system("cls");
						        cout << "\n\t\tVocê se aproxima de um enorme portão guardado por 5 guardas.\n\n\n";
								cout << "\tO Capitão dos guardas se aproxima de você e diz:\n";
								cout << "\t - Olá viajante, o que o tráz aqui?\n";
								ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\PortaoDeGreenWitch.txt"); 
								if (myfile.is_open()){
								while (! myfile.eof() ) {
								getline (myfile,line); 
								cout << line << std::endl;}
								myfile.close();}
								else cout << "Unable to open file";
						        c = Tecla();
						  		if (c == 80) 
								{
						            lugar++;
						            if (lugar > 4)
						                lugar = 0;
								}
						        if (c == 72)
								{
						        	lugar--;
						            if (lugar < 0)
						                lugar = 4;
								}
						        if (c == 13)  
								{
						            if (lugar == 0) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 0!\n\n\n");
						                system("pause");
						           	} 
						           	
									else if (lugar == 1) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
						            
									else if (lugar == 2) 
									{
						                cout << "É um local arriscado...";
						                pause();
						            }
						            else if (lugar == 3) 
									{
						                x->mochila.AbrirInventario();
								        cout << "\n\t\tVocê se aproxima de um enorme portão guardado por 5 guardas.\n\n\n";
										cout << "\tO Capitão dos guardas se aproxima de você e diz:\n";
										cout << "\t - Olá viajante, o que o tráz aqui?\n";
										ifstream myfile ("D:\\Em Dev\\The Caisamgas Game\\TXTS\\PortaoDeGreenWitch.txt"); 
										if (myfile.is_open()){
										while (! myfile.eof() ) {
										getline (myfile,line); 
										cout << line << std::endl;}
										myfile.close();}
						            }     
									else if (lugar == 4) 
									{
						                CaminhandoAGreenWitch();
										cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
										lugar=0;
										break;
						            }     	
								}
						        if (lugar == 0) {
						            cout << "\n\n --> - Olá senhor, poderia me explicar do que se trata este lugar?\n";
									cout << "\n\n     - Olá senhor, poderia abrir o portão da cidade?\n";
									cout << "\n\n     - Abra o portão da cidade.?\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     - Estou apenas observando.\n";}
						        if (lugar == 1) {
							        cout << "\n\n     - Olá senhor, poderia me explicar do que se trata este lugar?\n";
									cout << "\n\n --> - Olá senhor, poderia abrir o portão da cidade?\n";
									cout << "\n\n     - Abra o portão da cidade.?\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     - Estou apenas observando.\n";}
								if (lugar == 2) {
							        cout << "\n\n     - Olá senhor, poderia me explicar do que se trata este lugar?\n";
									cout << "\n\n     - Olá senhor, poderia abrir o portão da cidade?\n";
									cout << "\n\n --> - Abra o portão da cidade.?\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     - Estou apenas observando.\n";}
								if (lugar == 3) {
							     	cout << "\n\n     - Olá senhor, poderia me explicar do que se trata este lugar?\n";
									cout << "\n\n     - Olá senhor, poderia abrir o portão da cidade?\n";
									cout << "\n\n     - Abra o portão da cidade.?\n";
									cout << "\n\n --> Abrir o Inventário\n";
									cout << "\n\n     - Estou apenas observando.\n";}
								if (lugar == 4) {
							     	cout << "\n\n     - Olá senhor, poderia me explicar do que se trata este lugar?\n";
									cout << "\n\n     - Olá senhor, poderia abrir o portão da cidade?\n";
									cout << "\n\n     - Abra o portão da cidade.?\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n --> - Estou apenas observando.\n";}
							}
						}
	                }
	// FIM do portão da cidade
	
	// inicio da taverna
	                else if (lugar == 6) 
					{
	                    system("cls");
						ImprimirComDelay ("\t\tVocê entra em uma taverna barulhenta e movimentada...\n\n\n");
						ImprimirComDelay ("\tHá vários homens bebendo e conversando, bardos cantando e nativos se alimentando\n");
						ImprimirComDelay ("\tÉ possível ver um grande balcão, diversas mesas e uma pequena escada ao longe \n");
						ImprimirComDelay ("\tOque irá fazer "); cout << x->getnome() << "?\n";
						cout << "\n\n --> Ir até o balcão\n";
						cout << "\n\n     Abrir o Inventário\n";
						cout << "\n\n     Se aproximar de alguns bêbados\n";
						cout << "\n\n     Se aproximar dos Bardos\n";
						cout << "\n\n     Se aproximar do balcão\n";
						cout << "\n\n     Voltar para a cidade \n";
						while (1) 
						{
						    if (kbhit()) 
							{
								system("cls");
						        cout << "\t\tVocê entra em uma taverna barulhenta e movimentada...\n\n\n";
								cout << "\tHá vários homens bebendo e conversando, bardos cantando e nativos se alimentando\n";
								cout << "\tÉ possível ver um grande balcão, diversas mesas e uma pequena escada ao longe \n";
								cout << "\tOque irá fazer "; cout << x->getnome() << "?\n";
						        c = Tecla();
						  		if (c == 80) 
								{
						            lugar++;
						            if (lugar > 5)
						                lugar = 0;
								}
						        if (c == 72)
								{
						        	lugar--;
						            if (lugar < 0)
						                lugar = 5;
								}
						        if (c == 13)  
								{
						            if (lugar == 0) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 0!\n\n\n");
						                system("pause");
						           	} 
						           	
									else if (lugar == 1) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
						            
									else if (lugar == 2) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }
						            else if (lugar == 3) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }     
									else if (lugar == 4) 
									{
						                printf("\n\n\n\nVoce selecionou a opcao 1!\n\n\n");
						                system("pause");
						            }    
									else if (lugar == 5) 
									{
						                CaminhandoAGreenWitch();
						                cout << "\tOnde gostaria de ir "; cout << x->getnome() << "?\n";
						                lugar=0;
						                break;
						            }    	
								}
						        if (lugar == 0) {
						            cout << "\n\n --> Ir até o balcão\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Se aproximar de alguns bêbados\n";
									cout << "\n\n     Se aproximar dos Bardos\n";
									cout << "\n\n     Se aproximar da escada\n";
									cout << "\n\n     Voltar para a cidade \n";}
						        if (lugar == 1) {
							        cout << "\n\n     Ir até o balcão\n";
									cout << "\n\n --> Abrir o Inventário\n";
									cout << "\n\n     Se aproximar de alguns bêbados\n";
									cout << "\n\n     Se aproximar dos Bardos\n";
									cout << "\n\n     Se aproximar da escada\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 2) {
							        cout << "\n\n     Ir até o balcão\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n --> Se aproximar de alguns bêbados\n";
									cout << "\n\n     Se aproximar dos Bardos\n";
									cout << "\n\n     Se aproximar da escada\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 3) {
							     	cout << "\n\n     Ir até o balcão\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Se aproximar de alguns bêbados\n";
									cout << "\n\n --> Se aproximar dos Bardos\n";
									cout << "\n\n     Se aproximar da escada\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 4) {
							     	cout << "\n\n     Ir até o balcão\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Se aproximar de alguns bêbados\n";
									cout << "\n\n     Se aproximar dos Bardos\n";
									cout << "\n\n --> Se aproximar da escada\n";
									cout << "\n\n     Voltar para a cidade \n";}
								if (lugar == 5) {
							     	cout << "\n\n     Ir até o balcão\n";
									cout << "\n\n     Abrir o Inventário\n";
									cout << "\n\n     Se aproximar de alguns bêbados\n";
									cout << "\n\n     Se aproximar dos Bardos\n";
									cout << "\n\n     Se aproximar da escada\n";
									cout << "\n\n --> Voltar para a cidade \n";}
							}
						}
	//FIM da taverna
	
	                }
	            }
	            if (lugar == 0) {
	                cout << "\n\n --> Ir ao Centro da cidade \n";
					cout << "\n\n     Ir a sua casa          \n";
					cout << "\n\n     Ir ao Palácio real     \n";
					cout << "\n\n     Ir ao Ferreiro         \n";
					cout << "\n\n     Ir a Catedral          \n";
					cout << "\n\n     Ir ao Portão da Cidade \n";
					cout << "\n\n     Ir a Taverna           \n";}
	            if (lugar == 1) {
	           		cout << "\n\n     Ir ao Centro da cidade \n";
					cout << "\n\n --> Ir a sua casa          \n";
					cout << "\n\n     Ir ao Palácio real     \n";
					cout << "\n\n     Ir ao Ferreiro         \n";
					cout << "\n\n     Ir a Catedral          \n";
					cout << "\n\n     Ir ao Portão da Cidade \n";
					cout << "\n\n     Ir a Taverna           \n";}
	            if (lugar == 2) {
					cout << "\n\n     Ir ao Centro da cidade \n";
					cout << "\n\n     Ir a sua casa          \n";
					cout << "\n\n --> Ir ao Palácio real     \n";
					cout << "\n\n     Ir ao Ferreiro         \n";
					cout << "\n\n     Ir a Catedral          \n";
					cout << "\n\n     Ir ao Portão da Cidade \n";
					cout << "\n\n     Ir a Taverna           \n";}
	            if (lugar == 3) {
					cout << "\n\n     Ir ao Centro da cidade \n";
					cout << "\n\n     Ir a sua casa          \n";
					cout << "\n\n     Ir ao Palácio real     \n";
					cout << "\n\n --> Ir ao Ferreiro         \n";
					cout << "\n\n     Ir a Catedral          \n";
					cout << "\n\n     Ir ao Portão da Cidade \n";
					cout << "\n\n     Ir a Taverna           \n";}
	            if (lugar == 4) {
					cout << "\n\n     Ir ao Centro da cidade \n";
					cout << "\n\n     Ir a sua casa          \n";
					cout << "\n\n     Ir ao Palácio real     \n";
					cout << "\n\n     Ir ao Ferreiro         \n";
					cout << "\n\n --> Ir a Catedral          \n";
					cout << "\n\n     Ir ao Portão da Cidade \n";
					cout << "\n\n     Ir a Taverna           \n";}
	            if (lugar == 5) {
					cout << "\n\n     Ir ao Centro da cidade \n";
					cout << "\n\n     Ir a sua casa          \n";
					cout << "\n\n     Ir ao Palácio real     \n";
					cout << "\n\n     Ir ao Ferreiro         \n";
					cout << "\n\n     Ir a Catedral          \n";
					cout << "\n\n --> Ir ao Portão da Cidade \n";
					cout << "\n\n     Ir a Taverna           \n";}
				if (lugar == 6) {
					cout << "\n\n     Ir ao Centro da cidade \n";
					cout << "\n\n     Ir a sua casa          \n";
					cout << "\n\n     Ir ao Palácio real     \n";
					cout << "\n\n     Ir ao Ferreiro         \n";
					cout << "\n\n     Ir a Catedral          \n";
					cout << "\n\n     Ir ao Portão da Cidade \n";
					cout << "\n\n --> Ir a Taverna           \n";}
				}
	        }
	    }
	    */
}
