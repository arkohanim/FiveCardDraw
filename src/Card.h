/*
 * Card.h
 *
 *  Created on: Nov 9, 2016
 *      Author: arkohanim
 */
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <random>
#include <string>
#include <utility>
#include <vector>
using namespace std;

class Card { // will be a pair

public:
	Card(pair<int, int>);

	int Suit;
	int Value;
private:

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

