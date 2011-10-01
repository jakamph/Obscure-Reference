#include <QtGui/QApplication>
#include "or_main_window.hpp"

/**
  * This is the main function of the application.
  *
  * @param argc  The number of arguments passed in on the command line.
  *
  * @param argv  The array of string arguments passed in to the application.
  *
  * @return 0 if no errors in running. Non-zero otherwise.
  *
  */
int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   ORMainWindow w;
   w.show();

   return a.exec();
}/* end main */
