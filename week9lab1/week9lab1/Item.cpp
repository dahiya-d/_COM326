#include "Item.h"

Item::Item() {};

Item::Item(std::string ItemName, int ItemValue, int ItemWeight)
	: ItemName_{ ItemName }, ItemValue_{ ItemValue }, ItemWeight_{ ItemWeight }{
};



void Item::SetItemName(std::string ItemName) {
	ItemName_ = ItemName;
}

std::string Item::GetItemName() const {
	return ItemName_;
}

void Item::SetItemValue(std::string ItemValue) {
	ItemValue = ItemValue_;
}
int Item::GetItemValue() const {
	return ItemValue_;
}

void Item::SetItemWeight(std::string ItemWeight) {
	ItemWeight = ItemWeight_;
}
int Item::GetItemWeight() const {
	return ItemWeight_;
}


