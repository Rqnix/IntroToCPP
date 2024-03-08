#pragma once
#include "StringUtil.h"

class Item
{
public:
	StringUtil description;
public:
	virtual void Description() const;
	virtual void Use();


};

