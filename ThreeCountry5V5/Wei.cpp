#include "Wei.h"

CaoCao::CaoCao()
{
	name = "²Ü²Ù";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 1;			//±àºÅ
	wisdom = 90;	//ÖÇ»Û
	strategy = 92;	//Ä±ÂÔ
	force = 55;		//Á¦Á¿
	agility = 28;	//Ãô½İ

	skill_name = "ÌìÏÂ¹éĞÄ";
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
	name = "µäÎ¤";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 2;			//±àºÅ
	wisdom = 54;	//ÖÇ»Û
	strategy = 32;	//Ä±ÂÔ
	force = 100;	//Á¦Á¿
	agility = 80;	//Ãô½İ

	skill_name = "¹ÅÖ®¶ñÀ´";
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
	name = "ĞíñÒ";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 3;			//±àºÅ
	wisdom = 50;	//ÖÇ»Û
	strategy = 20;	//Ä±ÂÔ
	force = 98;		//Á¦Á¿
	agility = 72;	//Ãô½İ

	skill_name = "»¢³ÕĞ¶¼×";
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
	name = "¹ù¼Î";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 4;			//±àºÅ
	wisdom = 100;	//ÖÇ»Û
	strategy = 98;	//Ä±ÂÔ
	force = 5;		//Á¦Á¿
	agility = 10;	//Ãô½İ

	skill_name = "¹í²Å";
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
	name = "ÏÄºîª";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 5;			//±àºÅ
	wisdom = 78;	//ÖÇ»Û
	strategy = 56;	//Ä±ÂÔ
	force = 85;		//Á¦Á¿
	agility = 72;	//Ãô½İ

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
	name = "ÏÄºîÔ¨";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 6;			//±àºÅ
	wisdom = 72;	//ÖÇ»Û
	strategy = 65;	//Ä±ÂÔ
	force = 80;		//Á¦Á¿
	agility = 95;	//Ãô½İ

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
	name = "²ÜÈÊ";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 7;			//±àºÅ
	wisdom = 77;	//ÖÇ»Û
	strategy = 80;	//Ä±ÂÔ
	force = 72;		//Á¦Á¿
	agility = 70;	//Ãô½İ

	skill_name = "ÎŞĞ¸¿É»÷";
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
	name = "ÕÅÁÉ";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 8;			//±àºÅ
	wisdom = 82;	//ÖÇ»Û
	strategy = 80;	//Ä±ÂÔ
	force = 78;		//Á¦Á¿
	agility = 80;	//Ãô½İ

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
	name = "Ë¾ÂíÜ²";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 9;			//±àºÅ
	wisdom = 99;	//ÖÇ»Û
	strategy = 100;	//Ä±ÂÔ
	force = 34;		//Á¦Á¿
	agility = 45;	//Ãô½İ

	skill_name = "ÀÇ¹ËÖ®Ïà";
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
	name = "Ğì»Î";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "ÄĞ";		//ĞÔ±ğ
	id = 10;		//±àºÅ
	wisdom = 75;	//ÖÇ»Û
	strategy = 82;	//Ä±ÂÔ
	force = 82;		//Á¦Á¿
	agility = 75;	//Ãô½İ

	skill_name = "±øÁ¸´ç¶Ï";
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
	name = "Õç¼§";  //ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "Å®";		//ĞÔ±ğ
	id = 11;		//±àºÅ
	wisdom = 80;	//ÖÇ»Û
	strategy = 25;	//Ä±ÂÔ
	force = 20;		//Á¦Á¿
	agility = 100;	//Ãô½İ

	skill_name = "ÂåÉñ½µÁÙ";
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
	name = "²ÌÎÄ¼§";//ĞÕÃû
	ctry = "Îº";	//¹ú¼Ò
	sex = "Å®";		//ĞÔ±ğ
	id = 12;		//±àºÅ
	wisdom = 95;	//ÖÇ»Û
	strategy = 35;	//Ä±ÂÔ
	force = 25;		//Á¦Á¿
	agility = 55;	//Ãô½İ

	skill_name = "ºúóÕÖ®Òô";
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
