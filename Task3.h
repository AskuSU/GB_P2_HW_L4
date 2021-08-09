#pragma once
#include <type_traits>
#include<string>
//#include<stdint.h>

//<<-----------Колода---------------

enum class Rank
{
	A = 1,
	_2, _3, _4, _5, _6, _7, _8, _9, _10,
	J, Q, K,
	first = A,
	last = K
};

enum class Suit
{
	clubs = 1,	//♣️
	diamonds,	//♦️
	hearts,		//♥️
	spades,		//♠️
	first = clubs,
	last = spades
};

class Card
{
public:
	Card();
	
	void setValue(Rank den, Suit suit);
	
	Rank getRank() { return rank; };
	Suit getSuit() { return suit; };
	void flip() { isHidden = !isHidden; };
	uint16_t getValue();

private:
	Rank rank;
	Suit suit;
	bool isHidden;
	bool isStayedInTheDeck;

};

class Hand
{

};

class Deck : public Hand
{
public:
	Deck();

	Card getCard(uint16_t number);
	bool checkIsStayedCard(uint16_t number);

private:
	uint16_t numberOfCards = (int)Suit::last * (int)Rank::last;
	Card cards[(int)Suit::last][(int)Rank::last]{};
};

//-------------Колода------------->>

//<<-----------Фишки, Очки---------------

enum class Chip
{
	White	= 1,
	Red		= 5,
	Blue	= 10,
	Green	= 25,
	Black	= 100,
	Magenta	= 500,
	Orange	= 1000,

	count = 7
};

class ChipsOnHand
{
public:

private:
	Chip chips[(int)Chip::count]{};
};

//-------------Фишки, Очки------------->>

//<<-----------Участники игры---------------

class GenericPlayer : public Hand
{

};

class Player : public GenericPlayer
{

};

class House : public GenericPlayer
{

};


class GameEntity
{
public:

private:
	std::string name;
	//int64_t 
};

//-------------Участники игры------------->>

//<<-----------Игра---------------

class Game
{

};

//-------------Игра------------->>
