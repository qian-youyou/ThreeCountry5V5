#include "Wu.h"

SunCe::SunCe()
{
	name = "孙策";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 1;			//编号
	wisdom = 78;	//智慧
	strategy = 65;	//谋略
	force = 100;	//力量
	agility = 85;	//敏捷

	skill_name = "力拔山河";
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
	name = "周瑜";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 2;			//编号
	wisdom = 90;	//智慧
	strategy = 98;	//谋略
	force = 70;		//力量
	agility = 80;	//敏捷

	skill_name = "业火焚天";
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
	name = "孙权";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 3;			//编号
	wisdom = 80;	//智慧
	strategy = 80;	//谋略
	force = 50;		//力量
	agility = 60;	//敏捷

	skill_name = "气势汹汹";
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
	name = "大乔";  //姓名
	ctry = "吴";	//国家
	sex = "女";		//性别
	id = 4;			//编号
	wisdom = 85;	//智慧
	strategy = 45;	//谋略
	force = 30;		//力量
	agility = 75;	//敏捷

	skill_name = "国色天香";
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
	name = "小乔";  //姓名
	ctry = "吴";	//国家
	sex = "女";		//性别
	id = 5;			//编号
	wisdom = 80;	//智慧
	strategy = 40;	//谋略
	force = 25;		//力量
	agility = 85;	//敏捷

	skill_name = "玲珑之花";
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
	name = "黄盖";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 6;			//编号
	wisdom = 65;	//智慧
	strategy = 65;	//谋略
	force = 85;		//力量
	agility = 35;	//敏捷

	skill_name = "苦肉之计";
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
	name = "太史慈";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 7;			//编号
	wisdom = 70;	//智慧
	strategy = 50;	//谋略
	force = 90;		//力量
	agility = 90;	//敏捷

	skill_name = "受宠打击";
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
	name = "甘宁";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 8;			//编号
	wisdom = 65;	//智慧
	strategy = 75;	//谋略
	force = 76;		//力量
	agility = 80;	//敏捷

	skill_name = "百骑袭营";
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
	name = "鲁肃";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 9;			//编号
	wisdom = 80;	//智慧
	strategy = 90;	//谋略
	force = 40;		//力量
	agility = 60;	//敏捷

	skill_name = "大智若愚";
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
	name = "吕蒙";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 10;		//编号
	wisdom = 80;	//智慧
	strategy = 80;	//谋略
	force = 80;		//力量
	agility = 80;	//敏捷

	skill_name = "白衣渡江";
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
	name = "张昭";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 11;		//编号
	wisdom = 80;	//智慧
	strategy = 95;	//谋略
	force = 25;		//力量
	agility = 55;	//敏捷

	skill_name = "制衡之道";
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
	name = "周泰";  //姓名
	ctry = "吴";	//国家
	sex = "男";		//性别
	id = 12;		//编号
	wisdom = 60;	//智慧
	strategy = 45;	//谋略
	force = 90;		//力量
	agility = 80;	//敏捷

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
