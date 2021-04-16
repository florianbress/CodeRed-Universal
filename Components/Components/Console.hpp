#pragma once
#include "../Component.hpp"
#include "../Extensions/Extensions/Filesystem.hpp"

enum class TextColors : uint16_t
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Aqua = 3,
	Red = 4,
	Purple = 5,
	Yellow = 6,
	White = 7,
	Grey = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightAqua = 11,
	LightRed = 12,
	LightPurple = 13,
	LightYellow = 14,
	BrightWhite = 15
};

class ConsoleComponent : public Component
{
private:
	Filesystem::File LogFile;
	HANDLE OutputHandle;
	FILE* OutputFile;
	bool WriteToLog;
	bool WriteTimestamp;

public:
	ConsoleComponent();
	ConsoleComponent(const std::string& directory, const std::string& fileName);
	~ConsoleComponent();

public:
	void Write(std::string text);
	void Write(std::string text, const TextColors textColor);
	void Warning(std::string text);
	void Error(std::string text);
	void Success(std::string text);
	void Notify(std::string text);

public:
	void Initialize(const std::string& directory, const std::string& fileName);
	void ToggleLogging(const bool& bWriteToLog);
	void ToggleTimestamp(const bool& bWriteTimestamp);
	void SetTextColor(const TextColors textColor);
	std::string GetTimestamp(const bool& bWithSpace);
};

extern class ConsoleComponent Console;