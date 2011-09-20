/**
  * @file This contains common typedefs that will be used between many classes.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QMultiMap>

#ifndef OR_COMMON_DEFINES_HPP
#define OR_COMMON_DEFINES_HPP

namespace Obscure_Reference
{


/** The ID of a specific player */
typedef enum PlayerId
{
   invalidPlayerId = -1
} PlayerId;

/** The ID of a specific manager */
typedef enum ManagerId
{
   invalidManagerId = -1
} ManagerId;



/** The ID of a specific team */
typedef enum TeamId
{
   invalidTeamId = -1
} TeamId;

/** The value of an invalid year. */
typedef enum Year
{
   invalidYear = -1
} Year;

/** The value of an invalid salary */
typedef enum Salary
{
   invalidSalary = -1,
   yearlyIncrement = 5
} Salary;

/** Mapping of a player's salary. Key is a year. Value is that year's
  * salary for the player.
  */
typedef QMultiMap< int, Salary > PlayerSalary;


class ORSystemUtil
{

public:

   ORSystemUtil( void );

   /** This method is used to retrieve the current season.
     *
     * @return The year of the current season.
     */
   inline int
   getCurrentSeason( void ){ return m_currentSeason; }

private:

   /** This is a purposely application-level variable to ensure that we're
     * able to track the current season correctly.
     */
   int m_currentSeason;

};

} /* end namespace  Obscure_Reference */

#endif // OR_COMMON_DEFINES_HPP
