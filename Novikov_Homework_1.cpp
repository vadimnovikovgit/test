#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;		 //Коеффициенты при х
	int x1, x2;			// Корни уравнения

	bool check = false;

	std::cout << "Enter \'a\' koef\n";
	std::cin >> a;
	std::cout << "Enter \'b\' koef\n";
	std::cin >> b;
	std::cout << "Enter \'c\' koef\n";
	std::cin >> c;

	if (a > 100 || a < 0)
		std::cout << "Incorrect range" << std::endl;
	else
		check = true;

	if (check)
	{
		if (b == 0 && c == 0)
			x1 = x2 = 0;

		if (b==0)
		{
			if (static_cast<float>(-c) / a > 0) {
				x1 = sqrt(-c / a);
				x2 = -sqrt(-c / a);
			}
			else
			{
				std::cout << "There's no real solutions" << std::endl;
				return 0;
			}

		}

		if (c == 0)
		{
			x1 = 0;
			x2 = static_cast<float>(-b) / a;
		}


		if(a!=0 && b!=0 && c!=0)
		{
			float D = b * b - 4 * a * c;										//Дискриминант
			if (D < 0)
			{
				std::cout << "There's no real solutions" << std::endl;
				return 0;
			}
			if (D == 0)
				x1 = x2 = -b / static_cast<float>(2 * a);
			else
			{
				x1 = (-b + sqrt(D)) / static_cast<float>(2 * a);
				x2 = (-b - sqrt(D)) / static_cast<float>(2 * a);
			}
		}

	}

	std::cout << "x1 = " << x1 << std::endl;
	std::cout << "x2 = " << x2 << std::endl;

	return 0;
	

	
}