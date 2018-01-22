#ifndef _CROCK_H
#define _CROCK_H

#include "CMonster.h"

class CRock:public CMonster
{
protected:
	std::vector<short> m_force = { 4 };
	bool m_cache;

public:
	bool getCache();

	void setCache(bool cache);
};

#endif // !_CROCK_H
