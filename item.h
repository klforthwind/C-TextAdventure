#ifndef item_H
#define item_H
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;


class Item {
	public:
		string name; //Name of Character
		string descriptor; //Describes item	
		int itemID = 1;
		
		//int itemID = getPlayerInventory();
		
	//itemIdentifier() has associated IDs with each item
	itemIdentifier() {
		if(itemID == 1) {
			name = "Bread\n";
			descriptor = "A small loaf of bread for the hungry hero.\n";
			cout << name << "\n" << descriptor;
		
		}	
	}
		
	 
		
		

};

#endif

