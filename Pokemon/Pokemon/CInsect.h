#ifndef _CINSECT_H
#define _CINSECT_H

#include "CGrass.h"

class CInsect :public CGrass
{
public:
	void poison(CMonster* monstre);
};

#endif