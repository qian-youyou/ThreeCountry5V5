#include "Hero.h"

Hero::Hero()
{
	this->max_HP = this->HP = 500;	//初始血量
	this->atk = 50;	//初始攻击
	this->def = 20;	//初始防御
	this->vel = 0;	//初始速度
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
		cout << "英雄" << this->name << "因流血失去10%生命。" << endl;
		this->isBleed = false;
		if (this->HP <= 0) {
			cout << "英雄" << this->name << "因流血过多" << this->name << "已阵亡。" << endl;
			this->isDeath = true;
			return false;
		}
	}
	if (this->isDiz) {
		cout << "英雄" << this->name << "因眩晕停止行动一回合" << endl;
		isDiz = false;
		return false;
	}
	return true;
}

void Hero::getInf()
{
	cout << "***********************************" << endl;
	cout << this->id <<"：" << this->name<< endl;
	cout << "生命值：" << this->HP << endl;
	cout << "攻击力：" << this->atk << endl;
	cout << "防御力：" << this->def << endl;
	cout << "速度：" << this->vel << endl;
	cout << "暴击率：" << this->crit << "%" << endl;
	cout << "重击率：" << this->stun << "%" << endl;
	cout << "反伤率：" << this->suckBlood << "%" << endl;
	cout << "闪避率：" << this->miss << "%" << endl;
	cout << "武器：";
	if (this->weapon != NULL) { 
		cout << this->weapon->m_WeaponName << endl; 
	}
	else {
		cout << "无" << endl;
	}
	//cout << "技能描述：" << this->skill_name <<"——"<< this->skill_show << endl;
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
		cout << "英雄" << this->name << "攻击英雄" << hero->name << "被闪避。" << endl;
		return;
	}
	damage = damage >= hero->def ? damage - hero->def : 1;
	if (isRate(this->crit)) {
		damage *= 2;
		cout << "英雄" << this->name << "产生暴击效果，造成双倍伤害。" << endl;
	}
	if (isRate(this->stun)) {
		hero->isDiz = true;
		cout << "英雄" << this->name << "产生重击效果，对英雄" << hero->name << "造成眩晕。" << endl;
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
			cout << "英雄" << this->name << "产生吸血效果。恢复生命"<<damage<< "点。" << endl;
		}
		if (this->weapon->getHold()) {
			hero->isBleed = true;
			cout << "英雄" << this->name << "对英雄" << hero->name << "造成流血效果。" << endl;
		}
	}
	hero->HP -= damage;
	this->MP += 50;
	if (isRate(hero->suckBlood)) {
		this->HP -= floor(damage*0.5);
		if (this->HP <= 0)
			this->HP = 1;
		cout << "英雄" << this->name << "受到反伤效果，失去"<< floor(damage*0.5) <<"点生命。" << endl;
	}
	if (hero->HP <= 0) {
		cout <<"英雄"<< this->name << "已击杀英雄" << hero->name << "。" << endl;
		hero->isDeath = true;
	}
	else {
		cout << "英雄" << this->name << "对英雄" << hero->name << "造成" << damage << "点伤害。" << endl;
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
	this->crit = floor(this->force*0.05 + this->strategy * 0.05);	//暴击
	this->stun = floor(this->strategy * 0.05 + this->force*0.05);		//重击
	this->suckBlood = floor(this->wisdom *0.1);	//反伤
	this->miss = floor(this->agility *0.1);		//闪避

	this->HP += ceil(this->force *6) + ceil(this->wisdom * 4);	//血量
	this->HP *= 4;
	this->max_HP = this->HP;
	this->atk += ceil(this->force *0.8) + ceil(this->strategy * 1.2);	//攻击力
	this->atk *= 2;
	this->def += ceil(this->agility *0.6) + ceil(this->strategy * 0.4);	//防御力
	this->def *= 2;
	this->vel += ceil(this->agility *4) + ceil(this->wisdom * 6);	//速度
}
