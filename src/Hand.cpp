/*
 * Hand.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: arkohanim
 */
#include <vector>

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <random>
#include <string>
#include <utility>
#include "hand.h"
using namespace std;


Hand::Hand(){
	this->HandRank = 0;
}


Hand::Hand(int HandRank, vector<Card> hand) {

	this->HandRank = HandRank;
	this->hand = hand;

}

