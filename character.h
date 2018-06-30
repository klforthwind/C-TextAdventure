#ifndef character_h
#define character_h
#include <string>
#include <iostream>
#include "statico.h"
using namespace std;
using namespace Statico;

class Character {
	public: 
		int characterClass; //Warrior, Horseman, Cleric, Mage, Archer 
		string name; //Name of Character
		int hp; // Hit Points
		int ap; // Action Points
		int st; // Strength
		int ma; // Magic Attack
		int dx; // Dexterity
		int def; // Defense
		int mdef; // Magic Defense
		int lvl; //Character Level
		int exp; // Experience Points
		
	void levelUp(){
	
		if (characterClass == 1) {
			// IF CLERIC, THEN roll dice for each stat
			int chp = rn(1, 100);
			int cap = rn(1, 100);
			int cma = rn(1, 100);
			int cst = rn(1, 100);
			int cdx = rn(1, 100);
			int cdef = rn(1, 100);
			int cmad = rn(1, 100);
			exp = 0;
			bool didILevel;
			
			if (chp <= 40) {
				//Character running function gains +1 HP
				this->hp + 1;
				didILevel = true;
			} if (cap <= 55) {
				//Character running function gains +1 AP
				this->ap + 1;
				didILevel = true;
			} if (cma <= 65) {
				//Character running function gains +1 MA
				this->ma + 1;
				didILevel = true;
			} if (cst <= 5) {
				//Character running function gains +1 ST
				this->st + 1;
				didILevel = true;
			} if (cdx <= 20) {
				//Character running function gains +1 DX
				this->dx + 1;
				didILevel = true;
			} if (cdef <= 30) {
				//Character running functin gains +1 DEF 
				this->def + 1;
				didILevel = true;
			} if (cmad <= 45) {
				//Character running function gains +1 MD	
				this->mdef + 1;
				didILevel = true;
			} if (didILevel = false) {
				levelUp();
			}
			
		}

		if (characterClass == 2) {
			// IF WARRIOR, THEN roll dice for each stat
			int chp = rn(1, 100);
			int cap = rn(1, 100);
			int cma = rn(1, 100);
			int cst = rn(1, 100);
			int cdx = rn(1, 100);
			int cdef = rn(1, 100);
			int cmad = rn(1, 100);
			exp = 0;
			bool didILevel;
			didILevel = false;
			
			if (chp <= 55) {
				//Character running function gains +1 HP
				this->hp + 1;
				didILevel = true;
			} if (cap <= 25) {
				//Character running function gains +1 AP
				this->ap + 1;
				didILevel = true;
			} if (cma <= 10) {
				//Character running function gains +1 MA
				this->ma + 1;
				didILevel = true;
			} if (cst <= 70) {
				//Character running function gains +1 ST
				this->st + 1;
				didILevel = true;
			} if (cdx <= 33) {
				//Character running function gains +1 DX
				this->dx + 1;
				didILevel = true;
			} if (cdef <= 40) {
				//Character running functin gains +1 DEF 
				this->def + 1;
				didILevel = true;
			} if (cmad <= 30) {
				//Character running function gains +1 MD	
				this->mdef + 1;
				didILevel = true;
			}else if (didILevel = false) {
				levelUp();
			}	
		}
	};
};
#endif
