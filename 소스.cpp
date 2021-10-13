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
		cout << "Character 생성" << endl;
	}
	virtual ~Character()
	{
		cout << "Character 파괴" << endl;
	}

	virtual void Move() = 0; // 순수 가상 함수 = 인터페이스, 바로 생성이 안되고 상속 후 상속받은 함수만 만들 수 있음 
};

class Player : public Character
{
public:
	Player()
	{
		cout << "Player 생성" << endl;
	}
	~Player()
	{
		cout << "Player 파괴" << endl;
	}
	virtual void Move() override
	{
		cout << "Player 이동" << endl;
	}
};

class Monster : public Character
{
public:
	Monster()
	{
		cout << "Monster 생성" << endl;

	}
	virtual ~Monster()
	{
		cout << "Monster 파괴" << endl;

	}
	virtual void Move() override
	{
		cout << "Monster 이동" << endl;
	}
};

class Goblin : public Monster
{
public:
	Goblin()
	{
		cout << "Goblin 생성" << endl;

	}
	virtual ~Goblin()
	{
		cout << "Goblin 파괴" << endl;

	}
	virtual void Move() override
	{
		cout << "Goblin 이동" << endl;
	}
};

class Slime : public Monster
{
public:
	Slime()
	{
		cout << "Slime 생성" << endl;

	}
	virtual ~Slime()
	{
		cout << "Slime 파괴" << endl;

	}
	virtual void Move() override
	{
		cout << "Slime 이동" << endl;
	}
};

class Hog : public Monster
{
public:
	Hog()
	{
		cout << "Hog 생성" << endl;

	}
	virtual ~Hog()
	{
		cout << "Hog 파괴" << endl;

	}
	virtual void Move() override
	{
		cout << "Hog 이동" << endl;
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

