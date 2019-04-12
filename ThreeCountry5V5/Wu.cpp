#include "Wu.h"

SunCe::SunCe()
{
	name = "���";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 1;			//���
	wisdom = 78;	//�ǻ�
	strategy = 65;	//ı��
	force = 100;	//����
	agility = 85;	//����

	skill_name = "����ɽ��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void SunCe::skill(Hero * hero)
{
}

void SunCe::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->atk += this->wisdom;
}

ZhouYu::ZhouYu()
{
	name = "���";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 2;			//���
	wisdom = 90;	//�ǻ�
	strategy = 98;	//ı��
	force = 70;		//����
	agility = 80;	//����

	skill_name = "ҵ�����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Sword;
}

void ZhouYu::skill(Hero * hero)
{
}

void ZhouYu::passive_skill()
{
}

SunQuan::SunQuan()
{
	name = "��Ȩ";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 3;			//���
	wisdom = 80;	//�ǻ�
	strategy = 80;	//ı��
	force = 50;		//����
	agility = 60;	//����

	skill_name = "��������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Sword;
}

void SunQuan::skill(Hero * hero)
{
}

void SunQuan::passive_skill()
{
}

DaQiao::DaQiao()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "Ů";		//�Ա�
	id = 4;			//���
	wisdom = 85;	//�ǻ�
	strategy = 45;	//ı��
	force = 30;		//����
	agility = 75;	//����

	skill_name = "��ɫ����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void DaQiao::skill(Hero * hero)
{
}

void DaQiao::passive_skill()
{
}

XiaoQiao::XiaoQiao()
{
	name = "С��";  //����
	ctry = "��";	//����
	sex = "Ů";		//�Ա�
	id = 5;			//���
	wisdom = 80;	//�ǻ�
	strategy = 40;	//ı��
	force = 25;		//����
	agility = 85;	//����

	skill_name = "����֮��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void XiaoQiao::skill(Hero * hero)
{
}

void XiaoQiao::passive_skill()
{
}

HuangGai::HuangGai()
{
	name = "�Ƹ�";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 6;			//���
	wisdom = 65;	//�ǻ�
	strategy = 65;	//ı��
	force = 85;		//����
	agility = 35;	//����

	skill_name = "����֮��";
	skill_show = "";
	this->weapon = new Shield;

	this->init_property();
	this->passive_skill();
}

void HuangGai::skill(Hero * hero)
{
}

void HuangGai::passive_skill()
{
}

TaiShiCi::TaiShiCi()
{
	name = "̫ʷ��";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 7;			//���
	wisdom = 70;	//�ǻ�
	strategy = 50;	//ı��
	force = 90;		//����
	agility = 90;	//����

	skill_name = "�ܳ���";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Bow;
}

void TaiShiCi::skill(Hero * hero)
{
}

void TaiShiCi::passive_skill()
{
}

GanNing::GanNing()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 8;			//���
	wisdom = 65;	//�ǻ�
	strategy = 75;	//ı��
	force = 76;		//����
	agility = 80;	//����

	skill_name = "����ϮӪ";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Bow;
}

void GanNing::skill(Hero * hero)
{
}

void GanNing::passive_skill()
{
}

LuSu::LuSu()
{
	name = "³��";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 9;			//���
	wisdom = 80;	//�ǻ�
	strategy = 90;	//ı��
	force = 40;		//����
	agility = 60;	//����

	skill_name = "��������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Fan;
}

void LuSu::skill(Hero * hero)
{
}

void LuSu::passive_skill()
{
}

LvMeng::LvMeng()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 10;		//���
	wisdom = 80;	//�ǻ�
	strategy = 80;	//ı��
	force = 80;		//����
	agility = 80;	//����

	skill_name = "���¶ɽ�";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new DragonSword;
}

void LvMeng::skill(Hero * hero)
{
}

void LvMeng::passive_skill()
{
}

ZhangZhao::ZhangZhao()
{
	name = "����";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 11;		//���
	wisdom = 80;	//�ǻ�
	strategy = 95;	//ı��
	force = 25;		//����
	agility = 55;	//����

	skill_name = "�ƺ�֮��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void ZhangZhao::skill(Hero * hero)
{
}

void ZhangZhao::passive_skill()
{
}

ZhouTai::ZhouTai()
{
	name = "��̩";  //����
	ctry = "��";	//����
	sex = "��";		//�Ա�
	id = 12;		//���
	wisdom = 60;	//�ǻ�
	strategy = 45;	//ı��
	force = 90;		//����
	agility = 80;	//����

	skill_name = "";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Shield;
}

void ZhouTai::skill(Hero * hero)
{
}

void ZhouTai::passive_skill()
{
}
