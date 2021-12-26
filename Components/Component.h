#ifndef _COMPONENT_H
#define _COMPONENT_H

#include "..\Defs.h"
#include "..\UI\UI.h"
#include "Connection.h"
<<<<<<< Updated upstream

=======
#include"../ApplicationManager.h"
>>>>>>> Stashed changes

//Base class for all components (resistor, capacitor,....etc) .
class Component
{
private:
	//string m_Label;
protected:
	//Each component has two ending terminals (term1, term2)
	double term1_volt, term2_volt;	//voltage at terminals 1&2
	//static int ID;
	double resistance;
	bool selected;
	bool CompStatus;
	//Each terminal is connected to set of connections
	Connection *term1_connections[MAX_CONNS]; //list of pointers to connections
	Connection *term2_connections[MAX_CONNS];

	int term1_conn_count;	//actual no. of connections to each terminal
	int term2_conn_count;

	string m_Label;

	GraphicsInfo *m_pGfxInfo;	//The parameters required to draw a component
	int static cid;
	int id;

public:
	Component(GraphicsInfo *r_GfxInfo);
	//void setTerm1Volt(double v);		//sets the voltage at terminal1
	//void setTerm2Volt(double v);		//sets the voltage at terminal2
	//double getTerm1Volt();				//returns the voltage at terminal1
	//double getTerm2Volt();				//returns the voltage at terminal2
	virtual void Operate() = 0;	//Calculates the output voltage according to the inputs
	virtual void Draw(UI* ) = 0;	//for each component to Draw itself
	bool IsInRegion(int m_x, int m_y)const;
<<<<<<< Updated upstream
	void set_label(string h);
	string get_label();
=======
	int getCompCenterX(UI*); // get horizontal/vertical centers of the component
	int getCompCenterY(UI*);
	int getGraphicsInfoY();
	int getGraphicsInfoX();
	GraphicsInfo* getGraphics();
	void addTerm1Conn(Connection*);
	void addTerm2Conn(Connection*);
	static void resetID();
	bool isSelected();
	void Selection();
	void unSelect();
	void setState(int S);
	int getResistance();
	bool getCompState();
	void setlabel(string s);
	string getlabel() const;
>>>>>>> Stashed changes
	//virtual int GetOutPinStatus()=0;	//returns status of outputpin if LED, return -1
	//virtual int GetInputPinStatus(int n)=0;	//returns status of Inputpin # n if SWITCH, return -1

	//virtual void setInputPinStatus(int n, STATUS s)=0;	//set status of Inputpin # n, to be used by connection class.
<<<<<<< Updated upstream
	virtual void savecommponnent(fstream &file) = 0;
	
=======

	virtual void Load(string label,int value)=0;
>>>>>>> Stashed changes
	Component();	
	int gitid();
	
	//Destructor must be virtual
	virtual ~Component();
};

#endif
