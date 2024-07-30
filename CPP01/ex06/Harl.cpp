#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Harl constructed" << std::endl << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Harl destructed" << std::endl << std::endl ;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl ;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl ;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl ;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl ;
}

// enum Level
// {
//     DEBUG,
//     INFO,
//     WARNING,
//     ERROR,
//     UNKNOWN
// };

Level getLevel(std::string& level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            return static_cast<Level>(i);
        }
    }
    return UNKNOWN;
}

void Harl::complain( std::string level )
{
    void (Harl::*complainfuncs[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    Level niveau = getLevel(level);

    switch(niveau)
    {
        case DEBUG:
            (this->*complainfuncs[0])();
            // fall through
        case INFO:
            (this->*complainfuncs[1])();
            // fall through
        case WARNING:
            (this->*complainfuncs[2])();
            // fall through
        case ERROR:
            (this->*complainfuncs[3])();
            break;
        default:
            std::cout << "You have no reason to complain young padawan" << std::endl << std::endl ;
            break;
        // case UNKNOWN:
    }
}