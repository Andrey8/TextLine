#include "mainwindow.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>



MainWindow::MainWindow( QWidget * parent )
	: QWidget( parent )
{
	QHBoxLayout * layout = new QHBoxLayout;
	QLabel * label = new QLabel( tr( "Text" ) );
	QLineEdit * lineEdit = new QLineEdit;
	lineEdit->setFixedHeight( 50 );
	layout->addWidget( label );
	layout->addWidget( lineEdit );
	layout->setSpacing( 20 );
	setLayout( layout );

	setFixedSize( 400, 150 );
}

