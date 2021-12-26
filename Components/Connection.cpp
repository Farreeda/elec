#include "Connection.h"
#include "Component.h"
<<<<<<< Updated upstream
#include <iostream>
#include <fstream>
using namespace std;

=======
>>>>>>> Stashed changes
Connection::Connection(GraphicsInfo *r_GfxInfo, Component *cmp1, Component *cmp2)
{
	pGfxInfo = r_GfxInfo;
	Cmpnt1 = cmp1;
	Cmpnt2 = cmp2;
}

void Connection::Draw(UI* pUI)
{
	pUI->DrawConnection(*pGfxInfo);
}
<<<<<<< Updated upstream

void Connection::saveconnection(fstream &file) {
	int x = Cmpnt1->gitid();
	int y = Cmpnt2->gitid();

	file << x << " connected " << y << endl;
=======
GraphicsInfo* Connection::getGraphics() const{
	return pGfxInfo;
}
void Connection::Load(Component* comp1, Component* comp2) {
	Cmpnt1 = comp1;
	Cmpnt2 = comp2;
	GraphicsInfo* G1, * G2;
	G1 = Cmpnt1->getGraphics();
	G2 = Cmpnt2->getGraphics();
	if (pGfxInfo->PointsList[0].x < G1->PointsList[0].x)
		Cmpnt1->addTerm1Conn(this);
	else 
		Cmpnt1->addTerm2Conn(this);
	if (pGfxInfo->PointsList[1].x < G1->PointsList[1].x)
		Cmpnt2->addTerm1Conn(this);
	else
		Cmpnt1->addTerm2Conn(this);
>>>>>>> Stashed changes
}
