#include "ApplicationManager.h"
#include "Actions\ActionAddRes.h"
#include"Actions/ActionAddBuzz.h"
#include"Actions/ActionAddBulb.h "
#include"Actions/ActionAddConnec.h "
#include"Actions/ActionAddBattery.h"
#include"Actions/ActionAddGround.h"
#include"Actions/ActionAddfuse.h"
#include"Actions/ActionAddSwitch.h"
#include "Actions/ActionSave.h"
=======
#include "Actions/Load.h"
#include"Actions/ActionAddConnec.h"

>>>>>>> Stashed changes
ApplicationManager::ApplicationManager()
{
	CompCount = 0;
	for(int i=0; i<MaxCompCount; i++)
		CompList[i] = nullptr;
	for (int i = 0; i < MaxCompCount; i++)
		ConnList[i] = nullptr;
	//Creates the UI Object & Initialize the UI
	pUI = new UI;
}
////////////////////////////////////////////////////////////////////
void ApplicationManager::AddComponent(Component* pComp)
{
	CompList[CompCount++] = pComp;		
}
void ApplicationManager::AddConnection(Connection* pConn)
{
	ConnList[ConnCount++] = pConn;
}
////////////////////////////////////////////////////////////////////

ActionType ApplicationManager::GetUserAction()
{
	//Call input to get what action is reuired from the user
	return pUI->GetUserAction(); 	
}
////////////////////////////////////////////////////////////////////

void ApplicationManager::ExecuteAction(ActionType ActType)
{
	Action* pAct = nullptr;
	switch (ActType)
	{
		case ADD_RESISTOR:
			pAct= new ActionAddRes(this);
			break;
		case ADD_LAMP:
			pAct = new ActionAddBulb(this);
			break;		
		case ADD_BATTERY:
			pAct = new ActionAddBattery(this);
			break;
		case ADD_SWITCH:
			pAct = new ActionAddSwitch(this);
			break;
		case ADD_GRND:
			pAct = new ActionAddGround(this);
			break;
		case ADD_BUZZER:
			pAct = new ActionAddBuzz(this);
			break;
		case ADD_FUSE:
			pAct = new ActionAddfuse(this);
			break;
		case ADD_CONNECTION:
			pAct = new ActionAddConnec(this);
			break;
<<<<<<< Updated upstream
		case SAVE:
			pAct = new Actionsave(this);
			break;

=======
		case LOAD:
			pAct = new Load(this);
			break;
>>>>>>> Stashed changes


		case EXIT:
			///TODO: create ExitAction here
			break;
	}
	if(pAct)
	{
		pAct->Execute();
		delete pAct;
		pAct = nullptr;
	}
}
////////////////////////////////////////////////////////////////////

void ApplicationManager::UpdateInterface()
{
		for(int i=0; i<CompCount; i++)
			CompList[i]->Draw(pUI);
		for(int i = 0; i < ConnCount; i++)
			ConnList[i]->Draw(pUI);

}

////////////////////////////////////////////////////////////////////
UI* ApplicationManager::GetUI()
{
	return pUI;
}


////////////////////////////////////////////////////////////////////

ApplicationManager::~ApplicationManager()
{
	for(int i=0; i<CompCount; i++)
		delete CompList[i];
	for (int i = 0; i < ConnCount; i++)
		delete ConnList[i];
	delete pUI;
	
}
Component* ApplicationManager::GetComponentByCordinates(int x, int y) {
	UI* pUI = GetUI();
	int  isExist = 0;
	int ydifference, xdifference;
	int compheight = pUI->getCompHeight();
	int compwidth = pUI->getCompWidth();
	for (int i = 0; i < CompCount; i++) {
		if (CompList[i] != nullptr) {
			ydifference = abs(y - CompList[i]->getCompCenterY(pUI));
			xdifference = abs(x - CompList[i]->getCompCenterX(pUI));
			if ((ydifference <= compheight / 2) && (xdifference <= compwidth / 2)) {
				isExist = 1;
				return CompList[i];

<<<<<<< Updated upstream
bool ApplicationManager::ValidConnectionPoint(int x, int y,  Component* c1)  {
=======
				break;
			}

		}
	}
	if (isExist == 0)
		return nullptr;
}
bool ApplicationManager::ValidConnectionPoint(int x, int y, const Component* c1)  {
>>>>>>> Stashed changes
	int c = 0;
	for (int i = 0; i < CompCount; i++) {
		if (CompList[i]->IsInRegion(x, y)) {
			c1 = CompList[i];
			c++;
			return true;
		}
	}
	//if (c > 0)
	//	return true;	
	//else
		return false;
	
	
}
<<<<<<< Updated upstream
void ApplicationManager::savefilrconnection(fstream& file) {
	for (int i = 0;i < ConnCount;i++) {
		ConnList[i]->saveconnection(file);
	}
}

void  ApplicationManager::savefilecommponent(fstream& file) {
	for (int i = 0;i < CompCount;i++) {
		CompList[i]->savecommponnent(file);
	}
}
=======
void ApplicationManager::Load2(ifstream& my_file, string fo_name) {
	GraphicsInfo* G = new GraphicsInfo(2);

	//string f_name = pUI->GetSrting();
	//my_file.open((f_name, ".txt"), ios::in);
	if (!my_file) {
		pUI->PrintMsg("File not found");
		//pUI->ClearStatusBar();
	}

	else {
		my_file.open((fo_name));
		int num,num2;
		my_file >> num;
		for (int i = 0; i <= num; i++)
		{

			string cmpname, label;
			int ginfoX, ginfoY, ID, value;
			//if (my_file.good()) {

			my_file >> cmpname;
			if (cmpname != "Connections") {
				my_file >> ID;
				my_file >> label;
				my_file >> value;
				my_file >> ginfoX>>ginfoY;
				GraphicsInfo* GI = new GraphicsInfo(2);
				GI->PointsList[0].x = ginfoX;
				GI->PointsList[0].y = ginfoY;
				GI->PointsList[1].x = ginfoX + pUI->getCompWidth();;
				GI->PointsList[1].y = ginfoY + pUI->getCompHeight();

				if (cmpname == "RES") {
					Resistor* comp = new Resistor(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
				if (cmpname == "SWT") {
					Switch* comp = new Switch(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
				if (cmpname == "BAT") {
					Battery* comp = new Battery(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
				if (cmpname == "BLB") {
					Bulb* comp = new Bulb(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
				if (cmpname == "GND") {
					Ground* comp = new Ground(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
				if (cmpname == "FUZ") {
					fuse* comp = new fuse(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
				if (cmpname == "BZR") {
					Buzzer* comp = new Buzzer(GI);
					comp->Load(label, value);
					AddComponent(comp);
				}
			}

			else if (cmpname == "Connections"&& CompList[2]) {
				my_file >> num2;
				for (int i = 0; i <= num2; i++)
				{
					int comp1, comp2, gpoints;
					my_file >> comp1;

						my_file >> comp2;
						my_file >> gpoints;
						GraphicsInfo* GI = new GraphicsInfo(2);
						GI->PointsList[0].x = gpoints;
						my_file >> gpoints;
						GI->PointsList[0].y = gpoints;
						my_file >> gpoints;
						GI->PointsList[1].x = gpoints;
						my_file >> gpoints;
						GI->PointsList[1].y = gpoints;
						Connection* R = new Connection(GI);

						R->Load(CompList[comp1 - 1], CompList[comp2 - 1]);
						AddConnection(R);


					}
				}
				}


			}

		}


	
>>>>>>> Stashed changes
