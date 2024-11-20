//!
//! @file team.hpp
//! @brief Team class header
//! @author Francesco Orso Pancaldi
//!
//! Declaration of the class 'Team' and some definitions of its methods.
//!

#ifndef CPP_TEMPLATE_TEAM_HPP
#define CPP_TEMPLATE_TEAM_HPP

#include "person.hpp"
#include "player.hpp"

#include <algorithm>
#include <vector>

namespace nba {

//! @brief Represents a basketball team
class Team {
    //! @brief Full name
    std::string m_name;
    //! @brief List of players on the roster
    std::vector<Player> m_players;

  public:
    //! @brief Constructor
    //! @param name Full name
    //! @param players List of players on the roster
    Team(std::string const &name, std::vector<Player> const &players) : m_name{name}, m_players{players} {}

    //! @brief Getter for players property
    //! @return The team's players
    std::vector<Player> GetTeam() const { return m_players; }

    void AddPlayer(Player const &);

    void RemovePlayer(std::string const &name);

    int GetPayroll() const;

    // TODO:
    std::vector<Player> GetLineup() const;
};

} // namespace nba

#endif
