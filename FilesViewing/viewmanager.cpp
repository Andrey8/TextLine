#include "FilesViewing/viewmanager.h"
#include "FilesViewing/clobserver.h"

#include <QMessageBox>



FViewing::ViewManager::ViewManager()
	: m_CLObserver( new CLObserver() )
{}

void FViewing::ViewManager::ViewFile()
{
	QMessageBox::warning( 0,
						  "Message",
						  m_CLObserver->GetText() );
}
