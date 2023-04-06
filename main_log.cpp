// Bad Code
#include <iostream>

class Log
{
public:
	enum Level : char
	{
		LevelError = 0, LevelWarning = 1, LevelInfo = 2
	};
private:
	int m_LogLevel = LevelInfo;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[Error]: " << message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[Warning]: " << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[Info]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	// log.SetLevel(Log::LevelError);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello");
	std::cin.get();
}