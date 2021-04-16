#include "Whitelist.hpp"

WhitelistComponent::WhitelistComponent() : Component("Whitelist", "Manages approved users.")
{
    Fingerprints.emplace_back("IJXPYTU2X6L>U9I"); // ItsBranK
}

WhitelistComponent::~WhitelistComponent() { }

std::string WhitelistComponent::GetWindowsUsername()
{
    TCHAR infoBuffer[1024];
    DWORD charBuffer = 1024;

    GetUserNameW(infoBuffer, &charBuffer);

    std::wstring wideUsername(infoBuffer);
    std::string username(wideUsername.begin(), wideUsername.end());

    return username;
}

std::string WhitelistComponent::GetWindowsComputerName()
{
    TCHAR infoBuffer[1024];
    DWORD charBuffer = 1024;

    GetComputerNameW(infoBuffer, &charBuffer);

    std::wstring wideComputerName(infoBuffer);
    std::string computerName(wideComputerName.begin(), wideComputerName.end());

    return computerName;
}

std::string WhitelistComponent::EncryptString(const std::string& value, std::string key)
{
    std::string rebuiltString;
    std::string rebuiltKey;

    for (char c : key)
    {
        rebuiltKey += (c ^= key.size());
    }

    int keyIndex = 0;

    for (char c : value)
    {
        if (keyIndex != rebuiltKey.size())
        {
            int newAscii = std::sqrt((int)rebuiltKey[keyIndex]);
            rebuiltString += (c ^ newAscii / value.size()) + rebuiltKey.size();
            keyIndex++;
        }
        else
        {
            int newAscii = std::sqrt((int)rebuiltKey.size());
            rebuiltString += (c ^ newAscii / value.size()) + rebuiltKey.size();
            keyIndex = 0;
        }
    }

    return rebuiltString;
}

std::string WhitelistComponent::DecryptString(const std::string& value, std::string key)
{
    std::string rebuiltString;
    std::string rebuiltKey;

    for (char c : key)
    {
        rebuiltKey += (c ^= key.size());
    }

    int keyIndex = 0;

    for (char c : value)
    {
        if (keyIndex != rebuiltKey.size())
        {
            int newAscii = std::sqrt((int)rebuiltKey[keyIndex]);
            rebuiltString += (c ^ newAscii / value.size()) - rebuiltKey.size();
            keyIndex++;
        }
        else
        {
            int newAscii = std::sqrt((int)rebuiltKey.size());
            rebuiltString += (c ^ newAscii / value.size()) - rebuiltKey.size();
            keyIndex = 0;
        }
    }

    return rebuiltString;
}

bool WhitelistComponent::IsAllowed()
{
    for (std::string fingerprint : Fingerprints)
    {
        if (DecryptString(fingerprint, GetWindowsUsername()) == GetWindowsComputerName())
        {
            return true;
        }
    }

    return false;
}

class WhitelistComponent Whitelist;