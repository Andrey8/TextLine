#include "mainwindow.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTabWidget>



MainWindow::MainWindow( QWidget * parent )
	: QWidget( parent )
{
	QHBoxLayout * lineEditLayout = new QHBoxLayout;
	lineEditLayout->setAlignment( Qt::AlignLeft );

	QLabel * label = new QLabel( tr( "Text" ) );
	QLineEdit * lineEdit = new QLineEdit;
	lineEdit->setFixedWidth( 400 );
	lineEdit->setFixedHeight( 50 );
	//lineEdit->setFont(

	lineEditLayout->addWidget( label );
	lineEditLayout->addWidget( lineEdit );
	lineEditLayout->setSpacing( 20 );
	lineEditLayout->addStretch( 200 );

	QTabWidget * window = new QTabWidget();
	QWidget * page1 = new QWidget;
	QWidget * page2 = new QWidget;
	window->addTab( page1, tr( "Page 1" ) );
	window->addTab( page2, tr( "Page 2" ) );
	window->setTabShape( QTabWidget::Triangular );

	QVBoxLayout * vLayout = new QVBoxLayout;
	vLayout->setAlignment( Qt::AlignTop );
	vLayout->addLayout( lineEditLayout );
	vLayout->addWidget( window );

	setLayout( vLayout );

	setMinimumWidth( 500 );
	setMinimumHeight( 400 );

	setGeometry( QRect( 50 , 100, 700, 600 ) );
}

