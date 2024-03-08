#pragma once
#include "StringUtil.h"
#include "Item.h"

class Room
{
private:
	StringUtil m_string = "String";
public:
	Item* m_item = nullptr;
	Room();
	~Room();
	Room(StringUtil m_string, Item* m_item);
	void Description() const;

};