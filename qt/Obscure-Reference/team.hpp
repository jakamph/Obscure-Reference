/**
  * @file This is the information for a team.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>
#include <QMap>

#include "or_system_util.hpp"
#include "player.hpp"

#ifndef TEAM_HPP
#define TEAM_HPP

namespace Obscure_Reference
{

/** This class will provide the interfaces for an individual team. */
class Team
{
public:
   /** This is the constructor for a new instance of the Team object.
     *
     * @post A new instance of Team has been created.
     */
   Team();

   /** This is the constructor for a new instance of the Team object.
     *
     * @param name  The name of the team.
     *
     * @param id    The ID of the team.
     *
     */
   Team( QString name,
         int     id );

   /** This method will add a player to the team's player mapping.
     *
     * @param newPlayer  The new player to be added to this team.
     *
     * @post  \a newPlayer has been added to this team.
     *
     */
   void
   addPlayer( Player* newPlayer );

   /** This method will retrieve the reference to the player by the
     * provided ID.
     *
     * @param playerId  The ID of the player for which we are searching.
     *
     * @return Reference to the player on the team that matches \a playerId,
     *         if one exists. Null otherwise.
     *
     */
   Player*
   getPlayerById( int playerId );

   /** This method will retrieve the reference to the player using the
     * provided name.
     *
     * @param playerName The name of the player to retrieve.
     *
     * @return Reference tot he player on the team that matches \a playerName
     *         if one exists. Null otherwise.
     *
     */
   Player*
   getPlayerByName( QString playerName );

   /** This method will remove the specified player from the team.
     *
     * @param playerId  The ID of the player to be removed.
     *
     * @post The player corresponding to \a playerId has been removed from
     *       the team.
     *
     */
   void
   dropPlayer( int playerId );

   /** This method will retrieve the name of this team.
     *
     * @return The team name.
     *
     */
   QString
   getTeamName( void );

   /** This method will retrieve the total salary cap number of this team.
     *
     * @return The total salary of all of the players currently on this team.
     *
     */
   int
   getSalary( void );

private:
   /** The name of the team */
   QString m_name;

   /** The ID of the team */
   int  m_id;

   /** The current salary cap number of this team */
   int m_totalSalary;

   /** The list of players currently on this team */
   QMap<int, Player*> m_playerMap;
};

}/* end namespace Obscure_Reference */

#endif // TEAM_HPP
