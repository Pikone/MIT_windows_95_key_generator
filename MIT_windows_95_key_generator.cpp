#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <string> 

class KeyGen
{
    std::string key, n1, n2, n3;

    int numOfKeys;

    void makeN1();
    void makeN2();
    void makeN3();

public:

    KeyGen(int keynum);
    void makeKey();
};

KeyGen::KeyGen(int keynum)
{
    //std::cout << "Checking for access...";
    //std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    //std::cout << "\tAccess granted!\n\n";
    
    n1.clear(); n2.clear(); n3.clear();
    numOfKeys = keynum;
}

void KeyGen::makeKey()
{

    for(int i = 0; i < numOfKeys; i++)
    {
        n1.clear(); n2.clear(); n3.clear();

        makeN1();
        makeN2();
        makeN3();
        key = n1 + "-OEM-0" + n2 + "-" + n3;

        std::cout << key << std::endl;
    }
}

void KeyGen::makeN1()
{
    int key_p1, key_p2;

    key_p1 = rand() % 266 + 100;
    key_p2 = rand() % 5 + 95;

    n1 = std::to_string(key_p1) + std::to_string(key_p2);
}

void KeyGen::makeN2()
{
    int key_p3[7], valid;

	do{
		valid = 0;
		for (int i = 0; i < 7; i++)
=======
	int i, valid;

	printf("%d keys\n", atoi(argv[1]));

	for(int u = 0; u < atoi(argv[1]); u++)
	{
		key_p1 = rand() % 366;
		key_p2 = rand() % 5 + 95;

		do{
			valid = 0;
			for (i = 0; i < 7; i++)
			{
				key_p3[i] = rand() % 10;
				valid += key_p3[i];
			}
		}while(valid % 7 != 0);

		if (key_p1 < 100)
>>>>>>> 096131dc13322ef64edfde1893accd32d000635e
		{
			std::cout << 0;
			if (key_p1 < 10)
			{
				std::cout << 0;
			}
		}

<<<<<<< HEAD
    for(int i = 0; i < 7; i++)
        n2 += std::to_string(key_p3[i]);
}

void KeyGen::makeN3()
{
    int key_p4[5];

    for(int i = 0; i < 5; i++)
    {
        key_p4[i] = rand() % 10;
        n3 += std::to_string(key_p4[i]);
    }
}
=======
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
>>>>>>> 096131dc13322ef64edfde1893accd32d000635e

int main (int argc, char *argv[])
{
	srand(time(0));

	int numOfKeys;
    numOfKeys = atoi(argv[1]);
   
    KeyGen generator(numOfKeys);

    generator.makeKey();

	return 0;
}
