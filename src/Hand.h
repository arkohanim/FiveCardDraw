/*
 * Hand.h
 *
 *  Created on: Nov 10, 2016
 *      Author: arkohanim
 */

#ifndef DECK_H_
#define DECK_H_

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

/**
 * changed some stuff 16:57
 */

class Hand { // will be a pair

public:
	Hand(int HandRank, vector<Card> hand);
	Hand();
	map<int,int> countMatches();
	vector <int> countMatchesVector();
	bool has1pair();
	bool has2pairs();
	int getMaxMatches();

private:

	int HandRank; // what you have, stored in main right now
	vector<Card> hand; // any hand
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

#endif
