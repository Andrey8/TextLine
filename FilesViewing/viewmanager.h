#pragma once

namespace FViewing { class CLObserver; }

#include <QObject>



namespace FViewing
{
	class ViewManager : public QObject
	{
		Q_OBJECT

	public:
		ViewManager();

		CLObserver * GetCLObserver() const { return m_CLObserver; }

	public slots:
		void ViewFile();
	private:
		CLObserver * m_CLObserver;
	};
}
