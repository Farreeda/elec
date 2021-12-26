#pragma once
#include"Resistor.h"

class Buzzer :public Component
{
public:
	Buzzer(GraphicsInfo* r_GfxInfo,string b);
	virtual void Operate();
	virtual void Draw(UI*);
	virtual void savecommponnent(fstream& file);
};