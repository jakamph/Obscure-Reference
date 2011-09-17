/**
  * @file This is the information for an individual player.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>

#include "or_common_defines.hpp"
#include "player.hpp"

using namespace Obscure_Reference;

/* See the header file for information on using this method */
Player::Player( ) :
   m_name( ),
   m_id( invalidPlayerId )
{
}/* end ::Player */

/* See the header file for information on using this method */
Player::Player( QString  name,
                PlayerId id ) :
   m_name( name ),
   m_id( id )
{
}/* end ::Player name & ID */

/* See the header file for information on using this method */
QString
Player::getName()
{
   return m_name;
}/* end getName */

/* See the header file for information on using this method */
PlayerId
Player::getId( )
{
   return m_id;
}/* end getId */

int
Player::getBaseSalary( int year )
{
   int internalYear = year;

   /* default our salary to invalid */
   int returnSalary = invalidSalary;

   /* if year is invalid */
   if (invalidYear == internalYear)
   {
      /* pull in the global current season variable */
      internalYear = currentSeason;
   }

   /* ensure that the salary map includes the specified year */
   if (m_salary.contains( internalYear ))
   {
      /* retrieve the salary for that year */
      returnSalary = m_salary.value( internalYear );
   }

   return returnSalary;

}/* ::getBaseSalary */

