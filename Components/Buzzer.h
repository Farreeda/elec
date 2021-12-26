#pragma once
#include"Resistor.h"

class Buzzer :public Component
{
	Resistor internalres;
public:
	Buzzer(GraphicsInfo* r_GfxInfo);
	virtual void Operate();
	virtual void Draw(UI*);
	virtual void Load(string label, int value);
};