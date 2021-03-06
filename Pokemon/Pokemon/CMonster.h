#ifndef _CMONSTER_H_
#define _CMONSTER_H_

#include "CAttaque.h"

#include <iostream>
#include <vector>

class CMonster
{
protected:
	int m_id;
	short m_type;
	std::string m_nom;
	short m_HP;
	short m_vitesse;
	short m_attaque;
	short m_attaque_act;
	std::vector<CAttaque*> m_attaques;
	short m_defense;
	short m_etat;
	short m_etat_tours;
	std::vector<short> m_force;
	std::vector<CAttaque*> m_CS;

public:
	CMonster();
	CMonster(int id, short type, std::string nom, short HP, short vit, short att, std::vector<CAttaque*> attaques, short def);
	~CMonster();

	int getId();
	short getType();
	std::string getNom();
	short getHP();
	short getVitesse();
	short getAttaque();
	short getAttaqueAct();
	short getDefense();
	short getEtat();
	short getEtatTours();
	std::vector<short> getForce();
	std::vector<CAttaque*> getCS();

	void sestId(int id);
	void setType(short type);
	void setNom(std::string nom);
	void setHP(short HP);
	void setVitesse(short vitesse);
	void setAttaque(short attaque);
	void setAttaqueAct(short attaqueAct);
	void setDefense(short defense);
	void setEtat(short etat);
	void setEtatTours(short tours);
	void setCS(CAttaque* cs);

	short updateEtat();
};

#endif

