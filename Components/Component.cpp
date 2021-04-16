#include "Component.hpp"

Component::Component(const std::string& name, const std::string& description)
{
	Name = name;
	FormattedName = std::string("[") + Name + std::string(" Component] ");
	Description = description;
}

Component::~Component() { }

std::string Component::GetName() const
{
	return Name;
}

std::string Component::GetNameFormatted() const
{
	return FormattedName;
}

std::string Component::GetDescription() const
{
	return Description;
}