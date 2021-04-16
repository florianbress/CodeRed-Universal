#include "Placeholder.hpp"
#include "../Components/Includes.hpp"

PlaceholderModule::PlaceholderModule(const std::string& name, const std::string& description, const uint32_t& states) : Module(name, description, states, ModuleTypes::TYPE_PLACEHOLDER)
{
	SomeBoolSetting = false;

	Console.Write(GetNameFormatted() + "Initialized!");
}

PlaceholderModule::~PlaceholderModule() { }

// This is where you would load your custom settings for this module, whether it be from an external file or just defined here on compilation.
void PlaceholderModule::LoadSettings()
{

}

void PlaceholderModule::SetSomeBoolEnabled(const class BoolSetting& someBoolEnabled)
{
	if (someBoolEnabled.GetType() == SettingTypes::TYPE_BOOL)
	{
		SomeBoolSetting = someBoolEnabled.GetValue();
	}
}

void PlaceholderModule::DoAThing()
{
	if (SomeBoolSetting && IsAllowed())
	{
		Console.Success("Wow! Did a thing!");
	}
}