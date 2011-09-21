
/**
  * @file This is the information for a manager.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>

#include "or_system_util.hpp"
#include "manager.hpp"

using namespace Obscure_Reference;

/* See the header for informationa about this function */
Manager::Manager() :
   m_managerName( QString::null ),
   m_emailAddress( QString::null ),
   m_teamName( QString::null ),
   m_managerId( invalidManagerId ),
   m_teamId( invalidTeamId )
{
}/* end  ::Manager */

/* See the header for information about this function */
Manager::Manager( QString managerName,
                  QString teamName,
                  QString emailAddress,
                  int     managerId,
                  int     teamId ) :
   m_managerName( managerName ),
   m_emailAddress( emailAddress ),
   m_teamName( teamName ),
   m_managerId( managerId ),
   m_teamId( teamId )
{
}/* end ::Manager with parameters */

/* See the header for informationa about this function */
Manager::~Manager( )
{

}/* end  ~Manager */

/* See the header for informationa about this function */
QString
Manager::getManagerName( void )
{
   return m_managerName;
}/* end  ::getManagerName */

/* See the header for informationa about this function */
QString
Manager::getTeamName( void )
{
   return m_teamName;
}/* end ::getTeamName  */

/* See the header for informationa about this function */
int
Manager::getManagerId( void )
{
   return m_managerId;
}/* end  ::getManagerId */

/* See the header for informationa about this function */
int
Manager::getTeamId( void )
{
   return m_teamId;
}/* end  ::getTeamId */

/* See the header for informationa about this function */
QString
Manager::getEmailAddress( void )
{
   return m_emailAddress;
}/* end  ::getEmailAddress */
