//
// Programmer: Jeff Ronald Hortian
//
// File: FunctionStubbing.cpp		Class: Computer Science 1106
//
// Program Description: This program reads two SAT verbal scores(between 0 and 800) 
// for a student and prints the larger of the two scores.
// 

#include <iostream>
using namespace std;

// Global Constants

const int MAX_SCORE = 800;
const int LOW_SCORE = 0;

//Function Prototypes

void	instructions(void);		 // Function to display instructions to the user
void	readScore(int &score);   // Function get the scores from the user
bool	outOfRange(int score);	 // Boolean valued function will return true or false
int		max(int x, int y);		 // Returns the score that is the largest

int main(void){
   
   int verbalScore1,         // SAT verbal score #1 
       verbalScore2;         // SAT verbal score #2 
   

   instructions();			// Display instructions to the user
   readScore(verbalScore1);	// Get the first test score
   

   if(outOfRange(verbalScore1))
	   cout << verbalScore1 << " is not between " << LOW_SCORE << " and "
		    << MAX_SCORE << ". \nProgram Terminating" << endl << endl;

   else{

   		readScore(verbalScore2);	// Get the second test score
		if(outOfRange(verbalScore2))
				cout << verbalScore2 << " is not between " << LOW_SCORE << " and "
					 << MAX_SCORE << ". \nProgram Terminating" << endl << endl;
		else
			cout << "The larger score is " << max(verbalScore1, verbalScore2) << endl;
   }
   return 0;
}

//
// Function to print instructions on what the program does
// 

void instructions(void){
   cout << "This program interactively reads two SAT\n";
   cout << "verbal scores and prints the larger\n\n";
}

//
// Function to read a score interactively   
// 

void readScore(int &score){

    cout << "Enter function readScore " << endl;
	score = 500;
	cout << "Leaving function readScore " << endl;
}

//
// Function to return true if the SAT score is out of
// range, false otherwise.  Range:  0-800
// 

bool outOfRange(int score){
	cout << "Enter function outOfRange " << endl;
	cout << "Leaving function outOfRange " << endl;
	return false;
	
}

//
// Function to return maximum of two integer parameters
// 

int max(int x, int y)
{
	cout << "Entering function max " << endl;
   return x;
   cout << "Leaving function max " << endl;
}