#include "nba.hpp"

#include <iostream>

int main()
{
    nba::Player kj("Keldon Johnson", 19, nba::Position::SF);
    nba::Player dv("Devin Vassell", 29, nba::Position::SG);
    nba::Player js("Jeremy Sochan", 5, nba::Position::PF);

    nba::Team spurs("San Antonio Spurs", std::vector{kj, dv});
    spurs.AddPlayer(js);
    std::cout << spurs.GetPayroll() << '\n';
    spurs.RemovePlayer("Devin Vassell");
}