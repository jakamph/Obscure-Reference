/**
  * @file This is the interface to the player database.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */
#include <QString>
#include "database_interface.hpp"
#include "spreadsheet_interface.hpp"

using namespace Obscure_Reference;

/* Please see the header for information about this function */
DatabaseInterface::DatabaseInterface()
{
   /* Get the reference to the spreadsheet object */
   m_spreadsheetInterface = new SpreadsheetInterface();
}/* end ::DatabaseInterface */

/* Please see the header for information about this function */
DatabaseInterface::~DatabaseInterface( )
{
   delete m_spreadsheetInterface;
}/* end ::~DatabaseInterface */

/* Please see the header for information about this function */
bool
DatabaseInterface::userLogIn( QString username,
                              QString password )
{
   /* pass the information in to spreadsheet interface to do the actual
    * work of connecting.
    */
   bool successfulLogIn = m_spreadsheetInterface->userLogIn( username,
                                                             password );

   return successfulLogIn;

}/* end ::userLogIn */
