#ifndef H_PLAYER
#define H_PLAYER

class Player
{
public:
	Player(int x, int y);
	~Player();

	void set_alive(bool alive) { m_alive = alive; }
	void set_blocked(bool blocked) { m_blocked = blocked; }
	void set_xPos(int x) { m_xPos = x; }
	void set_yPos(int y) { m_yPos = y; }
	void set_Pos(int x, int y) { m_xPos = x; m_yPos = y; }

	bool get_alive() { return m_alive; }
	bool is_blocked() { return m_blocked; }
	int get_xPos() { return m_xPos; }
	int get_yPos() { return m_yPos; }
private:
	bool m_alive;
	bool m_blocked;
	int m_xPos;
	int m_yPos;
};

#endif

