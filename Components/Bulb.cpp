#include "Bulb.h"
#include <iostream>
#include <string>
#include <fstream>
Bulb::Bulb(GraphicsInfo* r_GfxInfo,bool IsOn):Component(r_GfxInfo)/*: Resistor(r_GfxInfo, label)*/
{
	this->IsOn = IsOn;
}

void Bulb::Draw(UI* pUI)
{
	pUI->DrawBulb(*m_pGfxInfo, m_Label,IsSelected,IsOn);

}

void Bulb::Operate()
{

}
void  Bulb::savecommponnent(fstream& file) {

	file << "Bulb \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
}