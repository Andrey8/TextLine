#include "Widgets/mainwindow.h"

#include <QApplication>



int main( int argc, char * argv[] )
{
	QApplication a(argc, argv);

	Widgets::MainWindow w;
	w.show();

	return a.exec();
}
