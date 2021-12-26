#pragma once
#include "Component.h"

class Resistor:public Component
{
	/*string res_name;*/
public:
	Resistor(GraphicsInfo *r_GfxInfo,string label);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	virtual void savecommponnent(fstream& file) ;

};
