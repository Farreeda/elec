#include "Battery.h"
<<<<<<< Updated upstream
#include <iostream>
#include <string>
#include <fstream>
Battery::Battery(GraphicsInfo* r_GfxInfo,string bname) :Component(r_GfxInfo)
{
	m_Label = bname;
}
=======
#include"../ApplicationManager.h"
#include"../Actions/Action.h"
#include"../UI/UI.h"
Battery::Battery(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{}
>>>>>>> Stashed changes

void Battery::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
	pUI->DrawBattery(*m_pGfxInfo,m_Label); //update to draw resistor

}

void Battery::Operate()
{
	
	

}
<<<<<<< Updated upstream
void  Battery::savecommponnent(fstream& file) {

	file << "Switch \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
=======
void Battery::Load(string label, int value) {
	setlabel(label);
	//setSourceVoltage(value);
>>>>>>> Stashed changes
}