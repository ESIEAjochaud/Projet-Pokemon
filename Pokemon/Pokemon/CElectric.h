#ifndef _CELECTRIC_H
#define _CELECTRIC_H

#include "CMonster.h"

class CElectric:public CMonster
{
protected:
	std::vector<short> m_force = { 0 };
	float m_paralysis;

	bool paralyze();

public:
	float getParalysis();

	void setParalysis(float paralysis);
};

#endif // !_CELECTRIC_H