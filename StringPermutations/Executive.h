
/** Brandon Harrell, Executive.h, October 18, 2020, Executive Class Declaration  **/

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include "Permutations.h"

class Executive
{
private:
    std::string m_string;

public:

    /** Here's an example of a doxygen comment block. Do this for all methods
   * @pre None
   * @post member string is initialized
   * @param A Reference to a String
   * @throw None
   **/

    Executive(std::string& userString);

    /** Here's an example of a doxygen comment block. Do this for all methods
   * @pre Must have an instantiated Executive Object
   * @post Calls Permutations Class and Class Methods
   * @param None
   * @throw None
   **/

    void run();

};

#endif
