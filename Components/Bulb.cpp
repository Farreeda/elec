#include "Bulb.h"
<<<<<<< Updated upstream
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
=======
Bulb::Bulb(GraphicsInfo* r__GfxInfo):Component(r__GfxInfo) {
	

}
/*Bulb::Bulb(GraphicsInfo* r_GfxInfo, bool IsOn) : Resistor(r_GfxInfo)
{
	this->IsOn = IsOn;
}*/

void Bulb::Draw(UI* pUI)
{

	//pUI->DrawBulb(*m_pGfxInfo,IsSelected);
	pUI->DrawBulb(*m_pGfxInfo);


>>>>>>> Stashed changes

}

void Bulb::Operate()
{

}
<<<<<<< Updated upstream
void  Bulb::savecommponnent(fstream& file) {

	file << "Bulb \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
=======
void Bulb::Load(string label, int value) {
	resistance = value;
	setlabel(label);
>>>>>>> Stashed changes
}