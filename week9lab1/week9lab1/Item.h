#pragma once
#include <iostream>
#include <string>

class Item
{
private:
	std::string ItemName_;
	int ItemValue_;
	float ItemWeight_;


public:
	Item();
	Item(std::string ItemName, int ItemValue, int ItemWeight);

	void SetItemName(std::string ItemName);
	std::string GetItemName() const;

	void SetItemValue(std::string ItemValue);
	int GetItemValue() const;

	void SetItemWeight(std::string ItemWeight);
	int GetItemWeight() const;


};

