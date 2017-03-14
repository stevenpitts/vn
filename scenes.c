#include <stdio.h>
#include "head.h"
int getBGC(int sceneNum)
{
	switch (sceneNum)
	{
		case 0: return 0x0000;
		case 1: return 0x0000;
		default: return 0xF000;
	}
}
char * getDialogue(int sceneNum)
{
	switch (sceneNum)
	{
		case 0: return "Default dialogue";
		case 1: return "GAME OVER";
		case 2: return "Are all humans good?";
		case 3: return "By that logic, Hitler was a good person. Would you agree?";
		case 4: return "Then is any human good?";
		case 5: return "oh. okay. I don't think I want to talk to you anymore.";
		case 6: return "Then you've lied to me. Good-bye.";
		case 7: return "Then someone must be able to choose who is good and who is not. Are you that person?";
		case 8: return "Wow, you're kind of a downer. Bye.";
		case 9: return "Then you are a God. Am I correct?";
		case 10: return "Then is the person themself the person who should judge themself?";
		case 11: return "I'm an athiest. You're lying. Good-bye.";
		case 12: return "Then you have no right to be the only person to judge other people."; //improve this one
		case 13: return "Neato, so they judge themselves. Bye.";//improve
		case 14: return "Then is the person to judge them god?";
		default: return "Dialogue error";
	}
}
char * getSceneName(int sceneNum)
{
	switch (sceneNum)
	{
		case 0: return "default";
		case 1: return "gameOver";
		case 2: return "testQuestion";
		case 3: return "hitler";
		case 4: return "anyGood";
		case 5: return "noWantToTalk";
		case 6: return "liar";
		case 7: return "doYouDecide";
		case 8: return "downer";
		case 9: return "areYouGod";
		case 10: return "doTheyJudgeThemselves";
		case 11: return "athiest";
		case 12: return "noRightToJudge";
		case 13: return "theyJudgeThemselves";
		case 14: return "doesGodJudgeThem";
		default: return "Scene name error";
	}
}
int getNextScene(int sceneNum, int yes)
{
	switch (sceneNum)
	{
		case 0: return 1;
		case 1: return 1;
		case 2: return (yes)?3:4;
		case 3: return (yes)?5:6;
		case 4: return (yes)?7:8;
		case 5: return 1;
		case 6: return 1;
		case 7: return (yes)?9:10;
		case 8: return 1;
		case 9: return (yes)?11:12;
		case 10: return (yes)?13:14;
		case 11: return 1;
		case 12: return 1;
		case 13: return 1;
		case 14: return 0;
	}
}