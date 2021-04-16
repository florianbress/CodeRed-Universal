#include "Filesystem.hpp"

namespace Filesystem
{
	File::File() { }

	File::File(const std::string& directory, const std::string& name)
	{
		Create(directory, name);
	}

	File::~File()
	{
		Close();
	}

	bool File::IsOpen()
	{
		return Stream.is_open();
	}

	void File::Create(const std::string& directory, const std::string& name)
	{
		Stream.open(directory + "\\" + name);
	}

	void File::Close()
	{
		if (IsOpen())
		{
			Stream.close();
		}
	}

	void File::Flush()
	{
		Stream << std::flush;
	}

	void File::Write(std::string_view string)
	{
		Stream << string;
	}

	void File::WriteLine(std::string_view string)
	{
		Stream << string << "\n";
	}

	void File::Write(std::ostringstream& stream)
	{
		Stream << stream.str();
		stream.str(std::string());
	}

	void File::NewLine()
	{
		Stream << "\n";
	}

	void File::Pad(const char& fill, int32_t size)
	{
		Stream << std::setfill(fill) << std::setw(size) << std::right;
	}

	void File::Hex(uintptr_t address, uint32_t size)
	{
		Stream << "0x" << std::hex << std::uppercase << std::setfill('0') << std::setw(size) << std::right << address << std::uppercase;
	}

	void File::Decimal(uintptr_t address, uint32_t size)
	{
		Stream << std::dec << std::setfill('0') << std::setw(size) << std::right << address;
	}

	void File::Precision(uint32_t precision, float flt)
	{
		Stream << std::setprecision(precision) << flt;
	}

	std::string GetCurrentPath()
	{
		return std::filesystem::current_path().u8string();
	}
}