//!
//! @file person.hpp
//! @brief Person class header
//! @author Francesco Orso Pancaldi
//!
//! Definition of the class 'Person'.
//!

#ifndef CPP_TEMPLATE_PERSON_HPP
#define CPP_TEMPLATE_PERSON_HPP

#include <string>

namespace nba {

//! @brief Represents a generic person
class Person {
    std::string m_name;
    int m_salary;

  public:
    //! @brief Constructor
    //! @param name Full name, separated by a space
    //! @param salary Non-negative, in millions of dollars
    Person(std::string const &name, int salary) : m_name{name}, m_salary{salary} {}

    //! @brief Getter for name property
    //! @return The person's full name, separated by a space
    std::string GetName() const { return m_name; }

    //! @brief Setter for name property
    //! @param name Full name, separated by a space
    void SetName(std::string const &name) { m_name = name; }

    //! @brief Getter for salary property
    //! @return The person's salary, in millions of dollars
    int GetSalary() const { return m_salary; }

    //! @brief Setter for salary property
    //! @param salary Non-negative, in millions of dollars
    void SetSalary(int salary) { m_salary = salary; }
};

} // namespace nba

#endif
