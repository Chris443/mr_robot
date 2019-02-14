#ifndef H_ROB_LOG 
#define H_ROB_LOG

#include <string>
#include <fstream>
#include <iostream>

class Log
{
public:
	static Log& instance();
	~Log();
	void add_message(const std::string& msg);
private:
	Log();
	static Log* m_instance;
	std::ofstream m_logfile;

};

#endif

