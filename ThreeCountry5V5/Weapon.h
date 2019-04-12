#pragma once
#include<iostream>
#include<string>
using namespace std;
//抽象类
class Weapon {
public:
	//获取基础伤害
	virtual int getBaceDamage() = 0;

	//获取防御
	virtual int getBaceDef() = 0;

	//获取吸血
	virtual bool getSuckBlood() = 0;

	//获取流血
	virtual bool getHold() = 0;

	static bool isTrigger(int rate);

	string m_WeaponName;	//武器名
	int m_BaceDamage;	//基础伤害
	int BaceDef;	//基础防御
};

class Knife :public Weapon {
public:
	Knife();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();

	int holdRate;
};

class DragonSword :public Weapon {
public:
	DragonSword();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();

	int holdRate;
};

class Sword :public Weapon {
public:
	Sword();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();

	int suckRate;
	int holdRate;
};

class Shield :public Weapon {
public:
	Shield();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();

};


class Spear :public Weapon {
public:
	Spear();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();
	int suckRate;
};


class Bow :public Weapon {
public:
	Bow();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();
};

class Book :public Weapon {
public:
	Book();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();

	int suckRate;
};

class Fan :public Weapon {
public:
	Fan();
	//获取基础伤害
	virtual int getBaceDamage();

	//获取防御
	virtual int getBaceDef();

	//获取吸血
	virtual bool getSuckBlood();

	//获取流血
	virtual bool getHold();

	int holdRate;
	int suckRate;
};