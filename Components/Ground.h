#pragma once
#include "Component.h"

class Ground :public Component
{
public:
	Ground(GraphicsInfo* r_GfxInfo,string g);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	virtual void savecommponnent(fstream& file);
};