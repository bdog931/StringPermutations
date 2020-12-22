/** Brandon Harrell, Executive.cpp, October 18, 2020, Executive  **/

#include "Executive.h"

Executive::Executive(std::string& userString)
{
	m_string = userString;
}

void Executive::run()
{
	Permutations myPermutation(m_string);
	std::string a = "";
	myPermutation.printPerms(a, m_string);
}
