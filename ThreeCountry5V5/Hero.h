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

	bool isDeath;	//�Ƿ�����

	Weapon*weapon;

protected:

	int max_HP;
	int HP;	//Ѫ��
	int MP;	//����
	int atk;	//������
	int def;	//������
	int vel;	//�ٶ�

	string name;	//����
	string ctry;	//����
	int id;			//���
	string sex;		//�Ա�
	string skill_show;
	string skill_name;

	int wisdom;		//�ǻ�
	int strategy;	//ı��
	int force;		//����
	int agility;	//����

	int crit;		//����
	int stun;		//�ػ�
	int suckBlood;	//��Ѫ
	int miss;		//����

	bool isDiz;		//ѣ��
	bool isBleed;	//��Ѫ
};