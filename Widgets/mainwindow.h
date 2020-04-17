#pragma once

#include <QWidget>

namespace Widgets { class CommandLine; }
namespace Widgets { class TextFileViewer; }

class QLabel;
class QTabWidget;
class QMenuBar;
class QMenu;



namespace Widgets
{
	class MainWindow : public QWidget
	{
		Q_OBJECT

	public:
		MainWindow( QWidget * parent = nullptr );
	private:
		Widgets::CommandLine * m_commandLine;
		QLabel * m_label;
		QMenuBar * m_menuBar;
		QMenu * m_settingsMenu;

		//Widgets::TextFileViewer * m_fileViewer;
		QTabWidget * m_tabWidget;

		void CreateWidgets();
		void CreateAndSetLayouts();
		void SetGeometry();
	};
}


