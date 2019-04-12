#include "Hero.h"

Hero::Hero()
{
	this->max_HP = this->HP = 500;	//��ʼѪ��
	this->atk = 50;	//��ʼ����
	this->def = 20;	//��ʼ����
	this->vel = 0;	//��ʼ�ٶ�
	this->MP = 50;
	this->isDeath = false;
	this->isDiz = false;
	this->isBleed = false;

	this->weapon = NULL;

	this->crit = 0;		
	this->stun = 0;
	this->suckBlood = 0;	
	this->miss = 0;	
}

int Hero::getHP()
{
	return this->HP;
}

int Hero::getMP()
{
	return this->MP;
}

int Hero::getAtk()
{
	return this->atk;
}

int Hero::getDef()
{
	return this->def;
}

string Hero::getName()
{
	return this->name;
}

bool Hero::action()
{
	if (this->isBleed) {
		this->HP -= ceil(HP*0.1);
		cout << "Ӣ��" << this->name << "����Ѫʧȥ10%������" << endl;
		this->isBleed = false;
		if (this->HP <= 0) {
			cout << "Ӣ��" << this->name << "����Ѫ����" << this->name << "��������" << endl;
			this->isDeath = true;
			return false;
		}
	}
	if (this->isDiz) {
		cout << "Ӣ��" << this->name << "��ѣ��ֹͣ�ж�һ�غ�" << endl;
		isDiz = false;
		return false;
	}
	return true;
}

void Hero::getInf()
{
	cout << "***********************************" << endl;
	cout << this->id <<"��" << this->name<< endl;
	cout << "����ֵ��" << this->HP << endl;
	cout << "��������" << this->atk << endl;
	cout << "��������" << this->def << endl;
	cout << "�ٶȣ�" << this->vel << endl;
	cout << "�����ʣ�" << this->crit << "%" << endl;
	cout << "�ػ��ʣ�" << this->stun << "%" << endl;
	cout << "�����ʣ�" << this->suckBlood << "%" << endl;
	cout << "�����ʣ�" << this->miss << "%" << endl;
	cout << "������";
	if (this->weapon != NULL) { 
		cout << this->weapon->m_WeaponName << endl; 
	}
	else {
		cout << "��" << endl;
	}
	//cout << "����������" << this->skill_name <<"����"<< this->skill_show << endl;
	cout << "***********************************" << endl;
}

void Hero::attack(Hero * hero)
{
	if (!this->action()) {
		return;
	}
	int damage = this->atk;
	if (damage <= 0) {
		damage = 1;
	}
	if (isRate(hero->miss)) {
		cout << "Ӣ��" << this->name << "����Ӣ��" << hero->name << "�����ܡ�" << endl;
		return;
	}
	damage = damage >= hero->def ? damage - hero->def : 1;
	if (isRate(this->crit)) {
		damage *= 2;
		cout << "Ӣ��" << this->name << "��������Ч�������˫���˺���" << endl;
	}
	if (isRate(this->stun)) {
		hero->isDiz = true;
		cout << "Ӣ��" << this->name << "�����ػ�Ч������Ӣ��" << hero->name << "���ѣ�Ρ�" << endl;
	}
	if (hero->weapon != NULL) {
		damage -= hero->weapon->getBaceDef();
		if (damage <= 0) {
			damage = 1;
		}
	}
	if (this->weapon != NULL) {
		damage += this->weapon->getBaceDamage();
		if (this->weapon->getSuckBlood()) {
			this->HP += damage;
			if (this->HP > this->max_HP) {
				this->HP = this->max_HP;
			}
			cout << "Ӣ��" << this->name << "������ѪЧ�����ָ�����"<<damage<< "�㡣" << endl;
		}
		if (this->weapon->getHold()) {
			hero->isBleed = true;
			cout << "Ӣ��" << this->name << "��Ӣ��" << hero->name << "�����ѪЧ����" << endl;
		}
	}
	hero->HP -= damage;
	this->MP += 50;
	if (isRate(hero->suckBlood)) {
		this->HP -= floor(damage*0.5);
		if (this->HP <= 0)
			this->HP = 1;
		cout << "Ӣ��" << this->name << "�ܵ�����Ч����ʧȥ"<< floor(damage*0.5) <<"��������" << endl;
	}
	if (hero->HP <= 0) {
		cout <<"Ӣ��"<< this->name << "�ѻ�ɱӢ��" << hero->name << "��" << endl;
		hero->isDeath = true;
	}
	else {
		cout << "Ӣ��" << this->name << "��Ӣ��" << hero->name << "���" << damage << "���˺���" << endl;
	}
}

bool Hero::isRate(int rate)
{
	if (rate >= rand() % 100 + 1) {
		return true;
	}
	return false;
}

void Hero::init_property()
{
	this->crit = floor(this->force*0.05 + this->strategy * 0.05);	//����
	this->stun = floor(this->strategy * 0.05 + this->force*0.05);		//�ػ�
	this->suckBlood = floor(this->wisdom *0.1);	//����
	this->miss = floor(this->agility *0.1);		//����

	this->HP += ceil(this->force *6) + ceil(this->wisdom * 4);	//Ѫ��
	this->HP *= 4;
	this->max_HP = this->HP;
	this->atk += ceil(this->force *0.8) + ceil(this->strategy * 1.2);	//������
	this->atk *= 2;
	this->def += ceil(this->agility *0.6) + ceil(this->strategy * 0.4);	//������
	this->def *= 2;
	this->vel += ceil(this->agility *4) + ceil(this->wisdom * 6);	//�ٶ�
}
