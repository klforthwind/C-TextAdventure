#ifndef story_h
#define story_h
#include "character.h"
#include "combat.h"
#include "saveNLoad.h"
#include "statico.h"

using namespace Statico;

class Story {
	
	void arcOne(Character mc, Character Judas){
		string affirm;
		
		txt("???: Hello? Hello....?");
		txt("...");
		txt("???: Oh thank Clymitra! You're alive'!");
		txt("*Groan*");
		txt("???: Woah, woah, woah, be careful don't get up too fast!s");
		string mcName = responsiveText("???: What is your name? ");
		
		affirm = yesNoQues("\n???: " + mcName + "? (y/n)");
		int bs = 0;
		while (affirm != "y") {
			mcName = responsiveText("???: Oh my bad! My ears must be failing me. What was it again?");
			txt("???: " + mcName + "?");
			affirm = yesNoQues("???: Huh? Did I say your name right? (y/n)");
			bs += (affirm != "y") ? 1 : 0;
			if (bs >= 3) {
				txt("???: Alright sonny, I'll just call ya Will");
				mcName = "Will";
				affirm = true;
			}
			
		}
		
		txt("???: Alright, " + mcName + " I just found you passed out in these pastures here. Would you care to explain yourself?");
		txt("???: You don't know? Odd. Well my name is Jude. Pleasure to meet ya.");
		txt("Jude picks you up and brushes off his robe. He's an older man, balding on the top wearing nothing "
		"\n but a light brown tunic covering him. He carries a long wooden staff to support his weight.");
		txt("He offers a shortsword to you, waiting expectantly.");
		txt("Jude: This is yours I'm presuming.");
		txt("You take the sword.");
		txt("Jude: I see you have a wound on your side, we should check that out.");
		getch();
		getch();
		txt("Jude: Hmmm, doesn't seem too bad.");
		txt("???: There he is you clouts!");
		txt("Jude: Huh?");
		txt("A group of three bandits emerge from the surrounding border of the forest.");
		txt("???: We came here to finish the job, but it looks like we got too sloppy.");
		txt("Jude: Pah, bandits.");
		txt("Sounds like you should be counting your blessings that you're alive!");
		txt("Bandit 1: Kill both of them this time, apparently bleeding out won't cut it");
		txt("The bandit hits a smaller brute in the side of the head and then leans into a fighting stance.");
		affirm = yesNoQues("Combat Tutorial? (y/n)");
		if (affirm == "y") {
			txt("Combat is based around each of your character's' stats.");
			txt("Different classes have different skills and stats.");
			txt("Damage dealt is calculated by the Attacker's Attack - Defender's Defense.");
			txt("Magic Damage is calculated similarily but with Magic Attack and Magic Defense.");
			txt("Dexterity affects hit rate, evade rate, and the chance to attack twice in a turn.");
			txt("Characters can unlock powerful skills or spells! Spend Action Points to use them.");
			txt("Turn order is decided by higher dexterity.");
		}
			//	fightStoryOneBandits(); TBD	
	}
};
#endif

