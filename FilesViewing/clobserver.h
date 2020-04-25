#pragma once

#include <QObject>



namespace FViewing
{
	class CLObserver : public QObject
	{
		Q_OBJECT

	public:
		QString const & GetText() const { return m_text; }
	public slots:
		void SetText( QString const & text ) { m_text = text; }
	private:
		QString m_text;
	};
}
