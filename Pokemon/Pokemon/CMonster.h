#ifndef _CMONSTER_H
#define _CMONSTER_H

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
	short m_defense;
	short m_etat;
	short m_etat_tours;
	std::vector<short> m_force;
	std::vector<short> m_faiblesse;

public:
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

	void setType(short type);
	void setNom(std::string nom);
	void setHP(short HP);
	void setVitesse(short vitesse);
	void setAttaque(short attaque);
	void setAttaqueAct(short attaqueAct);
	void setDefense(short defense);
	void setEtat(short etat);
	void setEtatTours(short tours);

	short updateEtat();
	virtual void attaqueS(CMonster* monstre);
};

#endif // !_CMONSTER_H
