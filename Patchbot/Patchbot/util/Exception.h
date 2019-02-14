#ifndef H_ROBOT_EXCEPTION
#define H_ROBOT_EXCEPTION

#include <exception>
#include <string>
#include <iostream>

#include "../util/Log.h"

namespace rob {
	enum ERROR_TYPE {
		WRONG_MAP_WIDTH,
		WRONG_MAP_HEIGHT,
		UNSUPPORTED_TYPE,
		HEADER_WRONG_FORMAT,
		NO_GOAL_TILE,
		WRONG_AMOUNT_OF_START_TILES,
		WRONG_TGA_HEADER,
		TGA_FILE_LOADING_ERROR,
		BAD_ALLOC
	};

	class Exception : std::exception
	{
	public:
		Exception(ERROR_TYPE error_type);
		~Exception();
	private:
		std::string info;
		ERROR_TYPE error_type;
		void checkFatalError(ERROR_TYPE error_type);
	};

}
#endif

