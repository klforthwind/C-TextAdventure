#ifndef characterStats_h
#define characterStats_h
#include "character.h"
#include "combat.h"
#include "story.h"
#include "saveNLoad.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <fstream>
using namespace std;

class Stats {

	//IMPORTANT, use to STORE PLAYERPARTY STATS


	Character mc; //mc is rogue until options are given
	Character rogue; //High damage, High Dex, Low Defenses
	Character jude; //Cleric
	Character mage; //Magic
	Character archer; //AP attacks, good dex
	Character cavalry; //High dex?
	Character forthwind;  //Speed Warrior
	
	//This should just to set up some tests.
	void setStats() {
		mc.hp = 15;
		mc.ap = 5;
		mc.exp = 0;
		if (mc.exp == 100) {
			mc.levelUp();
		}
	}
}; 

#endif

