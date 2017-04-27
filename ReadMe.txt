========================================================================
               CSE 332 Lab 3:  Multiple Games
                           By Zihao Yang (ID: 445432)
========================================================================

1. 
Summmary of my project:

My project contains 5 sets of header files and source files:

(1) Header.h and Header.cpp:
The usageMessage funtion and enumeration for return message are in "Header.h"
It also contains two helper funtions "checkposition" and "lengthOfInteger".
"checkposition" is used for nine almonds game to judge vaild move.
"lengthOfInteger" is used for magic square game to get the longest length of
pieces value.

(2) Piece.h and Piece.cpp
In these two files, I define a struct for the game piece, which has a color, value,
name and display name.

(3) GameBase.h and GameBase.cpp
This defines and implements the game base class

(4) NineAlmondsGame.h and NineAlmondsGame.cpp
This defines and implements the nine almonds game

(5) MagicSquareGame.h and MagicSquareGame.cpp
This defines and implements the magic square game

You can use command line: "Lab3.exe NineAlmonds" or "Lab3.exe MagicSquare" or 
"Lab3.exe" MagicSquare Int" or "Lab3.exe" MagicSquare Int Int" to run my program

2.
Return Value of my Program:

There are totally 4 different return values:
   (1) when the user completes the game successfully, my program will return 0
   (2) if the user quits the game during using it, my program will return 1
   (3) if the user cannot complete the game and there is no valid move remained,
my program will return 2
   (4) if the user don't user correct command-line argument, my program will
return 3

3.
Testing the Project:

command line: Lab3.exe or Lab3.exe Almonds or Lab3.exe MagicSqu
output: 
        Usage: Lab3.exe <Argument1> <Argument2> <Argument3>
	Argument1 must be NineAlmonds or MagicSquare
	Argument2 and Argument3 only available for MagicSquare Game; Both of them must be integer
	Argument2 denotes the edge of the square game board
	Argument3 denotes the start value of the game pieces

command line: Lab3.exe NineAlmonds
output: play the nine almonds game

command line: Lab3.exe MagicSquare
output: play the magic square game


=========================================================================================
Extra Credit:

(1) Command Line is: "Lab3.exe MagicSquare 4"

Output is:

   3

   2

   1

   0

   +   0   1   2   3

  Available Pieces: 1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16

  Please select the square to fill in!
  Hint: you can either input 'quit' to end the game or input a valid comma-separated coordinate...
---------------------------------------------------------------------------------------------------------

(2) Command Line is: "Lab3.exe MagicSquare 3 -2"

Output is:

   2

   1

   0

   +   0   1   2   

  Available Pieces: -2 -1  0  1  2  3  4  5  6  

  Please select the square to fill in!
  Hint: you can either input 'quit' to end the game or input a valid comma-separated coordinate...
-------------------------------------------------------------------------------------------------------------

The above are two situations for extra part. I did three things for implement the extra credit. 

First, I add three vectors into the class. "vert" denotes the sum in vertical direction, "hori" 
denotes the sum in horizontal direction, and diag denotes in the sum in two diagnoal direction.
Whenever we add a game piece into the game board, I update all of them. So, at the end, I only need
to compare the value in these three vectors.

Second, I already have a "vector<int> aP" in the class. This vector denotes all the available 
game pieces. So, for extra creadit, I add a new variable "int start" into the class. This integer
is the start value that given by the user.

Third, I add a "boardInit" function into MagicSquareGame class. This funtion takes two integer parameters.
One is the length of edge and another one is the start value. Whenever we run the magic square game.
I call this function first. The default value for length is 3 and for start value is 1.

=========================================================================================