/*
This source file is to implement the function of GameBase
*/

#include "stdafx.h"
#include "GameBase.h"
#include "NineAlmondsGame.h"
#include "MagicSquareGame.h"

#include <utility>

using namespace std;


GameBase* GameBase::command(int argc, char* argv[]) {
	// check argument numbers
	if (argc == command_line_argument::expectedArguments)
	{
		// check command line
		//user input NineAlmonds
		if (argv[1] == string("NineAlmonds"))
		{
			GameBase *nag;
			nag = new NineAlmondsGame;
			return nag;
		}
		//user input MagicSquare
		else if (argv[1] == string("MagicSquare"))
		{
			GameBase *msg;
			msg = new MagicSquareGame;
			return msg;
		}
		else 
		{
			return nullptr;
		}
	}
	else if (argc == 3) 
	{
		if (argv[1] == string("MagicSquare"))
		{
			istringstream iss(argv[2]);
			int dimension;
			if (iss >> dimension)
			{
				if (dimension < 1)
				{
					cout << "GameBoard dimesnion must be larger or equal to one" << endl;
					return nullptr;
				}
				else
				{
					GameBase *msg;
					msg = new MagicSquareGame(dimension);
					return msg;
				}
			}
			else
			{
				cout << "Second Argument must be a number" << endl;
				return nullptr;
			}
		}
		else
		{
			cout << "First Argument Must be MagicSquare" << endl;
			return nullptr;
		}
	}
	else if (argc == 4)
	{
		if (argv[1] == string("MagicSquare"))
		{
			istringstream iss1(argv[2]);
			istringstream iss2(argv[3]);
			int dimension;
			int start;
			if (iss1 >> dimension && iss2 >> start) 
			{
				if (dimension < 1)
				{
					cout << "GameBoard dimesnion must be larger or equal to one" << endl;
					return nullptr;
				}
				else
				{
					GameBase *msg;
					msg = new MagicSquareGame(dimension, start);
					return msg;
				}
			}
			else
			{
				cout << "Second and Third Argument must be a number" << endl;
				return nullptr;
			}
		}
		else
		{
			cout << "First Argument Must be MagicSquare" << endl;
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}
}
