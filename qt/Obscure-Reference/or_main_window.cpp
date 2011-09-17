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
#include "or_main_window.hpp"
#include "ui_or_main_window.h"


ORMainWindow::ORMainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::ORMainWindow)
{
   ui->setupUi(this);
}/* end ::ORMainWindow */


ORMainWindow::~ORMainWindow()
{
   delete ui;
}/* end ::~ORMainWindow */
