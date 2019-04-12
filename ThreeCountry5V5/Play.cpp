#include"Play.h"
#include<time.h>
void test() {
	Hero * hero_1 = new(ZhangFei);
	Hero *hero_2 = new(GuanYu);

	int round = 0;
	while (true) {
		getchar();
		system("cls");
		cout << "当前第" << ++round << "回合开始" << endl;
		hero_1->attack(hero_2);
		if (hero_2->getHP() <= 0) {
			cout << "怪兽" << hero_2->getName() << "已死，游戏结束，你赢了" << endl;
			break;
		}
		hero_2->attack(hero_1);
		if (hero_1->getHP() <= 0) {
			cout << "英雄" << hero_1->getName() << "已死，游戏结束，你输了" << endl;
			break;
		}
		cout << "英雄" << hero_1->getName() << "剩余血量：" << hero_1->getHP() << endl;
		cout << "怪兽" << hero_2->getName() << "剩余血量：" << hero_2->getHP() << endl;
	}

	delete(hero_1);
	delete(hero_2);
}
void play() {
	srand(time(NULL));
	User user_1;
	cout << "玩家一选择" << endl;
	show(user_1);
	User user_2;
	cout << "玩家二选择" << endl;
	show(user_2);
	int round = 0;
	while (true) {
		getchar();
		system("cls");
		cout << "当前第" << ++round << "回合开始" << endl;

		for (int i = 0; i < 5; i++) {
			if (!user_1.hero[i]->isDeath) {
				int Tmp = rand() % 5;
				while (user_2.hero[Tmp]->isDeath) {
					if (isDeath(user_2)) {
						break;
					}
					Tmp = rand() % 5;
				}
				user_1.hero[i]->attack(user_2.hero[Tmp]);
			}
			else {
				cout << "英雄" << user_1.hero[i]->getName() << "已阵亡。" << endl;
			}
			cout << "**********" << endl;
			if (!user_2.hero[i]->isDeath) {
				int Tmp = rand() % 5;
				while (user_1.hero[Tmp]->isDeath) {
					if (isDeath(user_1)) {
						break;
					}
					Tmp = rand() % 5;
				}
				user_2.hero[i]->attack(user_1.hero[Tmp]);
			}
			else {
				cout << "英雄" << user_2.hero[i]->getName() << "已阵亡。" << endl;
			}
			cout << "**********" << endl;
		}
		if (isDeath(user_2)) {
			cout << "Victory！" << endl;
			break;
		}
		if (isDeath(user_1)) {
			cout << "Defeat！" << endl;
			break;
		}
		cout << "-------------------" << endl;
		for (int i = 0; i < 5; i++) {
			if (!user_1.hero[i]->isDeath) {
				cout << "玩家1英雄" << user_1.hero[i]->getName() << "剩余血量" << user_1.hero[i]->getHP() << endl;
			}
			else {
				cout << "玩家1英雄" << user_1.hero[i]->getName() << "已阵亡。" << endl;
			}
		}
		cout << "-------------------" << endl;
		for (int i = 0; i < 5; i++) {
			if (!user_2.hero[i]->isDeath) {
				cout << "玩家2英雄" << user_2.hero[i]->getName() << "剩余血量" << user_2.hero[i]->getHP() << endl;
			}
			else {
				cout << "玩家2英雄" << user_2.hero[i]->getName() << "已阵亡。" << endl;
			}
		}
	}
}
bool isDeath(User & user) {
	int cnt;
	for (cnt = 0; cnt < 5; cnt++) {
		if (!user.hero[cnt]->isDeath) {
			break;
		}
	}
	if (cnt >= 5) {
		return true;
	}
	return false;
}
void show(User &user)
{
	int flag;
	cout << "----------" << "请选择您的阵营" << "----------" << endl << endl;
	cout << "---" << "1.魏----2.蜀----3.吴----4.群" << "---" << endl << endl;
	cout << "----------" << "--------------" << "----------" << endl;
	cin >> flag;
	int tmp[5];
	Wei *wei;
	Shu *shu;
	Wu *wu;
	Qun *qun;
	switch (flag) {
	case 1:
		cout << "您已加入魏国阵营，请选择5位武将" << endl;
		wei = new Wei;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = wei->wei[tmp[i]-1];
			wei->vis[tmp[i]-1] = true;
		}
		delete wei;
		break;
	case 2:
		cout << "您已加入蜀国阵营，请选择5位武将" << endl;
		shu = new Shu;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = shu->shu[tmp[i]-1];
			shu->vis[tmp[i]-1] = true;
		}
		delete shu;
		break;
	case 3:
		cout << "您已加入吴国阵营，请选择5位武将" << endl;
		wu = new Wu;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = wu->wu[tmp[i]-1];
			wu->vis[tmp[i]-1] = true;
		}
		delete wu;
		break;
	default:
		cout << "您已加入群雄阵营，请选择5位武将" << endl;
		qun = new Qun;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = qun->qun[tmp[i]-1];
			qun->vis[tmp[i]-1] = true;
		}
		delete qun;
		break;
	}
}
