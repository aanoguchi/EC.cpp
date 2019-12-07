// Khoa Nguyen
// CSCI1-0105. Project: BlackJack card game
// This program will let user play blackjack against comupter

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
// Card suit
enum Suit{HEART,DIAMOND,SPADES,CLOVER};
// Card rank
enum Rank{Ace,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,J,K,Q };
// Structure of a card
struct card {
	char Suit;
	int Rank;
};
// Make global variable for 5 cards and card total
// Don't use global variables! Instead create a data type for a hand, and pass it to functions.
// int card(1), card(2), card(3), card(4), card(5), cardTotal;
using Hand = vector<card>;
struct GameState {
	Hand dealer;
	Hand player;
	Deck deck;
};
// For example:
// Don't store cardTotal separately, because it would need to be kept in sync with the current cards.
// Instead calculate the cardTotal when it is needed with a function such as:
int cardTotal(Hand h);
// Pass a game state to every function that needs that information.
// To update the game state return a new value. This allows asserts to work.
GameState playerDrawCard(GameState gs);
void promptUser(GameState gs);

int main() {
	cout << "Project: BlackJack Card Game" << endl;
	cout << "****************************" << endl;
	cout << "Welcome to BlackJack" << endl;
	cout << "Press Enter to start the game and get your deal cards" << endl;
	cin.get();
	// deal cards
	

	
	return 0;
}
// Make sure and use the template!
void run() {
	srand(time(NULL));
}
// Possibly start with a sorted deck and then shuffle. Then drawing a card is a matter of a pop_back()
// const vector<Card> SORTED_DECK = { 0, 1, 2, 3 };
// Function for deal cards
Hand  playerDealCards() {
	// Use this to get a random card in the deck
	// rand() % deck_size
}
void to_win(){
}
void to_lose(){}
void special_fifth_card(){}
void double_ace(){}
