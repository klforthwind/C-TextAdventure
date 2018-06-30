#ifndef enemyStats_H
#define enemyStats_H
#include <string>
#include <cstdlib>
#include <iostream>
#include "character.h"
#include "combat.h"
//#include "enemyGeneration.h"

class EnemyStats {
	public:
		int id;
		
		int getEnemyDex(int id) {
			int dx = setEnemyID(id).dx;
			return dx;
		}
		
		
	//Each enemy has an associated ID, setEnemyID, takes an ID and allows other files to search for stats by passing through the Character enemy OBJECT
		Character setEnemyID(int id) {
			Character enemy;	
				if (id == 1) {
				 	enemy.name = "Bandit";
			 		enemy.hp = 1;
			 		enemy.ap = 1;
			 		enemy.st = 1;
			 		enemy.ma = 1;
			 		enemy.dx = 1;
			 		enemy.def = 1;
			 		enemy.mdef = 1; 
				}
			return enemy;
		}
			
};

#endif

