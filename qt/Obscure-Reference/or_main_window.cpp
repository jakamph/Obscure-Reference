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

#include "or_system_util.hpp"
#include "or_main_window.hpp"
#include "ui_or_main_window.h"
#include "database_interface.hpp"

using namespace Obscure_Reference;

ORMainWindow::ORMainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::ORMainWindow)
{
   ui->setupUi(this);

   /* initialize the system util */
   m_systemUtil = new ORSystemUtil( );

   /* initialize the database interface */
   m_databaseInterface = new DatabaseInterface( );

}/* end ::ORMainWindow */


ORMainWindow::~ORMainWindow()
{
   delete ui;

   delete m_systemUtil;

   delete m_databaseInterface;
}/* end ::~ORMainWindow */

void ORMainWindow::on_actionExit_triggered()
{
   /* close the main window */
   this->close();
}/* end ::on_actionExit_triggered */
