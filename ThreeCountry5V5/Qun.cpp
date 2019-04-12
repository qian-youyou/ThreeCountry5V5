#include "Qun.h"

LvBu::LvBu()
{
	name = "吕布";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 1;			//编号
	wisdom = 35;	//智慧
	strategy = 10;	//谋略
	force = 100;	//力量
	agility = 100;	//敏捷

	skill_name = "方天画斩";
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
	name = "貂蝉";  //姓名
	ctry = "群";	//国家
	sex = "女";		//性别
	id = 2;			//编号
	wisdom = 96;	//智慧
	strategy = 60;	//谋略
	force = 10;		//力量
	agility = 100;	//敏捷

	skill_name = "闭月羞花";
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
	name = "华佗";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 3;			//编号
	wisdom = 80;	//智慧
	strategy = 37;	//谋略
	force = 60;		//力量
	agility = 60;	//敏捷

	skill_name = "妙手回天";
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
	name = "袁绍";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 4;			//编号
	wisdom = 27;	//智慧
	strategy = 20;	//谋略
	force = 44;		//力量
	agility = 55;	//敏捷

	skill_name = "万箭齐发";
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
	name = "颜良";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 5;			//编号
	wisdom = 60;	//智慧
	strategy = 60;	//谋略
	force = 90;		//力量
	agility = 90;	//敏捷

	skill_name = "致命一击";
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
	name = "文丑";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 6;			//编号
	wisdom = 66;	//智慧
	strategy = 66;	//谋略
	force = 88;		//力量
	agility = 88;	//敏捷

	skill_name = "暗箭难防";
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
	name = "左慈";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 7;			//编号
	wisdom = 100;	//智慧
	strategy = 90;	//谋略
	force = 55;		//力量
	agility = 20;	//敏捷

	skill_name = "道法自然";
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
	name = "华雄";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 8;			//编号
	wisdom = 60;	//智慧
	strategy = 67;	//谋略
	force = 90;		//力量
	agility = 70;	//敏捷

	skill_name = "豪情万丈";
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
	name = "公孙瓒";//姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 9;			//编号
	wisdom = 60;	//智慧
	strategy = 65;	//谋略
	force = 80;		//力量
	agility = 90;	//敏捷

	skill_name = "白马义从";
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
	name = "张角";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 10;		//编号
	wisdom = 45;	//智慧
	strategy = 65;	//谋略
	force = 55;		//力量
	agility = 70;	//敏捷

	skill_name = "天公降雷";
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
	name = "于吉";  //姓名
	ctry = "群";	//国家
	sex = "男";		//性别
	id = 11;		//编号
	wisdom = 90;	//智慧
	strategy = 80;	//谋略
	force = 40;		//力量
	agility = 10;	//敏捷

	skill_name = "太平要术";
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
	name = "灵雎";  //姓名
	ctry = "群";	//国家
	sex = "女";		//性别
	id = 12;		//编号
	wisdom = 90;	//智慧
	strategy = 40;	//谋略
	force = 60;		//力量
	agility = 70;	//敏捷

	skill_name = "涅槃";
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
