#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int randomNumber=rand()%100+1;
    int attempts=0;
    while(true){
        int guess;
        cout<<"Guess a number between 1 and 100:";
        cin>>guess;
        if(guess<randomNumber){
            cout<<"Your guess is too low."<<endl;
            attempts++;
        }
        else if(guess>randomNumber){
            cout<<"Your guess is higher"<<endl;
            attempts++;
        }
        else if(guess<0 || guess>100){
            cout<<"Please guess a number between 1 and 100."<<endl;
            attempts++;
        }
        else{
            cout<<"Congratulations! You guessed the number"<< randomNumber<<"correctly!"<<endl;
            cout<<"It took you "<<attempts<<" attempts."<<endl;
            break;
        }
        
    }
    return 0;

}

