#ifndef saveNLoad_h
#define saveNLoad_h
#include "character.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <fstream>
using namespace std;

class SaveNLoad {
	
	void save(Character mc, Character jude){
		//Outputs Player Data
		ofstream output;
		output.open("savefile.txt", ios::out);
		output << mc.characterClass << endl;
		output << mc.name << endl;
		output << mc.hp << endl;
		output << mc.ap << endl;
		output << mc.st << endl;
		output << mc.ma << endl;
		output << mc.dx << endl;
		output << mc.def << endl;
		output << mc.mdef << endl;
		output << mc.lvl << endl;
		output << mc.exp << endl;
		
		output << jude.characterClass << endl;
		output << jude.name << endl;
		output << jude.hp << endl;
		output << jude.ap << endl;
		output << jude.st << endl;
		output << jude.ma << endl;
		output << jude.dx << endl;
		output << jude.def << endl;
		output << jude.mdef << endl;
		output << jude.lvl << endl;
		output << jude.exp << endl;
		
		//Repeat for each character
		
		output.close();	
	}
	
	void load(Character mc, Character jude){
		//Inputs Player Data
		ifstream input;
		input.open("savefile.txt", ios::in);
		input >> mc.characterClass;
		getline(input, mc.name);
		input >> mc.hp;
		input >> mc.ap;
		input >> mc.st;
		input >> mc.ma;
		input >> mc.dx;
		input >> mc.def;
		input >> mc.mdef;
		input >> mc.lvl;
		input >> mc.exp;
		
		input >> jude.characterClass;
		getline(input, jude.name);
		input >> jude.hp;
		input >> jude.ap;
		input >> jude.st;
		input >> jude.ma;
		input >> jude.dx;
		input >> jude.def;
		input >> jude.mdef;
		input >> jude.lvl;
		input >> jude.exp;
		
		//Repeat for each character
	}
};
#endif
