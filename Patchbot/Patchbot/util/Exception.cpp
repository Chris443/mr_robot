#include "Exception.h"

namespace rob {

	Exception::Exception(ERROR_TYPE error_type)
	{
		std::string msg;
		switch (error_type) {
		case WRONG_MAP_WIDTH: 
			msg = "ERROR::MAP_LOADING::WRONG_WIDTH\n"; break;
		case WRONG_MAP_HEIGHT:
			msg = "ERROR::MAP_LOADING::WRONG_HEIGHT\n"; break;
		case UNSUPPORTED_TYPE:
			msg = "ERROR::MAP_LOADING::UNSUPORTED_TYPE\n"; break;
		case HEADER_WRONG_FORMAT:
			msg = "ERROR::MAP_LOADING::WRONG_HEADER_FORMAT\n"; break;
		case NO_GOAL_TILE:
			msg = "ERROR::MAP_LOADING::NO_GOAL_TILE\n"; break;
		case WRONG_AMOUNT_OF_START_TILES:
			msg = "ERROR::MAP_LOADING::WRONG_AMOUNT_OF_START_TILES\n"; break;
		case WRONG_TGA_HEADER:
			msg = "ERROR::TGA_LOADER::WRONG_HEADER"; break;
		case TGA_FILE_LOADING_ERROR:
			msg = "ERROR::TGA_LOADER::FILE_LOADING"; break;
		case BAD_ALLOC:
			msg = "ERROR::BAD_ALLOC"; break;
		default: msg = "ERROR::UNKNOWN"; break;
		}

		Log::instance().add_message(msg);
		checkFatalError(error_type);
	}


	Exception::~Exception()
	{
	}

	void Exception::checkFatalError(ERROR_TYPE error_type) {
		switch (error_type) {
		case WRONG_MAP_WIDTH:
		case WRONG_MAP_HEIGHT:
		case UNSUPPORTED_TYPE:
		case HEADER_WRONG_FORMAT:
		case NO_GOAL_TILE:
		case WRONG_AMOUNT_OF_START_TILES:
			Log::instance().add_message("Fatal Error - Map Loading - Calling Abort()");
			abort();
		default:
			break;
		}
	}
}
