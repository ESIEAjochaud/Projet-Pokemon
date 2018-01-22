#ifndef _CFIRE_H
#define _CFIRE_H

#include "CMonster.h"

class CFire :public CMonster
{
protected:
	std::vector<short> m_force = { 2 };

public:
	void burn(CMonster* monstre);
};

#endif // !_CFIRE_H
