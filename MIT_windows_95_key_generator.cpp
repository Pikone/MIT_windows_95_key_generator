#include <iostream>
#include <cstdlib>
#include <ctime>

int main (int argc, char *argv[])
{
	srand(time(0));
	int key_p1, key_p2, key_p3[7], key_p4[5];

	int i, numOfKeys, valid;

    numOfKeys = atoi(argv[1]);

    printf("%d keys\n", numOfKeys);

for(int u = 0; u < numOfKeys; u++)    
{
	key_p1 = rand() % 266 + 100;
	key_p2 = rand() % 5 + 95;

	do{
		valid = 0;
		for (i = 0; i < 7; i++)
		{
			key_p3[i] = rand() % 10;
			valid += key_p3[i];
		}
	}while(valid % 7 != 0);

	std::cout << key_p1 << key_p2 << "-OEM-0";

	for (i = 0; i < 7; i++)
		std::cout << key_p3[i];

	std::cout << "-";

	for (i = 0; i < 5; i++)
	{
		key_p4[i] = rand() % 10;
		std::cout << key_p4[i];
	}
	std::cout << std::endl;
}

	return 0;
}
