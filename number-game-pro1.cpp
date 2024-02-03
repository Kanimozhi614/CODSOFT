#include<iostream>
#include<cstdlib>
#include<ctime>

const int players=10;
std::string leaderBoardNames[players];
int leaderBoardScores[players];
int currentPlayer=0;

void displayMenu(){
    std::cout<<"\n\n______________________ Welcome to number guessing game ________________________";
    std::cout << "\n\nInstructions to play the game:";
    std::cout << "\n\n* I will select a random number ";
    std::cout << "\n* You have to guess that number.";
    std::cout << "\n* Keep guessing until you find the correct number.";
    std::cout << "\n* Your score will be based on the number of attempts.";
    std::cout << "\n* You can choose the difficulty level to adjust the range of numbers.";
    std::cout << "\n* Have fun and enjoy the game!!!";
     std::cout << "\n_______________________________________________________________________________ " ;
     }
    void display() {
    std::cout<<"\n\n OPTIONS:";
    std::cout << "\n\n1. Play the Game";
    std::cout<<"\n2. Leader Board";
    std::cout << "\n3. Quit";
    }
    void showLeaderBoard() {
    std::cout << "\n\n LeaderBoard:";
    std::cout << "\n------------------------";
    std::cout << "\nName\t\tScore";
    std::cout << "\n------------------------";

    for (int i = 0; i < currentPlayer; ++i) {
        std::cout << "\n" << leaderBoardNames[i] << "\t\t" << leaderBoardScores[i];
        
    }

    std::cout << "\n------------------------\n";
}


    
int main(){
    srand(time(0));
    int choice;
    std::string name;
   
    displayMenu();
    while(choice!=3){
        display();
        std::cout<<"\n\nEnter your choice:";
        std::cin>>choice;
        switch(choice){
             case 1: {
                int level;
                std::cout<<"\nEnter your name:";
                std::cin>>name;
                std::cout << "\nChoose the level:";
                std::cout << "\n1. Easy (1-20)  -> 10 chances";
                std::cout << "\n2. Medium (1-50)  -> 7 chances";
                std::cout << "\n3. Hard (1-100)  ->5 chances" ;
                std::cout << "\nEnter the level (1-3): ";
                std::cin >>level;
                int maxNumber;
                int maxChances;
                int maxScore;
                switch(level){
                 case 1:
                        maxNumber = 20;
                        maxChances = 10;
                        maxScore = 100; // Max score for Easy level
                        break;
                    case 2:
                        maxNumber = 50;
                        maxChances = 7;
                        maxScore = 70; // Max score for Medium level
                        break;
                    case 3:
                        maxNumber = 100;
                        maxChances = 5;
                        maxScore = 50; // Max score for hard level
                        break;
                    default:
                        std::cout << "\nInvalid  level. ";
                        continue;
                        //break;
                }
               int randomNumber = rand() % maxNumber + 1;
                int guess;
                int attempts = 0;
                int score = 0;

                std::cout << "\nGAME HAS STARTED!!!!";
                std::cout<<"\nGuess number between 1 and "<<maxNumber<<" .";
                std::cout<<"\nYou have "<<maxChances<<"  chances to guess the correct number.";
                while (attempts < maxChances) {
                    std::cout << "\n\nEnter your guess:";
                    std::cin >> guess;
                    attempts
                    ++;
                   
                    if(guess==randomNumber){
                        std::cout<<"\nCongratulations!! "<<name<<" You won the game...";
                        std::cout<<"\nYou guessed the correct number in "<<attempts<<" attempts.";
                         score = ((maxChances - attempts)+1) * (maxScore / maxChances);
                        std::cout<<"\nYour score is "<<score<<" points";
                        if (attempts == 1) {
                                std::cout << "\nYou earned  *** stars!";
                            } else if (attempts <= maxChances / 2) {
                                std::cout << "\nYou earned ** stars!";
                            } else {
                                std::cout << "\nYou earned * star!";
                            }
                            //Update leader Board
                            leaderBoardNames[currentPlayer]=name;
                            leaderBoardScores[currentPlayer]=score;
                            currentPlayer++;

                        break;
                    }
                    else if(attempts==maxChances){
                        std::cout<<"Sorry! Your chances are over..";
                        std::cout<<"\nThe correct number is "<<randomNumber<<".";
                    }
                     else if (guess < randomNumber) {
                        std::cout << "\nToo low! Try again." ;
                        std::cout<<"\nYou have only "<<maxChances-attempts<<" chances left.";
                    } else {
                        std::cout << "\nToo high! Try again.";
                         std::cout<<"\nYou have only"<<maxChances-attempts<<"chances left.";
                    }
                    
                }
               
                break;
                
            }
            case 2:
            showLeaderBoard();
            break;
           
            case 3:
            std::cout<<"\nThanks for playing the game!!!!\n\n";
            break;
            default:
            std::cout<<"\nInvalid choice.";
                    }
    }
    return 0;
}
