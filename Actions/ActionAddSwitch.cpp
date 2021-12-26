#include "ActionAddSwitch.h"
#include "../ApplicationManager.h"

ActionAddSwitch::ActionAddSwitch(ApplicationManager* pApp) :Action(pApp)
{
}

ActionAddSwitch::~ActionAddSwitch(void)
{

}

void ActionAddSwitch::Execute()
{

	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
<<<<<<< Updated upstream
	pUI->PrintMsg("enter the label of teh switch");
	sname = pUI->GetSrting();
=======
	pUI->PrintMsg("Adding a new Switch: Click anywhere to add");

>>>>>>> Stashed changes
	//Get Center point of the area where the Comp should be drawn

	pUI->GetPointClicked(Cx, Cy);

	//Clear Status Bar
	pUI->ClearStatusBar();
<<<<<<< Updated upstream
	
	pUI->PrintMsg("value");
	string value = pUI->GetSrting();
=======
	pUI->PrintMsg("Label");
	string label = pUI->GetString();
	pUI->PrintMsg("value");
	string value = pUI->GetString();
>>>>>>> Stashed changes
	pUI->ClearStatusBar();

	GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the Comp

	//Calculate the rectangle Corners
	int compWidth = pUI->getCompWidth();
	int compHeight = pUI->getCompHeight();

	pGInfo->PointsList[0].x = Cx - compWidth / 2;
	pGInfo->PointsList[0].y = Cy - compHeight / 2;
	pGInfo->PointsList[1].x = Cx + compWidth / 2;
	pGInfo->PointsList[1].y = Cy + compHeight / 2;

<<<<<<< Updated upstream
	Switch* pR = new Switch(pGInfo,sname);
=======
	Switch* pR = new Switch(pGInfo);
>>>>>>> Stashed changes
	pManager->AddComponent(pR);
}


void ActionAddSwitch::Undo()
{}

void ActionAddSwitch::Redo()
{}
<<<<<<< Updated upstream
void ActionAddSwitch::loadcircuit() {

}
=======
>>>>>>> Stashed changes
