/** Brandon Harrell, Permutations.h, October 18, 2020, Permutations class declaration  **/

#include "Executive.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << "You have not passed in enough parameters; e.x. ''./Permutations dog'" << std::endl;
	}
	else
	{
		std::string argument = argv[1];
		Executive exec(argument);
		exec.run();
	}
	return(0);
}
