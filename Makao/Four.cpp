#include "Four.h"

Four::Four() : Card(cRank::Four, cSuit::None) {
}

Four::Four(cSuit suit) : Card(cRank::Four, suit) {
}

void Four::Function(int& drawStack, cSuit& desiredSuit, cRank & desiredCard, int & stopStack) {
	stopStack++;
}
