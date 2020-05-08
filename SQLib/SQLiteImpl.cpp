#include "SQLiteImpl.h"
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <sstream>

namespace sql {

	static int Callback(void* ptr, int ac, char** av, char** column_name) 
	{
#pragma message ("You have to complete this code!")
		return 0;
	}

	SQLiteImpl::SQLiteImpl(const std::string& file)
	{
#pragma message ("You have to complete this code!")
	}

	SQLiteImpl::~SQLiteImpl()
	{
#pragma message ("You have to complete this code!")
	}

	bool SQLiteImpl::ExecuteString(const std::string& cmd)
	{
#pragma message ("You have to complete this code!")
		return true;
	}

	sql::value_t SQLiteImpl::GetValue(const std::string& str) const
	{
#pragma message ("You have to complete this code!")
		return str;
	}

} // End namespace sql.
