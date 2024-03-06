#include "Room.h"



Room::Room()
{
	m_string = nullptr;
	m_item = nullptr;
}

Room::~Room()
{
	delete m_item;
}

Room::Room(StringUtil a_string, Item* a_item)
{
	m_string = a_string;
	m_item = a_item;
}

void Room::Description() const
{
	m_string.WriteToConsole();
}
