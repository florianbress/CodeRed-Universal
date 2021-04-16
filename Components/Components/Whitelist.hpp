#pragma once
#include "../pch.h"
#include "../Component.hpp"

class WhitelistComponent : public Component
{
private:
	std::vector<std::string> Fingerprints;

public:
	WhitelistComponent();
	~WhitelistComponent();

public:
	std::string GetWindowsUsername();
	std::string GetWindowsComputerName();
	std::string EncryptString(const std::string& value, std::string key);
	std::string DecryptString(const std::string& value, std::string key);
	bool IsAllowed();
};

extern class WhitelistComponent Whitelist;