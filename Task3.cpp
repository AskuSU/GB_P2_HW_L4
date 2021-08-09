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


Card::Card(Rank r = Rank::ACE, Suit s = Suit::SPADES, bool ifu = true) : suit(s), rank(r), isFaceUp(ifu)//, isStayedInTheDeck{ true }
{};

void Card::SetValue(Rank den, Suit suit)
{
	rank = den;
	this->suit = suit;
}
uint16_t Card::GetValue() const
{
	uint16_t val = 0;
	if (isFaceUp)
	{
		val = std::underlying_type<Rank>::type(rank);
		if (val > 10) val = 10;
	}
	return val;
};

Deck::Deck()
{
	for (const auto& i : Suit())
	{
		for (const auto& j : Rank())
		{
			cards[(int)i - 1][(int)j - 1].SetValue(j, i);
		}
	}	
}

Game::Game(std::vector<std::string> names)
{
}

void Game::Play()
{
}

bool House::IsHitting() const
{
	return false;
}
