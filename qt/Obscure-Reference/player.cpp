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
#include "player.hpp"

using namespace Obscure_Reference;

/* See the header file for information on using this method */
Player::Player( ) :
   m_name( ),
   m_id( invalidPlayerId ),
   m_orUtility( NULL )
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

/* See the header file for information on using this method */
int
Player::getBaseSalary( int year )
{
   int internalYear = year;

   /* default our salary to invalid */
   Salary returnSalary = invalidSalary;

   /* if year is invalid */
   if (invalidYear == internalYear)
   {
      /* pull in the global current season variable */
      internalYear = m_orUtility->getCurrentSeason( );
   }

   /* ensure that the salary map includes the specified year */
   if (m_salary.contains( internalYear ))
   {
      /* retrieve the salary for that year */
      returnSalary = m_salary.value( internalYear );
   }

   return returnSalary;

}/* ::getBaseSalary */

/* See the header file for information on using this method */
void
Player::setOrUtility( ORSystemUtil *orUtility )
{
   m_orUtility = orUtility;
}/* end ::setOrUtility */

/* See the header file for information on using this method */
int
Player::getDraftYear( void )
{
   return m_draftYear;
}

/* See the header file for information on using this method */
int
Player::getCurrentSalary( void )
{

   /* retrieve the draft year */
   int draftYear = getDraftYear( );

   /* retrieve the salary for the draft year */
   int draftYearSalary = getBaseSalary( draftYear );

   /* calculate the year difference */
   int yearDifference = m_orUtility->getCurrentSeason( ) - draftYear;

   /* calculate the salary */
   int currentSalary =
         draftYearSalary +
         (yearDifference *
          yearlyIncrement);

   /* provide the salary back to the caller */
   return currentSalary;

}/* end ::getCurrentSalary */
