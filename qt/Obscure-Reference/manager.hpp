/**
  * @file This is the information for a manager.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */


#include <QString>

#ifndef MANAGER_HPP
#define MANAGER_HPP

namespace Obscure_Reference
{

/** This class is used to store information pretaining to an individual
  * manager.
  */
class Manager
{
public:
   /** This is the constructor for the class.
     *
     * @post A new instance of Manager has been created.
     *
     */
   Manager();

   /** This is the constructor for the class.
     *
     * @param managerName  The name of the manager.
     *
     * @param teamName     The name of this manager's team.
     *
     * @param emailAddress The manager's email address.
     *
     * @param managerId    The manager's ID.
     *
     * @param teamId       The ID of the manager's team.
     *
     * @post A new instance of Manager has been created.
     *
     */
   Manager( QString managerName,
            QString teamName,
            QString emailAddress,
            int     managerId,
            int     teamId );

   /** This is the deconstructor for the class.
     *
     * @post The memory allocated to this object is deleted.
     *
     */
   ~Manager( );

   /** This method is used to retrieve the name of this manager.
     *
     * @return The name of this manager.
     *
     */
   QString
   getManagerName( void );

   /** This method is used to retrieve the name of the team.
     *
     * @return The name of the team.
     *
     */
   QString
   getTeamName( void );

   /** This method is used to retrieve the ID of the manager.
     *
     * @return The ID associated with this manager.
     *
     */
   int
   getManagerId( void );

   /** This method is used to retrieve the ID of the team.
     *
     * @return The ID of the team associated with this manager.
     *
     */
   int
   getTeamId( void );

   /** This method is used to retrieve the email address associated with
     * this manager.
     *
     * @return  The email address for this manager.
     *
     */
   QString
   getEmailAddress( void );

private:

   /** The name of the manager */
   QString m_managerName;

   /** The email address associated with this manager */
   QString m_emailAddress;

   /** The name of the team */
   QString m_teamName;

   /** The ID of the manager */
   int m_managerId;

   /** The ID of the team */
   int m_teamId;
};

} /* end namespace Obscure_Reference */

#endif // MANAGER_HPP
