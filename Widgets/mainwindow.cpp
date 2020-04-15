#include "mainwindow.h"
#include "commandline.h"
#include "textfileviewer.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTabWidget>
#include <QFont>



Widgets::MainWindow::MainWindow( QWidget * parent )
	: QWidget( parent )
{
	CreateWidgets();
	CreateAndSetLayouts();

	SetGeometry();
}

void Widgets::MainWindow::CreateWidgets()
{
	m_label = new QLabel( tr( "Enter path" ) );
	m_label->setFont( QFont( "times" ) );

	m_commandLine = new CommandLine();
	m_commandLine->setFixedWidth( 400 );
	m_commandLine->setFixedHeight( 50 );
	m_commandLine->setFont( QFont( "times", 10, 20 ) );
	m_commandLine->setTextMargins( 7, 5, 5, 5 );

	m_tabWidget = new QTabWidget();
	QWidget * page1 = new TextFileViewer();
	//QWidget * page2 = new QWidget;
	m_tabWidget->addTab( page1, tr( "Page 1" ) );
	//window->addTab( page2, tr( "Page 2" ) );
	m_tabWidget->setTabShape( QTabWidget::Triangular );

}

void Widgets::MainWindow::CreateAndSetLayouts()
{
	QHBoxLayout * commandLineLayout = new QHBoxLayout;
	commandLineLayout->setAlignment( Qt::AlignLeft );

	commandLineLayout->addWidget( m_label );
	commandLineLayout->addWidget( m_commandLine );
	commandLineLayout->setSpacing( 20 );
	commandLineLayout->addStretch( 200 );

	QVBoxLayout * vLayout = new QVBoxLayout;
	vLayout->setAlignment( Qt::AlignTop );
	vLayout->addLayout( commandLineLayout );
	vLayout->addWidget( m_tabWidget );

	setLayout( vLayout );
}

void Widgets::MainWindow::SetGeometry()
{
	setMinimumWidth( 500 );
	setMinimumHeight( 400 );
	setGeometry( QRect( 50 , 100, 700, 600 ) );
}




