/**
 * @file This is the interface to the Google Spreadsheet in which our
 * data is to be stored.
 *
 * @author  Paul Forbes & Jason Kamphaugh
 *
 * @date September 17, 2011
 *
 */

#include <QString>
#include "spreadsheet_interface.hpp"

using namespace Obscure_Reference;

/* See the header for information on this function. */
SpreadsheetInterface::SpreadsheetInterface()
{
}/* end ::SpreadsheetInterface */

/* See the header for information on this function. */
bool
SpreadsheetInterface::userLogIn( QString username,
                                 QString password )
{
   bool successfulLogIn = false;

   return successfulLogIn;

}/* ::userLogIn */

/* See the header for information on this function. */
int
SpreadsheetInterface::getCurrentSeason( void )
{
   return 2011;
}/* end ::getCurrentSeason */
