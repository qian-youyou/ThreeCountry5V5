#include "Wei.h"

CaoCao::CaoCao()
{
	name = "�ܲ�";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 1;			//���
	wisdom = 90;	//�ǻ�
	strategy = 92;	//ı��
	force = 55;		//����
	agility = 28;	//����

	skill_name = "���¹���";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Sword;
}

void CaoCao::skill(Hero * hero)
{
}

void CaoCao::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->atk += this->force;
}

DianWei::DianWei()
{
	name = "��Τ";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 2;			//���
	wisdom = 54;	//�ǻ�
	strategy = 32;	//ı��
	force = 100;	//����
	agility = 80;	//����

	skill_name = "��֮����";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void DianWei::skill(Hero * hero)
{
}

void DianWei::passive_skill()
{
	this->HP = ceil(this->HP*1.4);
	this->max_HP = this->HP;
	this->def += floor(this->force*0.7);
	this->atk = ceil(this->atk * 0.9);
	this->suckBlood += 10;
}

XuChu::XuChu()
{
	name = "����";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 3;			//���
	wisdom = 50;	//�ǻ�
	strategy = 20;	//ı��
	force = 98;		//����
	agility = 72;	//����

	skill_name = "����ж��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new DragonSword;
}

void XuChu::skill(Hero * hero)
{
}

void XuChu::passive_skill()
{
	this->atk = floor(this->atk*1.3);
	this->crit += 30;
}

GuoJia::GuoJia()
{
	name = "����";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 4;			//���
	wisdom = 100;	//�ǻ�
	strategy = 98;	//ı��
	force = 5;		//����
	agility = 10;	//����

	skill_name = "���";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void GuoJia::skill(Hero * hero)
{
}

void GuoJia::passive_skill()
{
	this->vel += this->wisdom;
	this->stun += 30;
}

XiaHouDun::XiaHouDun()
{
	name = "�ĺ";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 5;			//���
	wisdom = 78;	//�ǻ�
	strategy = 56;	//ı��
	force = 85;		//����
	agility = 72;	//����

	skill_name = "";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new DragonSword;
}

void XiaHouDun::skill(Hero * hero)
{
}

void XiaHouDun::passive_skill()
{
	this->atk += 20;
	this->stun += 50;
}

XiaHouYuan::XiaHouYuan()
{
	name = "�ĺ�Ԩ";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 6;			//���
	wisdom = 72;	//�ǻ�
	strategy = 65;	//ı��
	force = 80;		//����
	agility = 95;	//����

	skill_name = "";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Bow;
}

void XiaHouYuan::skill(Hero * hero)
{
}

void XiaHouYuan::passive_skill()
{
	this->vel = ceil(this->vel*1.3);
	this->atk += this->strategy;
}

CaoRen::CaoRen()
{
	name = "����";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 7;			//���
	wisdom = 77;	//�ǻ�
	strategy = 80;	//ı��
	force = 72;		//����
	agility = 70;	//����

	skill_name = "��и�ɻ�";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Shield;
}

void CaoRen::skill(Hero * hero)
{
}

void CaoRen::passive_skill()
{
	this->HP += 2000;
	this->max_HP = HP;
	this->def = ceil(this->def*1.2);
	this->atk = floor(this->atk*0.4);
	this->suckBlood += 80;
}

ZhangLiao::ZhangLiao()
{
	name = "����";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 8;			//���
	wisdom = 82;	//�ǻ�
	strategy = 80;	//ı��
	force = 78;		//����
	agility = 80;	//����

	skill_name = "";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Spear;
}

void ZhangLiao::skill(Hero * hero)
{
}

void ZhangLiao::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->miss += 20;
}

SiMaYi::SiMaYi()
{
	name = "˾��ܲ";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 9;			//���
	wisdom = 99;	//�ǻ�
	strategy = 100;	//ı��
	force = 34;		//����
	agility = 45;	//����

	skill_name = "�ǹ�֮��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Fan;
}

void SiMaYi::skill(Hero * hero)
{
}

void SiMaYi::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->atk += this->agility;
}

XuHuang::XuHuang()
{
	name = "���";  //����
	ctry = "κ";	//����
	sex = "��";		//�Ա�
	id = 10;		//���
	wisdom = 75;	//�ǻ�
	strategy = 82;	//ı��
	force = 82;		//����
	agility = 75;	//����

	skill_name = "�������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new DragonSword;
}

void XuHuang::skill(Hero * hero)
{
}

void XuHuang::passive_skill()
{
	this->atk += this->force;
	this->stun += 15;
}

ZhenJi::ZhenJi()
{
	name = "�缧";  //����
	ctry = "κ";	//����
	sex = "Ů";		//�Ա�
	id = 11;		//���
	wisdom = 80;	//�ǻ�
	strategy = 25;	//ı��
	force = 20;		//����
	agility = 100;	//����

	skill_name = "������";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Knife;
}

void ZhenJi::skill(Hero * hero)
{
}

void ZhenJi::passive_skill()
{
	this->def += this->strategy * 0.5 + this->wisdom * 0.2;
	this->miss += 30;
}

CaiWenJi::CaiWenJi()
{
	name = "���ļ�";//����
	ctry = "κ";	//����
	sex = "Ů";		//�Ա�
	id = 12;		//���
	wisdom = 95;	//�ǻ�
	strategy = 35;	//ı��
	force = 25;		//����
	agility = 55;	//����

	skill_name = "����֮��";
	skill_show = "";

	this->init_property();
	this->passive_skill();
	this->weapon = new Book;
}

void CaiWenJi::skill(Hero * hero)
{
}

void CaiWenJi::passive_skill()
{
	this->HP += this->strategy * 15 + this->wisdom * 10;
	this->max_HP = this->HP;
	this->stun += 20;
}
