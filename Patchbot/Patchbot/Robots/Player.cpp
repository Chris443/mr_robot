#include "Player.h"



Player::Player(int x, int y)
	:m_alive(true),
	m_blocked(false),
	m_xPos(x),
	m_yPos(y)
{
}


Player::~Player()
{
}
