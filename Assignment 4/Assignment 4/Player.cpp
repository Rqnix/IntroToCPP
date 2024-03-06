#include "Player.h"
using namespace std;


Player::Player()
{

}

Player::~Player()
{

}

bool Player::FindSpell(StringUtil a_spell)
{
		int L = 0;
		int R = size(m_spell) - 1;

		while (L <= R)
		{
			int mid = (L + R) / 2;
			if (m_spell[mid] == a_spell.CStr())
			{
				return true;
			}
			else if (m_spell[mid] < a_spell.CStr())
			{
				L = mid + 1;
			}
			else if (m_spell[mid] > a_spell.CStr())
			{
				R = mid - 1;
			}
		}
	return false;
}

