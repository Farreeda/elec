#pragma once
#include "../UI/UI.h"

class Component;	//forward class declaration

class Connection
{
	//connection connects between two compoenets
	Component	*Cmpnt1, *Cmpnt2;
	GraphicsInfo *pGfxInfo;	//The parameters required to draw a connection
	string c_label;
	bool selected;
public:

	Connection(GraphicsInfo *r_GfxInfo, Component *cmp1=nullptr, Component *cmp2=nullptr);
	virtual void Draw(UI* );
<<<<<<< Updated upstream
	void saveconnection(fstream &file);

=======
	GraphicsInfo* getGraphics() const;
	void setLabel(string s);
	void Load(Component* cmp1, Component* cmp2);
>>>>>>> Stashed changes
};
