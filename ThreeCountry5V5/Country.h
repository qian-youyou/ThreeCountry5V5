#pragma once
#include"Hero.h"
#include"Wei.h"
#include"Shu.h"
#include"Wu.h"
#include"Qun.h"
#define NUM_HERO 12
class Wei{
public:
	Wei() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				wei[i]->getInf();
			}
		}
	}
	~Wei() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				delete wei[i];
			}
		}
	}
	Hero*wei[NUM_HERO] = {
		new(CaoCao),
		new(DianWei),
		new(XuChu),
		new(GuoJia),
		new(XiaHouDun),
		new(XiaHouYuan),
		new(CaoRen),
		new(ZhangLiao),
		new(SiMaYi),
		new(XuHuang),
		new(ZhenJi),
		new(CaiWenJi)
	};
	int vis[NUM_HERO] = { false };
};

class Shu{
public:
	Shu() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				shu[i]->getInf();
			}
		}
	}
	~Shu() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				delete shu[i];
			}
		}
	}
	Hero*shu[NUM_HERO] = {
		new(LiuBei),
		new(GuanYu),
		new(ZhangFei),
		new(ZhuGeLiang),
		new(ZhaoYun),
		new(MaChao),
		new(HuangZhong),
		new(WeiYan),
		new(HuangYueYing),
		new(JiangWei),
		new(PangTong),
		new(SunShangXiang)
	};
	int vis[NUM_HERO] = {false};
};

class Wu{
public:
	Wu() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				wu[i]->getInf();
			}
		}
	}
	~Wu() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				delete wu[i];
			}
		}
	}
	Hero*wu[NUM_HERO] = {
		new(SunCe),
		new(ZhouYu),
		new(SunQuan),
		new(DaQiao),
		new(XiaoQiao),
		new(HuangGai),
		new(TaiShiCi),
		new(GanNing),
		new(LuSu),
		new(LvMeng),
		new(ZhangZhao),
		new(ZhouTai)
	};
	int vis[NUM_HERO] = { false };
};

class Qun {
public:
	Qun() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				qun[i]->getInf();
			}
		}
	}
	~Qun() {
		for (int i = 0; i < NUM_HERO; i++) {
			if (!vis[i]) {
				delete qun[i];
			}
		}
	}
	Hero*qun[NUM_HERO] = {
		new(LvBu),
		new(DiaoChan),
		new(HuaTuo),
		new(YuanShao),
		new(YanLiang),
		new(WenChou),
		new(ZuoCi),
		new(HuaXiong),
		new(GongSunZan),
		new(ZhangJiao),
		new(YuJi),
		new(LingJu)
	};
	int vis[NUM_HERO] = { false };
};