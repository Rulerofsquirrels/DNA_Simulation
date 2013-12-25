#include "stdafx.h"
#include "DNATile.h"
/*
DNA Tile
-a list of rules
-functionality that determines 

*/

DNATile::DNATile(void)
{
	//when a tile is created it has four sides, all null and then we need to set each side.
	label nullState = makeLabel(-1,-1,p_null);	
	//set sides
	setSide(north,nullState);
	setSide(east,nullState);
	setSide(south,nullState);
	setSide(west,nullState);
}


DNATile::~DNATile(void)
{
}

bool DNATile::setSide(directions selectedSide, label state)
{
	try{
		sideStates[selectedSide].activelabel = state;
		return true;//if successfully set
	}
	catch(...)
	{
		return false; //if failed to set
	}

}

label DNATile::makeLabel(long Strength, int Label, polarity Pol)
{
	try
	{
		label temp;
		temp.strength = Strength;
		temp.Label = Label;
		temp.pol = Pol;
		return temp;
	}
	catch(...)
	{
		std::printf("error making label");
	}

}
