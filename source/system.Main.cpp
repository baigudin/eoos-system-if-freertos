/** 
 * The main entery point.
 * 
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2018, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#include "system.System.hpp"

/**
 * Executes a user application main process.
 */
int main()
{
    ::local::int32 error;
    // Execute the operating system
    try
    {
        ::local::system::System eoos;
        error = eoos.execute();
    }
    // Handle unexpected exceptions, following MISRA-C++:2008 Rule 15–3–2
    catch (...)
    {
        error = ::local::ERROR_UNDEFINED;
    }
    return static_cast<int>(error);
}
