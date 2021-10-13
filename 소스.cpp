#include <iostream>
#include <array>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Character
{
public:
	Character()
	{
		cout << "Character ����" << endl;
	}
	virtual ~Character()
	{
		cout << "Character �ı�" << endl;
	}

	virtual void Move() = 0; // ���� ���� �Լ� = �������̽�, �ٷ� ������ �ȵǰ� ��� �� ��ӹ��� �Լ��� ���� �� ���� 
};

class Player : public Character
{
public:
	Player()
	{
		cout << "Player ����" << endl;
	}
	~Player()
	{
		cout << "Player �ı�" << endl;
	}
	virtual void Move() override
	{
		cout << "Player �̵�" << endl;
	}
};

class Monster : public Character
{
public:
	Monster()
	{
		cout << "Monster ����" << endl;

	}
	virtual ~Monster()
	{
		cout << "Monster �ı�" << endl;

	}
	virtual void Move() override
	{
		cout << "Monster �̵�" << endl;
	}
};

class Goblin : public Monster
{
public:
	Goblin()
	{
		cout << "Goblin ����" << endl;

	}
	virtual ~Goblin()
	{
		cout << "Goblin �ı�" << endl;

	}
	virtual void Move() override
	{
		cout << "Goblin �̵�" << endl;
	}
};

class Slime : public Monster
{
public:
	Slime()
	{
		cout << "Slime ����" << endl;

	}
	virtual ~Slime()
	{
		cout << "Slime �ı�" << endl;

	}
	virtual void Move() override
	{
		cout << "Slime �̵�" << endl;
	}
};

class Hog : public Monster
{
public:
	Hog()
	{
		cout << "Hog ����" << endl;

	}
	virtual ~Hog()
	{
		cout << "Hog �ı�" << endl;

	}
	virtual void Move() override
	{
		cout << "Hog �̵�" << endl;
	}
};

int main()
{
	vector<Character*> Characters;

	Characters.push_back(new Player());

	srand(time(nullptr));

	for (int i = 0; i < 10; ++i)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Characters.push_back(new Goblin());

		}
		else if (Type == 1)
		{
			Characters.push_back(new Slime());

		}
		else
		{
			Characters.push_back(new Hog());
		}
		
	}
	for (size_t i = 0; i < Characters.size(); ++i)
	{
		Characters[i]->Move();
	}


	Character* character = new Player();
	Character* goblin = new Goblin();
	delete goblin;

}

