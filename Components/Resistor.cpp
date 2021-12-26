#include "Resistor.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
Resistor::Resistor(GraphicsInfo *r_GfxInfo,string res_name):Component(r_GfxInfo)
{
	m_Label = res_name;
	/*Component::set_label("resistor");
	string res_name = Component::get_label();*/
	
}

void Resistor::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
	pUI->DrawResistor(*m_pGfxInfo,m_Label); //update to draw resistor

}

void Resistor::Operate()
{

}
void  Resistor::savecommponnent(fstream& file) {

	file << "Regsistor \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y) << endl;

}
