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

//could possibly done with a vector or other data type
//keys are card values, mapped with how many times they occur in the hand
map<int,int> Hand::countMatches(){
	//vector <int> count;
	map <int,int> matches;
	for(unsigned int i = 0; i < hand.size(); i++){
		//count[i]++;
		int cardRank = hand[i].Value;
		matches[cardRank]++;
	}
	return matches;
}
