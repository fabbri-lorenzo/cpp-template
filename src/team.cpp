//!
//! @file team.cpp
//! @brief Team class source
//! @author Francesco Orso Pancaldi
//!
//! Definitions of some methods of the class 'Team'.
//!

#include "team.hpp"

#include <assert.h>
#include <numeric>

namespace nba {

//! @brief Adds a player to the team
//! @param player Player to be added
void Team::AddPlayer(Player const &player) { m_players.push_back(player); }

//! @brief Removes a player from the team
//! @param name Full name, separated by a space, of the player to be removed
//!
//! Asserts that the player to be removed is part of the team
void Team::RemovePlayer(std::string const &name) {
    auto it{std::find_if(m_players.begin(), m_players.end(),
                         [name](Player const &p) { return p.GetName() == name; })};
    assert(it != m_players.end());
    m_players.erase(it);
}

//! @brief Total payroll of the team
//! @return The combined salaries of the players, in millions of dollars
int Team::GetPayroll() const {
    return std::accumulate(m_players.begin(), m_players.end(), 0,
                           [](int i, Player const &p) { return i + p.GetSalary(); });
}

} // namespace nba
