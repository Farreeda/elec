#pragma once
#include "Component.h"

class Switch :public Component
{
public:
<<<<<<< Updated upstream
	Switch(GraphicsInfo* r_GfxInfo,string sname);
	virtual void Operate();	//open or close the circuit
	virtual void Draw(UI*);	//Draws the switch
	virtual void savecommponnent(fstream& file);
=======
	Switch(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//open or close the circuit
	virtual void Draw(UI*);	//Draws the switch
	virtual void Load(string label, int value);
>>>>>>> Stashed changes
};
 
