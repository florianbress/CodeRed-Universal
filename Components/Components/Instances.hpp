#pragma once
#include "../Component.hpp"

// This is also largely dependent on your game, automatically stores active class instances here to be retrieved at any time.

class InstancesComponent : public Component
{
public:
	InstancesComponent();
	~InstancesComponent();

public:
	// All GetInstanceOf related functions loop through the entire GObject TArray, which can be resource heavy if you're using them everywhere.
	// So rely on hooking functions and storing classes here instead, only use GetInstanceOf functions them when needed.

	template<typename U> // Get the default constructor of a class type.
	U* GetDefaultInstanceOf()
	{
		UClass* staticClass = reinterpret_cast<UClass*>(U::StaticClass());

		for (int32_t i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				if (uObject->GetFullName().find("Default") != std::string::npos)
				{
					return reinterpret_cast<U*>(uObject);
				}
			}
		}

		return nullptr;
	}

	template<typename U> // Get the most current/active instance of a class. Example: UEngine* engine = GetInstanceOf<UEngine>();
	U* GetInstanceOf()
	{
		UClass* staticClass = reinterpret_cast<UClass*>(U::StaticClass());

		for (int32_t i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				if (uObject->GetFullName().find("Default") == std::string::npos)
				{
					return reinterpret_cast<U*>(uObject);
				}
			}
		}

		return nullptr;
	}

	template<typename U> // Get all active instances of a class type.
	std::vector<U*> GetAllInstancesOf()
	{
		std::vector<U*> objectInstances;
		UClass* staticClass = reinterpret_cast<UClass*>(U::StaticClass());

		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA(staticClass))
			{
				if (uObject->GetFullName().find("Default") == std::string::npos)
				{
					objectInstances.push_back(reinterpret_cast<U*>(uObject));
				}
			}
		}

		return objectInstances;
	}

	template<typename U> // Get all default instances of a class type.
	std::vector<U*> GetAllDefaultInstancesOf()
	{
		std::vector<U*> objectInstances;
		UClass* staticClass = reinterpret_cast<UClass*>(U::StaticClass());

		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA(staticClass))
			{
				if (uObject->GetFullName().find("Default") != std::string::npos)
				{
					objectInstances.push_back(reinterpret_cast<U*>(uObject));
				}
			}
		}

		return objectInstances;
	}

	template<typename U> // Get an object instance by it's name and class type. Example: UTexture2D* texture =  StaticLoadObject<UTexture2D>("WhiteSquare");
	U* StaticLoadObject(const std::string& objectName)
	{
		UClass* staticClass = reinterpret_cast<UClass*>(U::StaticClass());

		for (int32_t i = UObject::GObjObjects()->Num(); i > 0; i--)
		{
			UObject* uObject = UObject::GObjObjects()->At(i);

			if (uObject && uObject->IsA(staticClass))
			{
				std::string objectFullName = uObject->GetFullName();

				if (objectFullName == objectName || objectFullName.find(objectName) != std::string::npos)
				{
					return reinterpret_cast<U*>(uObject);
				}
			}
		}

		return nullptr;
	}

private: 
	class UEngine* I_UEngine;
	class UDateTime* I_UDateTime;
	class UCanvas* I_UCanvas;
	class AHUD* I_AHUD;
	class UGameViewportClient* I_UGameViewportClient;
	class APlayerController* I_APlayerController;

public: // Use these functions to access these specific class instances, they will be set automatically; always remember to null check!
	class UEngine* IUEngine();
	class UAudioDevice* IUAudioDevice();
	class AWorldInfo* IAWorldInfo();
	class UDateTime* IUDateTime();
	class UCanvas* IUCanvas();
	class AHUD* IAHUD();
	class UGameViewportClient* IUGameViewportClient();
	class ULocalPlayer* IULocalPlayer();
	class APlayerController* IAPlayerController();


public: // These should only be used by function hooks, do not manually call these.
	void SetEngine(class UEngine* engine);
	void SetDatTime(class UDateTime* dateTime);
	void SetCanvas(class UCanvas* canvas);
	void SetHUD(class AHUD* hud);
	void SetGameViewportClient(class UGameViewportClient* viewportClient);
	void SetPlayerController(class APlayerController* playerController);
	void Initialize(); // Initialize classes that can't be grabbed from function hooks.
};

extern class InstancesComponent Instances;
