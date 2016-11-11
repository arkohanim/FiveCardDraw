/*
 * Deck.h
 *
 *  Created on: Nov 9, 2016
 *      Author: arkohanim
 */
#include "card.h"
using namespace std;

class Deck {
private:
	int NCards;
	string deckType;
	vector<Card> deck;
	void buildDeck();
	void printDeck();
	void shuffleDeck();
public:
	Deck(int NCards, string deckType);

	enum Suits {
		CLUBS, DIAMONDS, HEARTS, SPADES
	};

	enum Values {
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		JACK,
		QUEEN,
		KING,
		ACE

	};

};

