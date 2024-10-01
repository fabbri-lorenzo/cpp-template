/**
 * \file team.hpp
 * \brief Person class header
 * \author Francesco Orso Pancaldi
 *
 * Team class for cpp-template.
 *
 */

#ifndef CPP_TEMPLATE_TEAM_HPP
#define CPP_TEMPLATE_TEAM_HPP

#include <algorithm>
#include <vector>

#include "person.hpp"
#include "player.hpp"

namespace nba {

/**
 * \brief Represents a basketball team
 */
class Team {
    /// @brief Full name
    std::string m_name;
    /// @brief List of players on the roster
    std::vector<Player> m_players;

  public:
    /// @brief Constructor
    /// @param name Full name
    /// @param players List of players on the roster
    Team(std::string const &name, std::vector<Player> const &players) : m_name{name}, m_players{players} {}

    /// @brief Getter for players property
    /// @return The team's players
    std::vector<Player> GetTeam() const { return m_players; }

    /// @brief Adds a player to the team
    /// @param player Player to be added
    void AddPlayer(Player const &player);

    /// @brief Removes a player from the team
    /// @param name Full name, separated by a space, of the player to be removed
    ///
    /// Asserts that the player to be removed is part of the team
    void RemovePlayer(std::string const &name);

    /// @brief Total payroll of the team
    /// @return The combined salaries of the players, in millions of dollars
    int GetPayroll() const;

    /// @brief TODO
    std::vector<Player> GetLineup() const;
};

} // namespace nba

#endif
