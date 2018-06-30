#ifndef enemyGeneration_H
#define enemyGeneration_H
#include "character.h"
#include "mapGenerator.h"
#include "enemyStats.h"
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

class EnemyGeneration {
	public:
		//int eID given arbitrary variables for now
		int eID[3] = {1, 2, 3};
		int ID;
		bool fullSize;
		int eNum = sizeof(eID);
		int setEnemyStats(EnemyStats es) {
			ID = eID[eNum];
			
			//Function in enemy stats to notify class that there is an enemy needing to be loaded
			es.setEnemyID(ID);
			eNum - 1;
			if (eNum > 0) {
				fullSize = false;
			} if (eNum == 0) {
				fullSize = true;
			}
			return ID;
		}
			
		int getEnum() {
			return eNum;
		}
		
		int *getEIDArray() {
			return eID;
		}
		
		int getEnemyStats() {
			return ID;			
		}
			
		int generateEnemy(MapGenerator mg) {
			
			//Count number of IDs in eID array
			
			cout << "Test Message: Size of the enemy squad is..." << eNum <<".\n";			
			
			if (mg.tileType() == 1){
				//Increase to 100 if you want to add different probability chances to each scene
				int fightScene = rand() % 10 + 1;
			}
			
		}
};

#endif

