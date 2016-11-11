/*
 * Hand.h
 *
 *  Created on: Nov 10, 2016
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
#include "card.h"
using namespace std;

class Hand { // will be a pair

public:
	Hand(int HandRank, vector<Card> hand);

	int HandRank; // what you have, stored in main right now
	vector<Card> hand; // any hand
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