#include <iostream>
#include <string>

// 1. ������ ���� ����� ���͸� ����� ������.
int main()
{
	int inputType;

	struct MONSTER				// ���� ����ü
	{
		enum TYPE				// ���� Ÿ�� ����
		{
			Wolf,
			Demon,
			Slime
		};

		std::string setType{};
		std::string setName{};	// ���� �̸�

		int setHp{};			// ���� ü��

	}monster;

	bool nonType{ false };		// Ÿ�� üũ

	std::cout << "������ Ÿ���� �Է��ϼ���. (1. Wolf / 2. Demon / 3.Slime) : ";
	std::cin >> inputType;

	std::cout << "������ �̸��� �Է��ϼ���. : ";
	std::cin >> monster.setName;

	std::cout << "������ HP�� �Է��ϼ���. : ";
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
		std::cout << "�������� �ʴ� ���� Ÿ���Դϴ�." << std::endl;
	}
}
