#include <iostream>
#include <cstdlib>
#include <ctime>

int main (int argc, char *argv[])
{
	if (argc == 1)
		argv[1] = "1";
	srand(time(0));
	int key_p1, key_p2[8] = {95, 96, 97, 98, 99, 01, 02, 03}, key_p3[7];

	int i, valid, random_control;

	printf("%d keys\n", atoi(argv[1]));

//Main algorithm

	for(int u = 0; u < atoi(argv[1]); u++)
	{
		key_p1 = rand() % 366;

		if (key_p1 < 100){
			std::cout << 0;
			if (key_p1 < 10){
				std::cout << 0;
			}
		}
		std::cout << key_p1;

		random_control = rand() % 7;
		if (key_p2[random_control] < 4)
			std::cout << 0;
		std::cout << key_p2[random_control] << "-OEM-0";

		do{
			valid = 0;
			for (i = 0; i < 7; i++)
			{
				key_p3[i] = rand() % 10;
				valid += key_p3[i];
			}
		}while(valid % 7 != 0);

		for (i = 0; i < 7; i++)
			std::cout << key_p3[i];

		std::cout << "-";

		for (i = 0; i < 5; i++)
			std::cout << rand() % 10;
		std::cout << std::endl;
	}

	return 0;
}
