#ifndef statico_h
#define statico_h
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

namespace Statico {
	
	// Random Number -> rn
	static int rn(int min, int max) {
		srand(time(NULL));
		return rand() % (max - min + 1) + min;
	}
	
	//Shortcut for cout to require keyboard input
	static void txt(string s) {
		cout << s << "\n";
		getch();
	}
	
	static string yesNoQues(string s) {
		string yn;
		while (yn != "y" || yn != "n") {
			cout << s << "\n";
			cin >> yn;
			cin.clear();
		}
		return yn;
	}
	
	static string responsiveText(string s) {
		cout << s << "\n";
		string r;
		getline(cin, r);
		cin.clear();
		return r;
	}
	
};
#endif
