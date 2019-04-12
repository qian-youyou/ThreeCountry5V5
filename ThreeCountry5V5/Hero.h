#pragma once
#include<iostream>
#include<string>
#include"Weapon.h"
using namespace std;
class Hero {
public:
	Hero();
	int getHP();
	int getMP();
	int getAtk();
	int getDef();
	string getName();
	bool action();
	void getInf();
	void attack(Hero*hero);
	bool isRate(int rate);
	void init_property();
	virtual void skill(Hero * hero) = 0;
	virtual void passive_skill() = 0;

	bool isDeath;	//是否死亡

	Weapon*weapon;

protected:

	int max_HP;
	int HP;	//血量
	int MP;	//蓝量
	int atk;	//攻击力
	int def;	//防御力
	int vel;	//速度

	string name;	//姓名
	string ctry;	//国家
	int id;			//编号
	string sex;		//性别
	string skill_show;
	string skill_name;

	int wisdom;		//智慧
	int strategy;	//谋略
	int force;		//力量
	int agility;	//敏捷

	int crit;		//暴击
	int stun;		//重击
	int suckBlood;	//回血
	int miss;		//闪避

	bool isDiz;		//眩晕
	bool isBleed;	//流血
};