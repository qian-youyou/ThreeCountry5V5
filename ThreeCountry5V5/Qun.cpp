#include "Qun.h"

LvBu::LvBu()
{
	name = "����";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 1;			//���
	wisdom = 35;	//�ǻ�
	strategy = 10;	//ı��
	force = 100;	//����
	agility = 100;	//����

	skill_name = "���컭ն";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void LvBu::skill(Hero * hero)
{
}

void LvBu::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->atk += this->agility;
}

DiaoChan::DiaoChan()
{
	name = "����";  //����
	ctry = "Ⱥ";	//����
	sex = "Ů";		//�Ա�
	id = 2;			//���
	wisdom = 96;	//�ǻ�
	strategy = 60;	//ı��
	force = 10;		//����
	agility = 100;	//����

	skill_name = "�����߻�";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void DiaoChan::skill(Hero * hero)
{
}

void DiaoChan::passive_skill()
{
}

HuaTuo::HuaTuo()
{
	name = "��٢";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 3;			//���
	wisdom = 80;	//�ǻ�
	strategy = 37;	//ı��
	force = 60;		//����
	agility = 60;	//����

	skill_name = "���ֻ���";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void HuaTuo::skill(Hero * hero)
{
}

void HuaTuo::passive_skill()
{
}

YuanShao::YuanShao()
{
	name = "Ԭ��";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 4;			//���
	wisdom = 27;	//�ǻ�
	strategy = 20;	//ı��
	force = 44;		//����
	agility = 55;	//����

	skill_name = "����뷢";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Sword;
}

void YuanShao::skill(Hero * hero)
{
}

void YuanShao::passive_skill()
{
}

YanLiang::YanLiang()
{
	name = "����";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 5;			//���
	wisdom = 60;	//�ǻ�
	strategy = 60;	//ı��
	force = 90;		//����
	agility = 90;	//����

	skill_name = "����һ��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void YanLiang::skill(Hero * hero)
{
}

void YanLiang::passive_skill()
{
}

WenChou::WenChou()
{
	name = "�ĳ�";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 6;			//���
	wisdom = 66;	//�ǻ�
	strategy = 66;	//ı��
	force = 88;		//����
	agility = 88;	//����

	skill_name = "�����ѷ�";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Bow;
}

void WenChou::skill(Hero * hero)
{
}

void WenChou::passive_skill()
{
}

ZuoCi::ZuoCi()
{
	name = "���";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 7;			//���
	wisdom = 100;	//�ǻ�
	strategy = 90;	//ı��
	force = 55;		//����
	agility = 20;	//����

	skill_name = "������Ȼ";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void ZuoCi::skill(Hero * hero)
{
}

void ZuoCi::passive_skill()
{
}

HuaXiong::HuaXiong()
{
	name = "����";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 8;			//���
	wisdom = 60;	//�ǻ�
	strategy = 67;	//ı��
	force = 90;		//����
	agility = 70;	//����

	skill_name = "��������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new DragonSword;
}

void HuaXiong::skill(Hero * hero)
{
}

void HuaXiong::passive_skill()
{
}

GongSunZan::GongSunZan()
{
	name = "�����";//����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 9;			//���
	wisdom = 60;	//�ǻ�
	strategy = 65;	//ı��
	force = 80;		//����
	agility = 90;	//����

	skill_name = "�������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void GongSunZan::skill(Hero * hero)
{
}

void GongSunZan::passive_skill()
{
}

ZhangJiao::ZhangJiao()
{
	name = "�Ž�";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 10;		//���
	wisdom = 45;	//�ǻ�
	strategy = 65;	//ı��
	force = 55;		//����
	agility = 70;	//����

	skill_name = "�칫����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Fan;
}

void ZhangJiao::skill(Hero * hero)
{
}

void ZhangJiao::passive_skill()
{
}

YuJi::YuJi()
{
	name = "�ڼ�";  //����
	ctry = "Ⱥ";	//����
	sex = "��";		//�Ա�
	id = 11;		//���
	wisdom = 90;	//�ǻ�
	strategy = 80;	//ı��
	force = 40;		//����
	agility = 10;	//����

	skill_name = "̫ƽҪ��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void YuJi::skill(Hero * hero)
{
}

void YuJi::passive_skill()
{
}

LingJu::LingJu()
{
	name = "����";  //����
	ctry = "Ⱥ";	//����
	sex = "Ů";		//�Ա�
	id = 12;		//���
	wisdom = 90;	//�ǻ�
	strategy = 40;	//ı��
	force = 60;		//����
	agility = 70;	//����

	skill_name = "����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void LingJu::skill(Hero * hero)
{
}

void LingJu::passive_skill()
{
}
