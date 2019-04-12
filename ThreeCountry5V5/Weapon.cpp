#include "Weapon.h"


Knife::Knife()
{
	this->m_BaceDamage = 10;
	this->BaceDef = 0;
	this->holdRate = 30;
	this->m_WeaponName = "·æÀûØ°Ê×";
}

int Knife::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Knife::getBaceDef()
{
	return this->BaceDef;
}

bool Knife::getSuckBlood()
{
	return false;
}

bool Knife::getHold()
{
	return isTrigger(this->holdRate);
}


DragonSword::DragonSword()
{
	this->m_BaceDamage = 20;
	this->m_WeaponName = "ÍÀÁú±¦µ¶";
	this->BaceDef = 10;
	this->holdRate = 20;
}

int DragonSword::getBaceDamage()
{
	return this->m_BaceDamage;
}

int DragonSword::getBaceDef()
{
	return this->BaceDef;
}

bool DragonSword::getSuckBlood()
{
	return false;
}

bool DragonSword::getHold()
{
	return isTrigger(this->holdRate);
}

bool Weapon::isTrigger(int rate)
{
	if (rate >= rand() % 100 + 1) {
		return true;
	}
	return false;
}

Sword::Sword()
{
	this->m_BaceDamage = 20;
	this->m_WeaponName = "ÒĞÌìÉñ½£";
	this->BaceDef = 10;
	this->suckRate = 10;
	this->holdRate = 10;
}

int Sword::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Sword::getBaceDef()
{
	return this->BaceDef;
}

bool Sword::getSuckBlood()
{
	return isTrigger(this->suckRate);
}

bool Sword::getHold()
{
	return isTrigger(this->holdRate);
}


Shield::Shield()
{
	this->m_BaceDamage = 0;
	this->m_WeaponName = "ĞÌÌì¾Ş¶Ü";
	this->BaceDef = 70;
}

int Shield::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Shield::getBaceDef()
{
	return this->BaceDef;
}

bool Shield::getSuckBlood()
{
	return false;
}

bool Shield::getHold()
{
	return false;
}


Spear::Spear()
{
	this->m_BaceDamage = 10;
	this->m_WeaponName = "ÁÁÒø³¤Ç¹";
	this->BaceDef =20;
	this->suckRate = 20;
}

int Spear::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Spear::getBaceDef()
{
	return this->BaceDef;
}

bool Spear::getSuckBlood()
{
	return isTrigger(this->suckRate);
}

bool Spear::getHold()
{
	return false;
}


Bow::Bow()
{
	this->m_BaceDamage = 70;
	this->m_WeaponName = "ÉäÈÕÉñ¹­";
	this->BaceDef = 0;
}

int Bow::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Bow::getBaceDef()
{
	return this->BaceDef;
}

bool Bow::getSuckBlood()
{
	return false;
}

bool Bow::getHold()
{
	return false;
}


Book::Book()
{
	this->m_BaceDamage = 0;
	this->m_WeaponName = "¶İ¼×ÌìÊé";
	this->BaceDef = 10;
	this->suckRate = 30;
}

int Book::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Book::getBaceDef()
{
	return this->BaceDef;
}

bool Book::getSuckBlood()
{
	return isTrigger(this->suckRate);
}

bool Book::getHold()
{
	return false;
}


Fan::Fan()
{
	this->m_BaceDamage = 30;
	this->m_WeaponName = "ÖìÈ¸ÓğÉÈ";
	this->BaceDef = 0;
	this->suckRate = 10;
	this->holdRate = 10;
}

int Fan::getBaceDamage()
{
	return this->m_BaceDamage;
}

int Fan::getBaceDef()
{
	return this->BaceDef;
}

bool Fan::getSuckBlood()
{
	return isTrigger(this->suckRate);
}

bool Fan::getHold()
{
	return isTrigger(this->holdRate);
}