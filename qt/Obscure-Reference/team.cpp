/**
  * @file This is the information for an individual player.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>
#include <QMap>
#include <QMapIterator>

#include "or_system_util.hpp"
#include "team.hpp"
#include "player.hpp"

using namespace Obscure_Reference;

Team::Team() :
   m_name( QString::null ),
   m_id( invalidSalary ),
   m_totalSalary( 0 )
{
}/* end ::Team */

Team::Team( QString name,
            int     id ) :
   m_name( name ),
   m_id( id ),
   m_totalSalary( 0 )
{
}/* end ::Team name & ID */


void
Team::addPlayer( Player* newPlayer )
{
   /* make sure that the player isn't already on the team */
   if (!m_playerMap.contains( newPlayer->getId() ))
   {

      /* insert the player in to the map */
      m_playerMap.insert( newPlayer->getId(), newPlayer );

      /* add this player's salary to our total salary cap number */
      m_totalSalary += newPlayer->getCurrentSalary( );

   }/* end if the palyer isn't already on the team */

}/* end ::addPlayer */

Player*
Team::getPlayerById( int playerId )
{

   Player* foundPlayer = NULL;

   /* make sure that this player exists in the map */
   if (m_playerMap.contains( playerId ))
   {
      /* get the reference to the player */
      foundPlayer = m_playerMap.value( playerId );
   }/* end if the player exists in the map */

   return foundPlayer;

}/* end ::getPlayerById */

Player*
Team::getPlayerByName( QString playerName )
{
   Player* foundPlayer = NULL;
   Player* currentPlayer = NULL;

   /* declare the iterator type for walking through the map */
   QMapIterator<int, Player*> mapIter(m_playerMap);

   /* loop through the map looking for the player with the specified
    * name
    */
   while (mapIter.hasNext( ))
   {
      /* get the next item */
      mapIter.next();

      /* get the player at the current position */
      currentPlayer = mapIter.value( );

      /* check for a match */
      if (playerName == currentPlayer->getName())
      {
         /* save the pointer to be returned */
         foundPlayer = currentPlayer;

         /* break out of the loop */
         break;
      }/* end if a match was found */
   }/* end loop through the map */

   return foundPlayer;
}/* end ::getPlayerByName */


void
Team::dropPlayer( int playerId )
{

   /* make sure that the player is in the list */
   if (m_playerMap.contains( playerId ))
   {
      /* get a reference to the player */
      Player* removedPlayer = m_playerMap.value( playerId );

      /* remove this player from our list */
      m_playerMap.remove( playerId );

      /* subtract this player's salary from our total */
      m_totalSalary -= removedPlayer->getCurrentSalary( );
   }
}/* end ::dropPlayer */


QString
Team::getTeamName( void )
{
   return m_name;
}/* end ::getTeamName */

int
Team::getSalary( void )
{
   return m_totalSalary;
}/* end ::getSalary */
