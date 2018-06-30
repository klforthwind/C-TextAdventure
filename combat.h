#ifndef combat_H 
#define combat_H
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include "character.h"
#include "enemyGeneration.h"
#include "enemyStats.h"
#include "item.h"

class CombatSkeleton {
	int eNum;
	int fightParticipantsDex[];
	int fightParticipants[];
	int fightSize;
	EnemyGeneration eg; //Throws error if I don't include these declarations up here.
	EnemyStats es;
	//Takes dexterity of party and of enemy party, puts them in a array, reads it, and orders the list
	void compileDexterity(EnemyGeneration eg, EnemyStats es) {
		eNum = eg.getEnum();
		int *eID = eg.getEIDArray();
		//Create function in 
		//party [] = getPartyArray();
		int fightParticipants[] = {eID[0]};
		fightSize = sizeof(fightParticipants);
		for (; fightSize > 0; fightSize - 1) {
			int dex = es.getEnemyDex(fightParticipants[fightSize - 1]);		
			fightParticipantsDex[fightSize] = {dex}	;
		}
		
		//Sorting, should print out the dex?
		int element = sizeof(fightParticipantsDex) / sizeof(fightParticipantsDex[0]);
		std::sort(fightParticipantsDex, fightParticipantsDex + element);
		for (int i = 0; i < element; i++) {
			cout << fightParticipantsDex[i] << ' ';
			//http://www.cplusplus.com/forum/beginner/33664/
		}
			
	}
	
	//Battle Mode checker
	bool completedTurn;
	bool battle;
	inBattle () {
		while (battle == true) {
		//Checks for completed turns, and who goes first, TBD
			compileDexterity();
			turnOrder();
		}
	}
	
	//This function reads the sorted array, and from the highest slot of the list (flaw of the sorting commend) sets whose turn it is.
	//Calls upon other various functions
	turnOrder(){
		for (int i = sizeof(fightParticipants); i > 0 ; i--) {
			int characterTurn = fightParticipantsDex[i];
/*				call various functions, return bool done at the end of a turn action
			dealDamage();
			dealMagicDamage();
			useSkill();
			useItem();
			escape();
			
			
			if (getDoneState == true) {
				continue();
			}
			if (playerParty = 0) {
				battle = false;
				break();
			}
			if ((sizeof(fightParticipants[]) - sizeof(playerParty)) == 0) {
				battle = false;
				break();
			
			}

*/
		}		
	}
	
	//Function for damage calculation
	void dealDamage(Character a, Character b) {		
		int hpD;
		hpD = a.st - b.def;
		if (hpD < 1) {
			hpD = 1;
		}
		b.hp -= hpD;
	}
	
	//Function for magic damage calculation
	void dealMagicDamage (Character a, Character b) {
		int hpD;
		hpD = a.ma - b.mdef;
		if (hpD < 1) {
			hpD = 1;
		}
		b.hp -= hpD;
	}
	
//	void useSkill (Character a, Character b, Skill sid) {
//		getSkill(sid);
//		
//		
//	}

//	void useItem (Character a, Character b, Item c) {
//		itemIdentifier(c);
//	}

	//At the moment, escape actions are automatic successes
	escape() {
		battle = false;
	}
};


#endif

