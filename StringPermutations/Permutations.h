/** Brandon Harrell, Permutations.h, October 18, 2020, Permutations Class Declaration  **/

#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include <string>
#include <iostream>

class Permutations
{
private:
    std::string m_string;
    int m_length;
    int m_index;

public:

    /** Here's an example of a doxygen comment block. Do this for all methods
   * @pre None
   * @post private member variables initialized
   * @param a string by reference
   * @throw None
   **/

    Permutations(std::string& execString);

    /** Here's an example of a doxygen comment block. Do this for all methods
   * @pre Permutation object must've been created
   * @post permutations printed to terminal
   * @param None
   * @throw None
   **/

    void printPerms(std::string& p, std::string& r);
};

#endif

