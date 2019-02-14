#include "Log.h"

Log* Log::m_instance = nullptr;

Log& Log::instance()
{
	if (!m_instance) {
		m_instance = new Log();
		std::ofstream logfile;
		logfile.open("log_data.txt", std::ios::trunc); //reset logfile
		logfile.close();
	}

	return *m_instance;
}

Log::Log() {

}

Log::~Log()
{
	m_logfile.close();
}

void Log::add_message(const std::string& msg) {
	m_logfile.open("log_data.txt", std::ios::ate | std::ios::app);
	m_logfile << msg;
	m_logfile.close();
}