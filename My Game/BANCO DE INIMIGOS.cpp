habilidades
habilidadespassivas
Item loot[9];

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
		Monstros[3].setarmadura(x.ModDificuldade(x.getDificuldade(),3));
		Monstros[3].setatk(x.ModDificuldade(x.getDificuldade(),14));
		Monstros[3].setchancedeesquiva(1);
		Monstros[3].setHPm(Monstros[3].getHP());
		Monstros[3].setMPm(Monstros[3].getMP());
		Monstros[3].setenergiam(Monstros[3].getenergia());
		Monstros[3].setDAXP(40);
		Monstros[3].setDAREP(3);
		Monstros[3].setDAMOEDAS(0);	
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
