#ifndef mapGenerator_h
#define mapGenerator_h

#include <fstream>


class MapGenerator {
	const int mapHeight = 20;
	const int mapWidth = 20;
	
	public:
		void generateMap(int arcNum, int x, int y) {
			
		}
		
		
		//Perhaps getTileType()? Returns tileType
		int tileType(){
			int tileType = 1;
			return tileType;
		}
		
	private:
		bool doesMapExist(int arcNum, int x, int y) {
			ifstream ifile(".txt");
			return ifile;
		}
		void makeMap() {
			
		}
		
//		char[] tileMap() {
//			return null;
//		}
};



#endif

