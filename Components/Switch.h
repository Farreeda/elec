#pragma once
#include "Component.h"

class Switch :public Component
{
public:
	Switch(GraphicsInfo* r_GfxInfo,string sname);
	virtual void Operate();	//open or close the circuit
	virtual void Draw(UI*);	//Draws the switch
	virtual void savecommponnent(fstream& file);
};
 
