#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <filesystem>

// Custom filesystem classes I wrote, to make writing to files easier.

namespace Filesystem
{
	class File
	{
	private:
		std::ofstream Stream;

	public:
		File();

		File(const std::string& directory, const std::string& name);

		~File(); // Closes the stream if for whatever reason we forget to before this class gets deconstructed (stream closes anyway when it's deconstructed but still).

	public:
		bool IsOpen(); // Checks to see if the stream is already open or not.
		void Create(const std::string& directory, const std::string& name); // Creates a new file.
		void Close(); // Closes the stream/file.
		void Flush(); // Flushes the stream.
		void Write(std::string_view string); // Writes a string to the stream.
		void Write(std::ostringstream& stream); // Writes a ostringstream into the file stream.
		void WriteLine(std::string_view string); // Writes a string and then a new line after it.
		void NewLine(); // Writes a new line.
		void Pad(const char& fill, int32_t size); // Writess a custom padding.
		void Hex(uintptr_t address, uint32_t size); // Writes an address at hexadecimal base with a setfill.
		void Decimal(uintptr_t address, uint32_t size); // Writes an address at decimal base with a setfill.
		void Precision(uint32_t precision, float flt); // Sets the precision of the stream for a floating point value.
	};

	// Utils for std::filesystem

	std::string GetCurrentPath();
}