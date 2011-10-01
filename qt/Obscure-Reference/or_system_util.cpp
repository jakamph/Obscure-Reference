/**
  * @file This contains common typedefs that will be used between many classes.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include "or_system_util.hpp"

using namespace Obscure_Reference;

ORSystemUtil::ORSystemUtil( void ) :
   m_currentSeason( -1 )
{
}/* end ORSystemUtil */

void
ORSystemUtil::setCurrentSeason( int season )
{
   m_currentSeason = season;
}/* ::setCurrentSeason */

