#pragma once
#include "Component.h"

class Battery :public Component
{
public:
	Battery(GraphicsInfo* r_GfxInfo,string b);
	virtual void Operate();	//Calculates the volt on both terminals
<<<<<<< Updated upstream
	virtual void Draw(UI*);	//Draws the resistor
	virtual void savecommponnent(fstream& file);
=======
	virtual void Draw(UI*);	
	//Draws the resistor
	virtual void Load(string label, int value);
>>>>>>> Stashed changes
};
