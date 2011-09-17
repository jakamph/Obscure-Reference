/**
  * @file This is the information for a team.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>

#include "or_common_defines.hpp"

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

   Team( QString name,
         TeamId  id );

private:
   QString m_name;

   TeamId  m_id;
};

}/* end namespace Obscure_Reference */

#endif // TEAM_HPP
