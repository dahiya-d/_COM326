#pragma once
#include "Item.h"

enum ArmourType { Cardboard, Leather, Wood, Iron, Steel };
class Armour : public Item
{
private: 
	int defence_;
	int armourHealth_;
	ArmourType armourType_;

public:
	Armour();
	Armour(std::string armourName, int value, float weight, int defence);

	void SetDefence(int defense);
	int GetDefence() const;

	void SetArmourHealth(int armourHealth);
	int GetArmourHealth() const;

	void SetArmourType(ArmourType armourType);
	int GetArmourType() const;

};

