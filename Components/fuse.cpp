#include "fuse.h"
<<<<<<< Updated upstream
#include <iostream>
#include <string>
#include <fstream>
fuse::fuse(GraphicsInfo* r_GfxInfo,string fname) :Component(r_GfxInfo)
{
	m_Label = fname;
}
=======

fuse::fuse(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{}
>>>>>>> Stashed changes

void fuse::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
<<<<<<< Updated upstream
	pUI->DrawFuse(*m_pGfxInfo,m_Label); //update to draw resistor
=======
	pUI->DrawResistor(*m_pGfxInfo); //update to draw resistor
>>>>>>> Stashed changes

}

void fuse::Operate()
{

}
<<<<<<< Updated upstream
void  fuse::savecommponnent(fstream& file) {

	file << "fuse \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
=======
void fuse::Load(string label, int value) {
	resistance = value;
	setlabel(label);
>>>>>>> Stashed changes
}