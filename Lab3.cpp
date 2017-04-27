// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameBase.h"
#include "Header.h"
#include "NineAlmondsGame.h"
#include "Pieces.h"
#include "MagicSquareGame.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	const char *programName = argv[command_line_argument::programName];

	// command funtion
	GameBase* gb;
	gb = gb->command(argc, argv);

	// check the return pointer
	if (gb == nullptr)
	{
		return usageMessage(programName);
	}
	else
	{
		GameBase* pointer = gb;
		int result = gb->play();
		delete pointer;
		return result;
	}
}
