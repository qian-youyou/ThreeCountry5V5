#pragma once
#include<iostream>
#include<string>
using namespace std;
//������
class Weapon {
public:
	//��ȡ�����˺�
	virtual int getBaceDamage() = 0;

	//��ȡ����
	virtual int getBaceDef() = 0;

	//��ȡ��Ѫ
	virtual bool getSuckBlood() = 0;

	//��ȡ��Ѫ
	virtual bool getHold() = 0;

	static bool isTrigger(int rate);

	string m_WeaponName;	//������
	int m_BaceDamage;	//�����˺�
	int BaceDef;	//��������
};

class Knife :public Weapon {
public:
	Knife();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();

	int holdRate;
};

class DragonSword :public Weapon {
public:
	DragonSword();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();

	int holdRate;
};

class Sword :public Weapon {
public:
	Sword();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();

	int suckRate;
	int holdRate;
};

class Shield :public Weapon {
public:
	Shield();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();

};


class Spear :public Weapon {
public:
	Spear();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();
	int suckRate;
};


class Bow :public Weapon {
public:
	Bow();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();
};

class Book :public Weapon {
public:
	Book();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();

	int suckRate;
};

class Fan :public Weapon {
public:
	Fan();
	//��ȡ�����˺�
	virtual int getBaceDamage();

	//��ȡ����
	virtual int getBaceDef();

	//��ȡ��Ѫ
	virtual bool getSuckBlood();

	//��ȡ��Ѫ
	virtual bool getHold();

	int holdRate;
	int suckRate;
};