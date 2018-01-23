#ifndef _CFIRE_H_
#define _CFIRE_H_

#include "CMonster.h"

class CFire :public CMonster
{
protected:
	std::vector<short> m_force = { 2 };

public:
	void burn(CMonster* monstre);
};

#endif
