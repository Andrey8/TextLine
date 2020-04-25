#include "FilesViewing/objects.h"
#include "FilesViewing/viewmanager.h"



FViewing::ViewManager & FViewing::Objects::GetViewManager()
{
	static ViewManager vm;

	return vm;
}

