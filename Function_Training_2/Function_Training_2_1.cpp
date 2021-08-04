#include <iostream>
#include <string>

// 1. 다음과 같이 설계된 몬스터를 만들어 보세요.
int main()
{
	int inputType;

	struct MONSTER				// 몬스터 구조체
	{
		enum TYPE				// 몬스터 타입 지정
		{
			Wolf,
			Demon,
			Slime
		};

		std::string setType{};
		std::string setName{};	// 몬스터 이름

		int setHp{};			// 몬스터 체력

	}monster;

	bool nonType{ false };		// 타입 체크

	std::cout << "몬스터의 타입을 입력하세요. (1. Wolf / 2. Demon / 3.Slime) : ";
	std::cin >> inputType;

	std::cout << "몬스터의 이름을 입력하세요. : ";
	std::cin >> monster.setName;

	std::cout << "몬스터의 HP를 입력하세요. : ";
	std::cin >> monster.setHp;

	switch (inputType)
	{
	case monster.Wolf:
		monster.setType = "Wolf";
		break;

	case monster.Demon:
		monster.setType = "Demon";
		break;

	case monster.Slime:
		monster.setType = "Slime";
		break;

	default:
		nonType = true;
		break;
	}

	if (nonType == false)
	{
		std::cout << monster.setName << "(" << monster.setHp << ")" << "-" << monster.setType << std::endl;
	}
	else
	{
		std::cout << "정해지지 않는 몬스터 타입입니다." << std::endl;
	}
}
