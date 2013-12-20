#pragma once
#include <vector>	

struct m_sLabel
{
	CString labeName;
	long lStrength;
};

class DNATile
{
public:
	DNATile(void);
	~DNATile(void);

private:
	std::vector <m_sLabel,int> rules; 

};

