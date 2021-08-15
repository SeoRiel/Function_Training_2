#include <iostream>
#include <random>

int RandomFunction();

int main()
{
	int strike = 0;
	int ball = 0;
	int out = 0;

	const int MAX_SIZE = 3;

	int playerInput;
	int player[MAX_SIZE]{};
	int computer[MAX_SIZE]{};

	// �������� ������ ���� �ߺ����� �ʵ��� ���� ���Է�
	for (int i = 0; i < MAX_SIZE; i++)
	{
		computer[i] = RandomFunction();

		for (int j = 0; j < i ; j++)
		{
			if (computer[i] == computer[j])
			{
				i--;
			}
		}
	}

	std::cout << "<< ���� �߱� ����! >>" << std::endl;
	
	while (true)
	{
		std::cout << "���ڸ� �Է��ϼ��� : ";
		std::cin >> playerInput;

		for (int i = MAX_SIZE - 1; i >= 0; --i)
		{
			player[i] = playerInput % 10;
			playerInput /= 10;
		}

		for (int i = 0; i < MAX_SIZE; i++)
		{
			for (int j = 0; j < MAX_SIZE; j++)
			{
				if (i == j && computer[i] == player[j])
				{
					strike++;
				}
				else if (i != j && computer[i] == player[j])
				{
					ball++;
				}
				else if (i == j && computer[i] < player[j])
				{
					out++;
				}
			}
		}

		std::cout << "�׸� : " << "strike / ball / out" << std::endl;
		std::cout << "��� : " << strike << " / " << ball << " / " << out << std::endl;

		if (strike == 3 || ball == 4 || out == 3)
		{
			break;
		}
	}
}

int RandomFunction()
{
	int value[2];

	std::random_device random;
	std::mt19937 gen(random());
	std::uniform_int_distribution<int> distribution(1, 9);

	return distribution(gen);
}