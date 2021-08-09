#include"Task3.h"

Rank operator++(Rank& den) { return den = (Rank)(std::underlying_type<Rank>::type(den) + 1); };
Rank operator*(Rank den) { return den; };
Rank begin(Rank den) { return Rank::first; };
Rank end(Rank den) 
{
	Rank de = Rank::last;
	return ++de; 
};

Suit operator++(Suit& suit) { return suit = (Suit)(std::underlying_type<Suit>::type(suit) + 1); };
Suit operator*(Suit suit) { return suit; };
Suit begin(Suit suit) { return Suit::first; };
Suit end(Suit suit)
{
	Suit su = Suit::last;
	return ++su; 
};


Card::Card() : isHidden{ true }, isStayedInTheDeck{ true }
{};

void Card::setValue(Rank den, Suit suit)
{
	rank = den;
	this->suit = suit;
}
uint16_t Card::getValue()
{
	uint16_t val = std::underlying_type<Rank>::type(rank);
	if (val > 10) val = 10;
	return val;
}
;

Deck::Deck()
{
	for (const auto& i : Suit())
	{
		for (const auto& j : Rank())
		{
			cards[(int)i - 1][(int)j - 1].setValue(j, i);
		}
	}	
}
