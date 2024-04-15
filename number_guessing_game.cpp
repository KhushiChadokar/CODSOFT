#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int random_number,guess,attempts=0;
    srand((unsigned int) time(NULL));  //generates any random number with every new entry
    random_number = rand() % 100 + 1;

//applying do-while loop to enter the number(guess) until the correct number has been guessed by the player
    cout << "Hey player!! guess the number between 1 and 100: ";
    do{

        cin >> guess;
        if (guess < random_number)
        {
            cout << "Your guess is too low! Try again: ";
        }
        else if(guess > random_number)
        {
            cout << "Your guess is too high! Try again: ";
        }
        else{
            cout<<"Congratulations you guessed it right with total attempts of : "<< attempts <<endl;
        }
        attempts++;
        
    }
    
    while (guess!= random_number);
    
    return 0;
}
