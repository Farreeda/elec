#include "fuse.h"
#include <iostream>
#include <string>
#include <fstream>
fuse::fuse(GraphicsInfo* r_GfxInfo,string fname) :Component(r_GfxInfo)
{
	m_Label = fname;
}

void fuse::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
	pUI->DrawFuse(*m_pGfxInfo,m_Label); //update to draw resistor

}

void fuse::Operate()
{

}
void  fuse::savecommponnent(fstream& file) {

	file << "fuse \t" << to_string(id) << "\t" << m_Label << "\t" << to_string(m_pGfxInfo->PointsList[0].x) << "\t" << to_string(m_pGfxInfo->PointsList[0].y);
}