//!
//! @file player.hpp
//! @brief Player class header
//! @author Francesco Orso Pancaldi
//!
//! Definition of the class 'Player'.
//! Inherits from Person.
//!

#ifndef CPP_TEMPLATE_PLAYER_HPP
#define CPP_TEMPLATE_PLAYER_HPP

#include <string>

#include "person.hpp"

namespace nba {

//!
//! @brief Position on the field
//!
//! PG = Point Guard
//! SG = Shooting Guard
//! SF = Small Forward
//! PF = Power Forward
//! C = Center
//!
enum class Position { PG, SG, SF, PF, C };

//! @brief Represents a basketball player
class Player : public Person {
    Position m_position;

  public:
    //! @brief Constructor
    //! @param name Full name, separated by a space
    //! @param salary Non-negative, in millions of dollars
    //! @param position Position on the field
    Player(std::string const &name, int salary, Position position)
        : Person(name, salary), m_position{position} {}

    //! @brief Getter for position property
    //! @return The player's position
    Position GetPosition() const { return m_position; }

    //! @brief Setter for position property
    //! @param position Position on the field
    void SetPosition(Position position) { m_position = position; }
};
} // namespace nba

#endif
