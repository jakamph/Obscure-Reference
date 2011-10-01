/**
 * @file This is the main window for the GUI. It will mostly consist of a
 * container for the sub frames to fill in the currently-pertinent
 * information
 *
 * @author Paul Forbes & Jason Kamphaugh
 *
 * @date September 17, 2011
 *
 */

#ifndef OR_MAIN_WINDOW_H
#define OR_MAIN_WINDOW_H

#include <QMainWindow>
#include <QMap>

#include "or_system_util.hpp"
#include "database_interface.hpp"
#include "team.hpp"


namespace Ui
{
   class ORMainWindow;
}

using namespace Obscure_Reference;

/**
  * This class is the main window of the application.
  */
class ORMainWindow : public QMainWindow
{
   Q_OBJECT

public:


   /**
     * This is the constructor for the main window of the application.
     *
     * @param parent The parent widget of this window.
     *
     * @post A new ORMainWindow has been created.
     *
     */
   explicit ORMainWindow(QWidget *parent = 0);

   /**
     * The destructor of the main window
     *
     * @post Objects created for this window have been destroyed.
     */
   ~ORMainWindow();

private slots:

   /**
     * This slot is called when the exit menu option is selected.
     *
     * @post The main window has been closed.
     *
     */
   void on_actionExit_triggered();

private:

   /** The generated UI */
   Ui::ORMainWindow* ui;

   /** The utility object */
   ORSystemUtil* m_systemUtil;

   /** The list of teams */
   QMap<int, Team*> m_teamMap;

   /** The interface to the database */
   DatabaseInterface* m_databaseInterface;
};

#endif // OR_MAIN_WINDOW_H
