#include "Shu.h"

LiuBei::LiuBei()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 1;			//���
	wisdom = 72;	//�ǻ�
	strategy = 62;	//ı��
	force = 60;		//����
	agility = 25;	//����

	skill_name = "Ψ��Ψ��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Sword;
}

void LiuBei::skill(Hero * hero)
{
	this->MP = 0;
}

void LiuBei::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->atk += this->strategy;
}

GuanYu::GuanYu()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 2;			//���
	wisdom = 60;	//�ǻ�
	strategy = 60;	//ı��
	force = 98;		//����
	agility = 90;	//����

	skill_name = "��������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new DragonSword;
}

void GuanYu::skill(Hero * hero)
{
	this->MP = 0;
}

void GuanYu::passive_skill()
{
	this->stun += 50;
}

ZhangFei::ZhangFei()
{
	name = "�ŷ�";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 3;			//���
	wisdom = 70;	//�ǻ�
	strategy = 77;	//ı��
	force = 100;		//����
	agility = 72;	//����

	skill_name = "��������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void ZhangFei::skill(Hero * hero)
{
	this->MP = 0;
}

void ZhangFei::passive_skill()
{
	this->atk = floor(this->atk*0.9);
	this->crit += 50;
}


ZhuGeLiang::ZhuGeLiang()
{
	name = "�����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 4;			//���
	wisdom = 100;	//�ǻ�
	strategy = 100;	//ı��
	force = 10;		//����
	agility = 32;	//����

	skill_name = "����Х��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Fan;
}

void ZhuGeLiang::skill(Hero * hero)
{
	this->MP = 0;
}

void ZhuGeLiang::passive_skill()
{
	this->vel += 50;
	this->atk += 50;
	this->miss += 30;
}

ZhaoYun::ZhaoYun()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 5;			//���
	wisdom = 75;	//�ǻ�
	strategy = 80;	//ı��
	force = 98;		//����
	agility = 100;	//����

	skill_name = "��̽����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void ZhaoYun::skill(Hero * hero)
{
	this->MP = 0;
}

void ZhaoYun::passive_skill()
{
	this->miss += 50;
}

MaChao::MaChao()
{
	name = "��";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 6;			//���
	wisdom = 42;	//�ǻ�
	strategy = 20;	//ı��
	force = 95;		//����
	agility = 94;	//����

	skill_name = "��������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void MaChao::skill(Hero * hero)
{
}

void MaChao::passive_skill()
{
	this->vel *= 2;
	this->crit += 30;
	this->stun += 10;
}

HuangZhong::HuangZhong()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 7;			//���
	wisdom = 50;	//�ǻ�
	strategy = 45;	//ı��
	force = 98;	//����
	agility = 72;	//����

	skill_name = "�ٲ�����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Bow;
}

void HuangZhong::skill(Hero * hero)
{
}

void HuangZhong::passive_skill()
{
	this->atk += 20;
	this->stun += 50;
}

WeiYan::WeiYan()
{
	name = "κ��";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 8;			//���
	wisdom = 25;	//�ǻ�
	strategy = 75;	//ı��
	force = 80;	//����
	agility = 75;	//����

	skill_name = "���Ƿ���";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Shield;
}

void WeiYan::skill(Hero * hero)
{
}

void WeiYan::passive_skill()
{
	this->atk *= 1.5;
}

HuangYueYing::HuangYueYing()
{
	name = "����Ӣ";//����
	ctry = "��";	//����
	sex = "Ů";		//�Ա�
	id = 9;			//���
	wisdom = 99;	//�ǻ�
	strategy = 90;	//ı��
	force = 5;		//����
	agility = 65;	//����

	skill_name = "���Ŷݼ�";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void HuangYueYing::skill(Hero * hero)
{
}

void HuangYueYing::passive_skill()
{
	this->def += 50;
	this->miss += 30;
}

JiangWei::JiangWei()
{
	name = "��ά";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 10;		//���
	wisdom = 80;	//�ǻ�
	strategy = 92;	//ı��
	force = 80;		//����
	agility = 90;	//����

	skill_name = "����֮��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void JiangWei::skill(Hero * hero)
{
}

void JiangWei::passive_skill()
{
}

PangTong::PangTong()
{
	name = "��ͳ";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 11;		//���
	wisdom = 90;	//�ǻ�
	strategy = 94;	//ı��
	force = 5;		//����
	agility = 18;	//����

	skill_name = "�����ԭ";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Fan;
}

void PangTong::skill(Hero * hero)
{
}

void PangTong::passive_skill()
{
	this->atk *= 1.2;
	this->vel *= 1.2;
	this->def *= 1.2;
	this->miss += 10;
}

SunShangXiang::SunShangXiang()
{
	name = "������";  //����
	ctry = "��";	//����
	sex = "Ů";		//�Ա�
	id = 12;		//���
	wisdom = 56;	//�ǻ�
	strategy = 42;	//ı��
	force = 65;		//����
	agility = 80;	//����

	skill_name = "�ɼ�����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Bow;
}

void SunShangXiang::skill(Hero * hero)
{
}

void SunShangXiang::passive_skill()
{
	this->miss += 20;
	this->stun += 20;
	this->atk += 20;
}
