Library to use for visuals: SFML 

## Goals

* Generate a tic-tac-toe game with basic AI and visuals

## Requirements

* No OOP
* The program should have a winning condition
* The user should be able to use the program in any OS and computer architecture

## Solution

* Main Goal: Create Tic-Tac-Toe


* Sub-Goals:
	* Create a screen with the table:
		* 3x3 squares, seperated by 2x2 lines of any color
	* Handle collisions with the table:
		* TODO
	* Create AI:
		* Make a function picks a random number from the 3x3 table
			* Function should check edge-cases (number not occupied)
		* Draw AI's calls to screen
	* Create Player:
		* Make a function that handles player input from keyboard
		* Make a function that responds to player input
			* If player presses ENTER and the space is not occupied then do something
			* Else, can't do something