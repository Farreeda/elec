#include "Buzzer.h"

Buzzer::Buzzer(GraphicsInfo* r_GfxInfo):Component(r_GfxInfo)
{}

void Buzzer::Draw(UI* pUI)
{
	pUI->DrawBuzzer(*m_pGfxInfo); 

}

void Buzzer::Operate()
{

}
void Buzzer::Load(string label, int value) {
	setlabel(label);
	resistance = value;


	
}