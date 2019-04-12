#pragma once
#include"Hero.h"

class CaoCao : public Hero {
public:
	CaoCao();
	void skill(Hero * hero);
	void passive_skill();
};

class DianWei :public Hero {
public:
	DianWei();
	void skill(Hero * hero);
	void passive_skill();
};

class XuChu : public Hero {
public:
	XuChu();
	void skill(Hero * hero);
	void passive_skill();
};

class GuoJia : public Hero {
public:
	GuoJia();
	void skill(Hero * hero);
	void passive_skill();
};

class XiaHouDun : public Hero {
public:
	XiaHouDun();
	void skill(Hero * hero);
	void passive_skill();
};

class XiaHouYuan : public Hero {
public:
	XiaHouYuan();
	void skill(Hero * hero);
	void passive_skill();
};

class CaoRen : public Hero {
public:
	CaoRen();
	void skill(Hero * hero);
	void passive_skill();
};

class ZhangLiao : public Hero {
public:
	ZhangLiao();
	void skill(Hero * hero);
	void passive_skill();
};

class SiMaYi : public Hero {
public:
	SiMaYi();
	void skill(Hero * hero);
	void passive_skill();
};

class XuHuang : public Hero {
public:
	XuHuang();
	void skill(Hero * hero);
	void passive_skill();
};

class ZhenJi : public Hero {
public:
	ZhenJi();
	void skill(Hero * hero);
	void passive_skill();
};

class CaiWenJi : public Hero {
public:
	CaiWenJi();
	void skill(Hero * hero);
	void passive_skill();
};