// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../Intermediate/ProjectFiles/Mental.h"
#include "../../../Intermediate/ProjectFiles/Magic.h"

/**
 * 
 */
class THECONTEST_API SelfStats
{
public:
	SelfStats(int health, int Stamina, Mental Mentaility, float luck, int charisma, int maxHealth, int maxStress, int stressLevel, Magic MagicSelf, int Dexterity, int Sneakyness, int Faith, int strength, int maxStamina);
	~SelfStats();
private:
	Magic Mastery;
	int Faith;
	int Dex;
	int Sneakyness;
	int MaxHealth;
	int Stamina;
	int Strength;
	int Charisma;
	float Luck;
	float StressLevel;
	int Health;
	int MaxStressLevel;
	int MaxStamina;
	Mental Mentality;
public:
	int GetStamina();
	int GetFaith();
	int GetDex();
	int GetSneak();
	int GetMaxHealth();
	int GetStrength();
	int GetCharisma();
	float GetLuck();
	float GetStressLevel();
	int GetHealth();
	float GetMaxStress();
	int GetMaxStamina();
//	int SetStamina(int Stam);
	void SetStamina(int Stam);
	int SetFaith(int Faith);
};
