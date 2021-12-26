#pragma once
#include "Component.h"

class fuse :public Component
{
public:
<<<<<<< Updated upstream
	fuse(GraphicsInfo* r_GfxInfo,string f);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	virtual void savecommponnent(fstream& file);
=======
	fuse(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	virtual void Load(string label, int value);
>>>>>>> Stashed changes
};