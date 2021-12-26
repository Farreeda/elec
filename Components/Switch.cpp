#include "Switch.h"
<<<<<<< Updated upstream
#include <iostream>
#include <string>
#include <fstream>
Switch::Switch(GraphicsInfo* r_GfxInfo,string sname) :Component(r_GfxInfo)
{
	m_Label = sname;
}

void Switch::Draw(UI* pUI)
{
	//Call output class and pass switch drawing info to it.
	pUI->DrawSwitch(*m_pGfxInfo,m_Label); //update to draw switch
=======
#include"../Actions/Action.h"
Switch::Switch(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{}

void Switch::Draw(UI* pUI)
{
	if (selected == 1)
		pUI->DrawSwitch(*m_pGfxInfo,true);
	else
		selected = 0;
	//Call output class and pass switch drawing info to it.
	pUI->DrawSwitch(*m_pGfxInfo,false); //update to draw switch
>>>>>>> Stashed changes

}

void Switch::Operate()
{
}
<<<<<<< Updated upstream
void  Switch::savecommponnent(fstream& file) {

	file << "Switch \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
=======
 void Switch::Load(string label, int value) {
	 if(value==0)
	CompStatus = false;
	 else
		 CompStatus = true;
	setlabel(label);
>>>>>>> Stashed changes
}