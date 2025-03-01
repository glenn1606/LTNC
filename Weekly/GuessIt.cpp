#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int generateRandomNumber(){
    return (rand() % 100 + 1);
}

int getPlayerGuess(){
    int guess;
    cout << endl << "Enter your guess (1..100): ";
    cin>>guess;
    return (guess);
}

void printAnswer (int guess, int secretNumber){
    if (guess < secretNumber) cout << "Your number is too small.\n";
    if (guess > secretNumber) cout << "Your number is too big.\n";
    if (guess == secretNumber) cout << "Congratulation! You win.\n";
}

void playGuessIt(){
    int secretNumber = generateRandomNumber();
    int guess;
    int guessCount = 0;
    int score;
    do {
        guess = getPlayerGuess();
        guessCount ++;
        //score = score - 2 * (100 - guessCount);
        cout << "Your guess count: " << guessCount << endl;
        printAnswer(guess, secretNumber);
    }
    while (guess != secretNumber);
    score = 100 - guessCount;
    cout << "Your score is: " << score << endl;

}
int main(){
    srand(time(0));
    int Answer;
    do {
        playGuessIt();
        cout << "Do you want to continue?\n" << "Press 1 to continue, 0 to stop\n";
        cin >> Answer;
    }
    while (Answer == 1);

    return 0;
}
