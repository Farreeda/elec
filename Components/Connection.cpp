#include "Connection.h"
#include "Component.h"
#include <iostream>
#include <fstream>
using namespace std;

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

void Connection::saveconnection(fstream &file) {
	int x = Cmpnt1->gitid();
	int y = Cmpnt2->gitid();

	file << x << " connected " << y << endl;
}
