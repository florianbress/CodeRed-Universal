#include "UnrealMemory.hpp"

namespace FMemory
{
	void* Memmove(void* Dest, const void* Src, size_t Count)
	{
		return memmove(Dest,Src, Count);
	}

	int32_t Memcmp(const void* Buf1, const void* Buf2, size_t Count)
	{
		return memcmp(Buf1, Buf2, Count);
	}

	void* Memset(void* Dest, uint8_t Char, size_t Count)
	{
		return memset(Dest, Char, Count);
	}

	template<typename T> 
	void Memset(T& Src, uint8_t ValueToSet)
	{
		Memset(&Src, ValueToSet, sizeof(T));
	}

	void* Memzero(void* Dest, size_t Count)
	{
		return memset(Dest, 0, Count);
	}

	template< class T > 
	void Memzero(T& Src)
	{
		Memzero(&Src, sizeof(T));
	}

	void* Memcpy(void* Dest, const void* Src, size_t Count)
	{
		return memcpy(Dest, Src, Count);
	}

	template<typename T > 
	void Memcpy(T& Dest, const T& Src)
	{
		Memcpy(&Dest, &Src, sizeof(T));
	}

	void* BigBlockMemcpy(void* Dest, const void* Src, size_t Count)
	{
		return memcpy(Dest, Src, Count);
	}

	void* StreamingMemcpy(void* Dest, const void* Src, size_t Count)
	{
		return memcpy(Dest, Src, Count);
	}

	void* SystemMalloc(size_t Size)
	{
		return malloc(Size);
	}

	void SystemFree(void* Ptr)
	{
		free(Ptr);
	}

	void* Malloc(size_t Count, uint32_t Alignment = 0)
	{
		return SystemMalloc(Count);
	}

	void* Realloc(void* Original, size_t Count, uint32_t Alignment = 0)
	{
		return realloc(Original, Count);
	}

	void Free(void* Original)
	{
		SystemFree(Original);
	}

	void* MallocZeroed(size_t Count, uint32_t Alignment = 0)
	{
		void* Memory = Malloc(Count, Alignment);
		Memzero(Memory, Count);
		return Memory;
	}
}