/**
  * @file This is the interface to the player database.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */

#include <QString>

#include "spreadsheet_interface.hpp"

#ifndef DATABASE_INTERFACE_HPP
#define DATABASE_INTERFACE_HPP

namespace Obscure_Reference
{

/** This class will provide access to the player/team database. */
class DatabaseInterface
{
public:
   /** This is the constructor for the DatabaseInterface class.
     *
     * @post A new instance of the DatabaseInterface class has been
     *       created.
     */
   DatabaseInterface();

   /** This is the destructor for the DatabaseInterface class.
     *
     * @post Space allocated for this instance of the DatabaseInterface
     *       has been cleared.
     *
     */
   ~DatabaseInterface();

   /** This method will be called when the user wants to log in to the
     * database.
     *
     * @param username The name with which the user is identified in the
     *                 database system.
     *
     * @param password The password associated with \a username.
     *
     * @return True if the login request was successful. False otherwise.
     */
   bool
   userLogIn( QString username,
              QString password );

   /**
     * This method will retrieve the current football season.
     *
     * @return Tthe current season's year.
     *
     */
   int
   getCurrentSeason( void );
private:
   /** This is the interface to the spreadsheet with which we communicate */
   SpreadsheetInterface* m_spreadsheetInterface;
};

} /* end namespace Obscure_Reference */

#endif // DATABASE_INTERFACE_HPP
