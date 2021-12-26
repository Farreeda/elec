#ifndef APPLICATION_MANAGER_H
#define APPLICATION_MANAGER_H
#include <iostream>
#include <fstream>
#include "Defs.h"
#include "UI\UI.h"
#include "Actions\Action.h"
<<<<<<< Updated upstream
#include "Components\Component.h"
=======
#include "Components/Component.h"
#include "Components/Connection.h"

>>>>>>> Stashed changes
//Main class that manages everything in the application.
class ApplicationManager
{

	enum { MaxCompCount = 200 };	//Max no of Components	

private:
	int CompCount;//Actual number of Components
	int ConnCount;
	Component* CompList[MaxCompCount];	//List of all Components (Array of pointers)
	Connection* ConnList[MaxCompCount];
	UI* pUI; //pointer to the UI



public:

	ApplicationManager(); //constructor

	//Reads the required action from the user and returns the corresponding action type
	ActionType GetUserAction();

	void  savefilecommponent(fstream& file);
	//Creates an action and executes it
	void ExecuteAction(ActionType);

	void UpdateInterface();	//Redraws all the drawing window

	//Gets a pointer to UI Object
	UI* GetUI();


	//Adds a new component to the list of components
	void AddComponent(Component* pComp);
	void AddConnection(Connection* pConn);
<<<<<<< Updated upstream
	bool ValidConnectionPoint(int x, int y,  Component* c1);
	void savefilrconnection(fstream& file);

=======
	bool ValidConnectionPoint(int x, int y,const Component* c1);
	void Load2(ifstream &my_file, string fo_name);
	Component* GetComponentByCordinates(int x, int y);
>>>>>>> Stashed changes
	//destructor
	~ApplicationManager();
};

#endif
