// Fill out your copyright notice in the Description page of Project Settings.

#include "SelfStats.h"

#include "../../../Intermediate/ProjectFiles/Mental.h"
#include "../../../Intermediate/ProjectFiles/Magic.h"


SelfStats::SelfStats(int health, int Stamina, Mental Mentaility , float luck, int charisma, int maxHealth, int maxStress, int stressLevel, Magic MagicSelf, int Dexterity , int Sneakyness, int Faith , int strength, int maxStamina) {
	this->Faith =Faith;
	Dex = Dexterity;
	this->Sneakyness = Sneakyness;
	MaxHealth = maxHealth;
	this->Stamina = Stamina;
	Strength = strength;
	Charisma = charisma;
	Luck = luck;
	StressLevel = stressLevel;
	Health = health;
	MaxStressLevel = maxStress;
	MaxStamina = maxStamina;
	Mastery = MagicSelf;
	this->Mentality = Mentaility;
}


SelfStats::~SelfStats()
{
}


int SelfStats::GetStamina()
{
	// TODO: Add your implementation code here.
	return 0;
}


int SelfStats::GetFaith()
{
	// TODO: Add your implementation code here.
	return 0;
}


int SelfStats::GetDex()
{
	// TODO: Add your implementation code here.
	return 0;
}


int SelfStats::GetSneak()
{
	// TODO: Add your implementation code here.
	return 0;
}


int SelfStats::GetMaxHealth()
{
	// TODO: Add your implementation code here.
	return 0;
}


int SelfStats::GetStrength()
{
	// TODO: Add your implementation code here.
	return 0;
}


int SelfStats::GetCharisma()
{
	// TODO: Add your implementation code here.
	return 0;
}


float SelfStats::GetLuck()
{
	// TODO: Add your implementation code here.
	return 0.0f;
}


float SelfStats::GetStressLevel()
{
	// TODO: Add your implementation code here.
	return 0.0f;
}


int SelfStats::GetHealth()
{
	// TODO: Add your implementation code here.
	return 0;
}


float SelfStats::GetMaxStress()
{
	// TODO: Add your implementation code here.
	return 0.0f;
}


int SelfStats::GetMaxStamina()
{
	// TODO: Add your implementation code here.
	return 0;
}



void SelfStats::SetStamina(int Stam)
{
	// TODO: Add your implementation code here.
}


int SelfStats::SetFaith(int Faith)
{
	// TODO: Add your implementation code here.
	return 0;
}
