#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

int main()
{
	srand(time(NULL)); //seeds the random number generator
	int CPU = rand() % 3 + 1; //the cpu's answer will be 1, 2, or 3
    
	string answer;
	int userAnswer;
	for (int i = 0; i < 3; i++) //replays the game 3 times
	{
	for(int i = 0; i < 2; i++)//loops twice
    {
		cin.clear(); //if the answer is typed incorrectly for the infinite loop
		cout << "Which do you choose? Rock, paper, or scissors? "; //asks the question
		getline(cin, answer); //gets the answer ^
		
        //if scissors is typed, set it as 1
		if(!answer.compare("scissors") || !answer.compare("Scissors"))
        {
			userAnswer = 1;
			break;
		}
		
        //if rock is typed, set it as 2
		if(!answer.compare("rock") || !answer.compare("Rock"))
        {
			userAnswer = 2;
			break;
		}
		
        //if paper is typed, set it as 3
		if(!answer.compare("paper") || !answer.compare("Paper"))
        {
			userAnswer = 3;
			break;
		}
		
        //if none are typed correctly.. loop
		else
        {
			cout << "Please enter a valid answer.\n";
		}
		
	} 
	
    //if the computer chooses scissors
	if(CPU == 1)
    {
		if(userAnswer == 1)
        {
			cout << "It's a tie! The computer chose scissors! ";
		}
		
		else if(userAnswer == 2)
        {
			cout << "You WIN! The computer chose scissors!";
		}
		
		else if(userAnswer == 3)
        {
			cout << "You LOSE! The computer chose scissors!";
		}
	} 

	//if the computer chooses rock
	else if(CPU == 2)
    {
		if(userAnswer == 1)
        {
			cout << "You LOSE! The computer chose rock!";
		}
		
		else if(userAnswer == 2)
        {
			cout << "It's a tie! The computer also chose rock!";
		}
		
		else if(userAnswer == 3)
        {
			cout << "You WIN! The computer chose rock!";
		}
	} 
	
    //if the computer choses paper
	else if(CPU == 3)
    {
		if(userAnswer == 1)
        {
			cout << "You WIN! The computer chose paper!";
		}
		
		else if(userAnswer == 2)
        {
			cout << "You LOSE! The computer chose paper!";
		}
		
		else if(userAnswer == 3)
        {
			cout << "It's a TIE! The computer chose paper!";
		}
	} 
	cout << endl;
	}
}