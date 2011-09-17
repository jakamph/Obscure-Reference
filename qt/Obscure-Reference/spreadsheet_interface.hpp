/**
  * @file This is the interface to the Google Spreadsheet in which our
  * data is to be stored.
  *
  * @author Paul Forbes & Jason Kamphaugh
  *
  * @date September 17, 2011
  *
  */
#ifndef SPREADSHEET_INTERFACE_HPP
#define SPREADSHEET_INTERFACE_HPP

#include <QString>
#include <QTimer>

/** This class provides an abstraction of the interface to the Google
  * Spreadsheet.
  */
class SpreadsheetInterface
{
public:
   /** This is the constructor of the class for the spreadsheet interface.
     *
     * @post A new SpreadsheetInterface object has been created.
     *
     */
   SpreadsheetInterface();

   /** This method will log in to the Google Spreadsheet interface with
     * the provided credentials.
     *
     * @param username  The name with which this user is identified to Google's
     *                  system.
     *
     * @param password  The password associated with this user.
     *
     * @return true if the connection attempt was successful. false
     *         otherwise.
     *
     */
   bool
   userLogIn( QString username,
              QString password );

private:
   /** Timer that will be set to execute when the log in token that we
     * received will have timed out.
     */
   QTimer* m_logInTimer;
};

#endif // SPREADSHEET_INTERFACE_HPP
