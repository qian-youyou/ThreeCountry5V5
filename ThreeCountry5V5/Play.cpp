#include"Play.h"
#include<time.h>
void test() {
	Hero * hero_1 = new(ZhangFei);
	Hero *hero_2 = new(GuanYu);

	int round = 0;
	while (true) {
		getchar();
		system("cls");
		cout << "��ǰ��" << ++round << "�غϿ�ʼ" << endl;
		hero_1->attack(hero_2);
		if (hero_2->getHP() <= 0) {
			cout << "����" << hero_2->getName() << "��������Ϸ��������Ӯ��" << endl;
			break;
		}
		hero_2->attack(hero_1);
		if (hero_1->getHP() <= 0) {
			cout << "Ӣ��" << hero_1->getName() << "��������Ϸ������������" << endl;
			break;
		}
		cout << "Ӣ��" << hero_1->getName() << "ʣ��Ѫ����" << hero_1->getHP() << endl;
		cout << "����" << hero_2->getName() << "ʣ��Ѫ����" << hero_2->getHP() << endl;
	}

	delete(hero_1);
	delete(hero_2);
}
void play() {
	srand(time(NULL));
	User user_1;
	cout << "���һѡ��" << endl;
	show(user_1);
	User user_2;
	cout << "��Ҷ�ѡ��" << endl;
	show(user_2);
	int round = 0;
	while (true) {
		getchar();
		system("cls");
		cout << "��ǰ��" << ++round << "�غϿ�ʼ" << endl;

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
				cout << "Ӣ��" << user_1.hero[i]->getName() << "��������" << endl;
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
				cout << "Ӣ��" << user_2.hero[i]->getName() << "��������" << endl;
			}
			cout << "**********" << endl;
		}
		if (isDeath(user_2)) {
			cout << "Victory��" << endl;
			break;
		}
		if (isDeath(user_1)) {
			cout << "Defeat��" << endl;
			break;
		}
		cout << "-------------------" << endl;
		for (int i = 0; i < 5; i++) {
			if (!user_1.hero[i]->isDeath) {
				cout << "���1Ӣ��" << user_1.hero[i]->getName() << "ʣ��Ѫ��" << user_1.hero[i]->getHP() << endl;
			}
			else {
				cout << "���1Ӣ��" << user_1.hero[i]->getName() << "��������" << endl;
			}
		}
		cout << "-------------------" << endl;
		for (int i = 0; i < 5; i++) {
			if (!user_2.hero[i]->isDeath) {
				cout << "���2Ӣ��" << user_2.hero[i]->getName() << "ʣ��Ѫ��" << user_2.hero[i]->getHP() << endl;
			}
			else {
				cout << "���2Ӣ��" << user_2.hero[i]->getName() << "��������" << endl;
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
	cout << "----------" << "��ѡ��������Ӫ" << "----------" << endl << endl;
	cout << "---" << "1.κ----2.��----3.��----4.Ⱥ" << "---" << endl << endl;
	cout << "----------" << "--------------" << "----------" << endl;
	cin >> flag;
	int tmp[5];
	Wei *wei;
	Shu *shu;
	Wu *wu;
	Qun *qun;
	switch (flag) {
	case 1:
		cout << "���Ѽ���κ����Ӫ����ѡ��5λ�佫" << endl;
		wei = new Wei;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = wei->wei[tmp[i]-1];
			wei->vis[tmp[i]-1] = true;
		}
		delete wei;
		break;
	case 2:
		cout << "���Ѽ��������Ӫ����ѡ��5λ�佫" << endl;
		shu = new Shu;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = shu->shu[tmp[i]-1];
			shu->vis[tmp[i]-1] = true;
		}
		delete shu;
		break;
	case 3:
		cout << "���Ѽ��������Ӫ����ѡ��5λ�佫" << endl;
		wu = new Wu;
		for (int i = 0; i < 5; i++) {
			cin >> tmp[i];
			user.hero[i] = wu->wu[tmp[i]-1];
			wu->vis[tmp[i]-1] = true;
		}
		delete wu;
		break;
	default:
		cout << "���Ѽ���Ⱥ����Ӫ����ѡ��5λ�佫" << endl;
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
