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

/** Mapping of a player's salary. Key is a year. Value is that year's
  * salary for the player.
  */
typedef QMultiMap< int, int > PlayerSalary;

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

} /* end namespace  Obscure_Reference */

/** This is a purposely application-level variable to ensure that we're
  * able to track the current season correctly.
  */
int currentSeason;

const int invalidYear = -1;

const int invalidSalary = -1;

#endif // OR_COMMON_DEFINES_HPP
