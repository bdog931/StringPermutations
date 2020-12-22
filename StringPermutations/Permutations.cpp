/** Brandon Harrell, Permutations.cpp, October 18, 2020, Permutations Class Implementation File  **/

#include "Permutations.h"

Permutations::Permutations(std::string& execString)
{
	m_string = execString;
	m_length = m_string.length();
	m_index = -1;
}

void Permutations::printPerms(std::string& p, std::string& r)
{
	m_index = m_index + 1;
	std::cout << p << std::endl;
	if (r.length() == 0)
	{
		std::cout << m_index << std::endl;
		return;
	}
	for (int i = 0; i < r.length(); i++)
	{
		std::string newR = r.substr(0, i) + r.substr(i + 1);
		std::string newP = p + r.at(i);
		printPerms(newP, newR);
	}
}
