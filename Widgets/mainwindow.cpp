#include "mainwindow.h"
#include "commandline.h"
#include "textfileviewer.h"

#include "FilesViewing/viewmanager.h"
#include "FilesViewing/objects.h"

#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTabWidget>
#include <QFont>
#include <QMenuBar>
#include <QMenu>



Widgets::MainWindow::MainWindow( QWidget * parent )
	: QWidget( parent )
{
	CreateWidgets();
	CreateAndSetLayouts();

	SetGeometry();
	SetConnections();
}

void Widgets::MainWindow::CreateWidgets()
{
	m_label = new QLabel( tr( "  Enter" ) );
	m_label->setFont( QFont( "times" ) );

	m_commandLine = new CommandLine();
	m_commandLine->setFixedWidth( 400 );
	m_commandLine->setFixedHeight( 50 );
	m_commandLine->setFont( QFont( "times", 10, 20 ) );
	m_commandLine->setTextMargins( 7, 5, 5, 5 );

	m_menuBar = new QMenuBar();
	m_settingsMenu = m_menuBar->addMenu( tr( "Settings" ) );
	// add action

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
	commandLineLayout->addStretch( 100 );
	commandLineLayout->addWidget( m_menuBar );
	commandLineLayout->addStretch( 200 );

	QVBoxLayout * vLayout = new QVBoxLayout;
	vLayout->setAlignment( Qt::AlignTop );

	vLayout->addLayout( commandLineLayout );
	vLayout->addWidget( m_tabWidget );

	setLayout( vLayout );
}

void Widgets::MainWindow::SetGeometry()
{
	setMinimumWidth( 600 );
	setMinimumHeight( 400 );
	setGeometry( QRect( 50 , 100, 900, 600 ) );
}

void Widgets::MainWindow::SetConnections()
{
	connect( m_commandLine,
			 SIGNAL( returnPressed() ),
			 &FViewing::Objects::GetViewManager(),
			 SLOT( ViewFile() ) );

}


