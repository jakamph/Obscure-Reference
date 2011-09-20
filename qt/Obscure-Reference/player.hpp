/**
  * @file This is the information for an individual player.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>

#include "or_system_util.hpp"

#ifndef PLAYER_HPP
#define PLAYER_HPP

namespace Obscure_Reference
{

/** This class contains all of the data necessary to interface with a
  * player.
  */
class Player
{
public:

   /** This is the constructor for the Player class
     *
     * @post A new isntance of the Player class has been created.
     *
     */
   Player( );

   /** This is the constructor for the Player class
     *
     * @param name  The name of the player.
     *
     * @param id    The player ID associated with this player.
     *
     * @post A new isntance of the Player class has been created.
     *
     */
   Player( QString  name,
           PlayerId id );

   /** This is the destructor of the player class.
     *
     * @post All objects created for this object are destroyed.
     *
     */
   ~Player( );

   /** This method will return the name of the player in the format of
     * "Firstname Lastname [team]"
     *
     * @return A QString with this player's name.
     */
   QString
   getName( void );

   /** This method will return the ID of this player.
     *
     * @return The PlayerId associated with this player.
     *
     */
   PlayerId
   getId( );

   /** This method will retrieve the player's salary for the specified
     * year if the player were drafted in that year. If no year is specified,
     * the current salary will be returned.
     *
     * @param year The year for which we want to retrieve the salary.
     *
     */
   int
   getBaseSalary( int year = -1 );

   /** This function is used to receive the utility object that is used
     * to provide various functionality to multiple objects.
     *
     * @param orUtility  The utility object to be used.
     *
     */
   void
   setOrUtility( ORSystemUtil*  orUtility );

   /** This function is used to retrieve the year in which this player
     * was last drafted.
     *
     * @return The full four-digit year in which this player was last drafted.
     *
     */
   int
   getDraftYear( void );

   /** This function is used to retrieve the current salary for this
     * player.
     *
     * @return The current salary for this player.
     *
     */
   int
   getCurrentSalary( void );

private:
   /** The name of this player in the format "Firstname Lastname" */
   QString m_name;

   /** The ID that the database has for this player. */
   PlayerId m_id;

   /** The Mapping of the salaries for this player */
   PlayerSalary m_salary;

   /** The last year that this player was drafted */
   int m_draftYear;

   /** The utility object that is to be used */
   ORSystemUtil*  m_orUtility;
};

} /* end namespace Obscure_Reference */

#endif // PLAYER_HPP
