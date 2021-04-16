#pragma once
#include "../Component.hpp"

// Manages global objects and names, along with initializing a new thread for everything to run on.
class CoreComponent : public Component
{
private:
	HANDLE MainThread;

public:
	CoreComponent();
	~CoreComponent();

public:
	void InitializeThread();
	static void InitializeGlobals(HMODULE hModule);
	static bool AreGlobalsValid();

private:
	static bool AreGObjectsValid();
	static bool AreGNamesValid();
};

extern class CoreComponent Core;