#include "Buzzer.h"
#include <iostream>
#include <string>
#include <fstream>


Buzzer::Buzzer(GraphicsInfo* r_GfxInfo,string Bname):Component(r_GfxInfo)
{
	m_Label = Bname;
}

void Buzzer::Draw(UI* pUI)
{
	pUI->DrawBuzzer(*m_pGfxInfo,m_Label); 
}

void Buzzer::Operate()
{

}

void  Buzzer::savecommponnent(fstream& file) 
{
	file << "Buzzer \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
}
