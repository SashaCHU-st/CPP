#include <iostream>

int main(int argc, char *argv[])
{
	int i;
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	for(i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 32;
		}
		std::cout << argv[i];
	}
	return 0;
}

