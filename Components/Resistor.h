#pragma once
#include "Component.h"

class Resistor:public Component
{
<<<<<<< Updated upstream
	/*string res_name;*/
public:
	Resistor(GraphicsInfo *r_GfxInfo,string label);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	virtual void savecommponnent(fstream& file) ;

=======
	
public:
	Resistor(GraphicsInfo *r_GfxInfo);
	Resistor();
	
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	virtual void Load(string label, int value);
>>>>>>> Stashed changes
};
