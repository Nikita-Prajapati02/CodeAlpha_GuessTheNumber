#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{

    cout<<"\n ********************Welcome to Guess the Number game!*******************"<<endl;
    cout<<"You have to guess a number between 1 to 100. You'll have limited choices based on the level you choose. Good Luck !"
          <<endl;

     while (true){
        cout<< "\nEnter the difficulty level: \n ";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game!\t"<<endl;

        //select the difficulty level
        int  difficultyChoice;
        cout<< "Enter the number: ";
        cin>>difficultyChoice;

        //generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        //difficultt level:easy 
        if (difficultyChoice ==1){
            cout<< "\nYou have 10 choice for finding the secret number between 1 to 100."<<endl;
            int choicesLeft = 10;
            for (int i=1; i<= 10; i++){

            // here player is to  guess the secret number
            cout<<"\n Enter the number: ";
            cin>>playerChoice;

            //determining if the playerChoice matches the secret number
            if (playerChoice == secretNumber){
                cout<<"Well played! You won , "<<playerChoice<< " is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing...."<<endl;
                cout<<"Play the game again with us!\n\n"<<endl;
                break;
                 }
            else{
                cout <<"Nope, "<<playerChoice<< " is not the right number\n";
                if(playerChoice > secretNumber){
                    cout<< "The number is too low"<<endl;
                }
                else{
                    cout<< "The number is too high"<<endl;
                }
                choicesLeft--;
                cout<< choicesLeft<<"  choices left."<<endl;
                if ( choicesLeft == 0){
                    cout<<"You couldn't find the secret number,it was" << secretNumber<<",You lose!!\n\n";
                    cout<<" Play the game again to win!!!\n\n\n";

                }

                  }      
            }
        }


        //difficultt level:medium 
        if (difficultyChoice ==2){
            cout<< "\nYou have 7 choice for finding the secret number between 1 to 100."<<endl;
            int choicesLeft = 7;
            for (int i=1; i<= 7; i++){

            // here player is to  guess the secret number
            cout<<"\nEnter the number: ";
            cin>>playerChoice;

            //determining if the playerChoice matches the secret number
            if (playerChoice == secretNumber){
                cout<<"Well played! You won ,"<<playerChoice<< " is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing...."<<endl;
                cout<<"Play the game again with us!\n\n"<<endl;
                break;
                 }
            else{
                cout <<"Nope, "<<playerChoice<< " is not the right number\n";
                if(playerChoice > secretNumber){
                    cout<< "The number is too low"<<endl;
                }
                else{
                    cout<< "The number is too high"<<endl;
                }
                choicesLeft--;
                cout<< choicesLeft<<" choices left."<<endl;
                if ( choicesLeft == 0){
                    cout<<"You couldn't find the secret number,it was" << secretNumber<<",You lose!!\n\n";
                    cout<<" Play the game again to win!!!\n\n\n";

                }

                  }      
            }
        }


        //difficultt level:difficult
        if (difficultyChoice ==3){
            cout<< "\nYou have 5 choice for finding the secret number between 1 to 100."<<endl;
            int choicesLeft = 5;
            for (int i=1; i<= 5; i++){

            // here player is to  guess the secret number
            cout<<"\nEnter the number: ";
            cin>>playerChoice;

            //determining if the playerChoice matches the secret number
            if (playerChoice == secretNumber){
                cout<<"Well played! You won ,"<<playerChoice<< " is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing...."<<endl;
                cout<<"Play the game again with us!\n\n"<<endl;
                break;
                 }
            else{
                cout <<"Nope, "<<playerChoice<< " is not the right number\n";
                if(playerChoice > secretNumber){
                    cout<< "The number is too low"<<endl;
                }
                else{
                    cout<< "The number is too high"<<endl;
                }
                choicesLeft--;
                cout<< choicesLeft<<"  choices left."<<endl;
                if ( choicesLeft == 0){
                    cout<<"You couldn't find the secret number,it was  " << secretNumber<<",You lose!!\n\n";
                    cout<<" Play the game again to win!!!\n\n\n";

                 }

                }    
            }
        }
     

        // To end the game
        else if (difficultyChoice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"
                 << endl;
       } 

     }
      
     return 0; 
     

}