#ifndef _CGRASS_H
#define _CGRASS_H

#include "CMonster.h"

class CGrass :public CMonster
{
protected:
	std::vector<short> m_force = { 3 };
};

#endif