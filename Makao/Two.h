#pragma once
#include "Card.h"
#include <vector>

class Two : public Card {
	public:
		Two();
		Two(cSuit suit);
		void Function(int& drawStack, cSuit& desiredSuit, cRank& desiredCard, int& stopStack);
};