#pragma once

#include <QString>



namespace Base
{
	enum class CommandName
	{
		Open,
		Write
	};

	class CLArgument
	{
	public:
		QString GetText() const;
	protected:
		QString const m_text;
	};

	class FilePath : public CLArgument
	{
	public:
		FilePath( QString const & path );
	private:

	};

	class FileContent : public CLArgument
	{
	public:
		FileContent( QString const & text );
	private:

	};

	struct CLRequest
	{
		CommandName m_command;
		CLArgument * m_argument;
	};



	class CLRequestResult
	{
	public:
		CLRequestResult( CLRequest * r )
			: m_request( r )
		{}

		bool IsGood() const { return m_request != nullptr; }

		CLRequest * GetRequest() const { return m_request; }
	private:
		CLRequest * m_request;
	};
}
