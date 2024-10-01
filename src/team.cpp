#include "team.hpp"

#include <assert.h>
#include <numeric>

namespace nba {

void Team::AddPlayer(Player const &player) { m_players.push_back(player); }

void Team::RemovePlayer(std::string const &name) {
    auto it{std::find_if(m_players.begin(), m_players.end(),
                         [name](Player const &p) { return p.GetName() == name; })};
    assert(it != m_players.end());
    m_players.erase(it);
}

int Team::GetPayroll() const {
    return std::accumulate(m_players.begin(), m_players.end(), 0,
                           [](int i, Player const &p) { return i + p.GetSalary(); });
}

} // namespace nba
