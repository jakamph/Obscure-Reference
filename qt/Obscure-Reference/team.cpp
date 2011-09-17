/**
  * @file This is the information for an individual player.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include "or_common_defines.hpp"
#include "team.hpp"

using namespace Obscure_Reference;

Team::Team()
{
}/* end ::Team */

Team::Team( QString name,
            TeamId  id ) :
   m_name( name ),
   m_id( id )
{
}/* end ::Team name & ID */
