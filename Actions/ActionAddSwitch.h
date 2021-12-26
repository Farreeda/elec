#pragma once

#include "Action.h"
#include "../Components/Switch.h"
#include "../ApplicationManager.h"

//Class responsible for adding a new resistor action
class ActionAddSwitch : public Action
{
private:
	//Parameters for rectangular area to be occupied by the comp
	int Cx, Cy;	//Center point of the comp
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
<<<<<<< Updated upstream
	string sname;
=======
>>>>>>> Stashed changes
public:

	ActionAddSwitch(ApplicationManager* pApp);
	virtual ~ActionAddSwitch(void);

	//Execute action (code depends on action type)
	virtual void Execute();
<<<<<<< Updated upstream
	virtual void loadcircuit();
=======
	
>>>>>>> Stashed changes
	virtual void Undo();
	virtual void Redo();


};
