#pragma once
#include <vector>	

struct label
{
	long strength;
	int Label;
	//0 is our null value (our blank labeled side for instance)
};

enum polarity
{
	p_pos = 0,
	p_neg,
	p_null
};

enum directions
{
	north = 0,
	east,
	south,
	west,
	self
};

enum types
{
	t_Initiation = 0,
	t_Activation,
	t_Transmission
};

struct m_sRules
{
	label labelName;
	int type;
};

struct side
{
	polarity s_pol;
	label activelabel;

};

class DNATile
{
public:
	DNATile(void);
	~DNATile(void);

private:
	
	label activeSides[4]; 

};

