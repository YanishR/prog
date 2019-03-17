#include "MachLangParser.h"

MachLangParser::MachLangParser(string input_file)
{
	myFormatCorrect = true;
	ifstream in;
	in.open(input_file.c_str());
	if (in.bad())
		myFormatCorrect = false;
	
}

bool MachLangParser::isFormatCorrect(){}

Instruction MachLangParser::getNextInstruction(){}
