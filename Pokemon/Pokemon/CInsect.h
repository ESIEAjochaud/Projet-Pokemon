#ifndef _CINSECT_H_
#define _CINSECT_H_

#include "CGrass.h"

class CInsect :public CGrass
{
public:
	void poison(CMonster* monstre);
};

#endif