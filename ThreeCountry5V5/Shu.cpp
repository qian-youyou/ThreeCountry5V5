#include "Shu.h"

LiuBei::LiuBei()
{
	name = "Áõ±¸";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 1;			//±àºÅ
	wisdom = 72;	//ÖÇ»Û
	strategy = 62;	//Ä±ÂÔ
	force = 60;		//Á¦Á¿
	agility = 25;	//Ãô½İ

	skill_name = "Î¨ÏÍÎ¨µÂ";
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
	name = "¹ØÓğ";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 2;			//±àºÅ
	wisdom = 60;	//ÖÇ»Û
	strategy = 60;	//Ä±ÂÔ
	force = 98;		//Á¦Á¿
	agility = 90;	//Ãô½İ

	skill_name = "´ºÇïÙÈÔÂ";
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
	name = "ÕÅ·É";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 3;			//±àºÅ
	wisdom = 70;	//ÖÇ»Û
	strategy = 77;	//Ä±ÂÔ
	force = 100;		//Á¦Á¿
	agility = 72;	//Ãô½İ

	skill_name = "À×öªÅØÏø";
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
	name = "Öî¸ğÁÁ";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 4;			//±àºÅ
	wisdom = 100;	//ÖÇ»Û
	strategy = 100;	//Ä±ÂÔ
	force = 10;		//Á¦Á¿
	agility = 32;	//Ãô½İ

	skill_name = "ÎÔÁúĞ¥Ìì";
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
	name = "ÕÔÔÆ";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 5;			//±àºÅ
	wisdom = 75;	//ÖÇ»Û
	strategy = 80;	//Ä±ÂÔ
	force = 98;		//Á¦Á¿
	agility = 100;	//Ãô½İ

	skill_name = "ÆßÌ½ÉßÅÌ";
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
	name = "Âí³¬";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 6;			//±àºÅ
	wisdom = 42;	//ÖÇ»Û
	strategy = 20;	//Ä±ÂÔ
	force = 95;		//Á¦Á¿
	agility = 94;	//Ãô½İ

	skill_name = "Î÷Á¹ÌúÆï";
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
	name = "»ÆÖÒ";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 7;			//±àºÅ
	wisdom = 50;	//ÖÇ»Û
	strategy = 45;	//Ä±ÂÔ
	force = 98;	//Á¦Á¿
	agility = 72;	//Ãô½İ

	skill_name = "°Ù²½´©Ñî";
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
	name = "ÎºÑÓ";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 8;			//±àºÅ
	wisdom = 25;	//ÖÇ»Û
	strategy = 75;	//Ä±ÂÔ
	force = 80;	//Á¦Á¿
	agility = 75;	//Ãô½İ

	skill_name = "°Á¹Ç·çÁ¹";
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
	name = "»ÆÔÂÓ¢";//ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "Å®";		//ĞÔ±ğ
	id = 9;			//±àºÅ
	wisdom = 99;	//ÖÇ»Û
	strategy = 90;	//Ä±ÂÔ
	force = 5;		//Á¦Á¿
	agility = 65;	//Ãô½İ

	skill_name = "ÆæÃÅ¶İ¼×";
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
	name = "½ªÎ¬";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 10;		//±àºÅ
	wisdom = 80;	//ÖÇ»Û
	strategy = 92;	//Ä±ÂÔ
	force = 80;		//Á¦Á¿
	agility = 90;	//Ãô½İ

	skill_name = "Ó×÷ëÖ®·ç";
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
	name = "ÅÓÍ³";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 11;		//±àºÅ
	wisdom = 90;	//ÖÇ»Û
	strategy = 94;	//Ä±ÂÔ
	force = 5;		//Á¦Á¿
	agility = 18;	//Ãô½İ

	skill_name = "»ğ·ïÁÇÔ­";
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
	name = "ËïÉĞÏã";  //ĞÕÃû
	ctry = "Êñ";	//¹ú¼Ò
	sex = "Å®";		//ĞÔ±ğ
	id = 12;		//±àºÅ
	wisdom = 56;	//ÖÇ»Û
	strategy = 42;	//Ä±ÂÔ
	force = 65;		//Á¦Á¿
	agility = 80;	//Ãô½İ

	skill_name = "èÉ¼§ÁªÒö";
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
