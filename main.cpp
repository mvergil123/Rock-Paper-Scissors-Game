/* CSCI 200: Assignment 1: A1 - Rock Paper Scissor Throw Down!
 *
 * Author: XXXX (Mike Vergil)
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // list here any outside assistance you used/received while following the
 *     // CS@Mines Collaboration Policy and the Mines Academic Code of Honor
 *
 * XXXXXXXX (MORE_COMPLETE_DESCRIPTION_HERE)
 * This program is a rock paper scissors spock lizard game
 */
// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cstdlib> //  for random generator.
#include <ctime> // for the time seed.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

  /******** INSERT YOUR CODE BELOW HERE ********/
  // change the time seed
  srand(time(0));

  // keep a counter of wins and losses
  int wins = 0;
  int losses = 0;
  int ties = 0;

  // start of while loop 
  bool shouldPlayAgain = true;

  while (shouldPlayAgain){
    // introduction 
    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R, S, L, or SP)\n";
    // get player's decision
    cout << "Player: ";
    
    string userChoice;
    cin >> userChoice;
    cout << "\n";

    // will store the decision of the user as an integer value 
    int user;

    // will store the decision of the user as a string value
    string userStr;

    // print their choice
    if (userChoice == "R" || userChoice == "r"){
      user = 0;
      userStr = "Rock";
      cout << "Player choose Rock";
    }
    else if (userChoice == "P" || userChoice == "p"){
      user = 1;
      userStr = "Paper";
      cout << "Player choose Paper";
    }
    else if (userChoice == "S" || userChoice == "s"){
      user = 2;
      userStr = "Scissors";
      cout << "Player choose Scissors";
    }
    else if (userChoice == "L" || userChoice == "l"){
      user = 3;
      userStr = "Lizard";
      cout << "Player choose Lizard";
    }
    else {
      user = 4;
      userStr = "Spock";
      cout << "Player choose Spock";
    }

    cout<<"\n";
    // computer's turn to pick a move
    string computerStr;
    int computer = rand() % 5;
    if (computer == 0){
      cout << "Computer choose Rock";
      computerStr = "Rock";

    }
    else if (computer == 1){
      cout << "Computer choose Paper";
      computerStr = "Paper";

    }
    else if (computer == 2){
      cout << "Computer choose Scissors";
      computerStr = "Scissors";
    }
    else if (computer == 3){
      cout << "Computer choose Lizard";
      computerStr = "Lizard";
    }
    else {
      cout << "Computer choose Spock";
      computerStr = "Spock";
    }
    cout<<"\n";
    cout<<"\n";

    // determine a winner
    if (user == 0 && computer == 2 || user == 0 && computer == 3
     || user == 1 && computer == 0 || user == 1 && computer == 4
     || user == 2 && computer == 1 || user == 2 && computer == 3
     || user == 3 && computer == 1 || user == 3 && computer == 4
     || user == 4 && computer == 0 || user == 4 && computer == 2){
      // user wins 
      cout <<userStr<<" beats "<<computerStr<<endl;
      cout << "Player Wins!\n";
      wins ++;
    }
    else if (user == computer){
      // tie game
      cout <<"Both choose "<<userStr<<endl;
      cout <<"Tie Game"<<endl;
      ties ++;
    }
    else {
      cout <<computerStr<<" beats "<<userStr<<endl;
      losses++;
    }
    cout<<"\n";
    // play again?
    string userResponse;
    cout << "Do you want to play again? (Y/N) ";
    cin >> userResponse;
    if (userResponse == "Y"){
        shouldPlayAgain = true;
    }
    else {
        shouldPlayAgain = false;
        cout << "Thanks for playing!\n";
        cout << "You won "<<wins<< " game(s), lost "<<losses<< " game(s), and tied "<<ties<<" game(s).\n";

    }
  }


  /******** INSERT YOUR CODE ABOVE HERE ********/

  return 0; // signals the operating system that our program ended OK.
}