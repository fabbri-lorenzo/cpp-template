#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "nba.hpp"

TEST_CASE("Testing Payroll") {
    nba::Player kj("Keldon Johnson", 19, nba::Position::SF);
    nba::Player dv("Devin Vassell", 29, nba::Position::SG);
    nba::Team spurs("San Antonio Spurs", std::vector{kj, dv});

    CHECK(spurs.GetPayroll() == 48);

    SUBCASE("Testing AddPlayer, RemovePlayer") {
        nba::Player js("Jeremy Sochan", 5, nba::Position::PF);
        spurs.AddPlayer(js);
        CHECK(spurs.GetPayroll() == 53);
        spurs.RemovePlayer("Keldon Johnson");
        CHECK(spurs.GetPayroll() == 34);
    }
}
