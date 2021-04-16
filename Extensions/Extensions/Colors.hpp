#pragma once
#include "../pch.hpp"

struct CRColor
{
public:
	uint8_t R;
	uint8_t G;
	uint8_t B;
	uint8_t A;

public:
	struct FColor UnrealColor;

public:
	CRColor();
	~CRColor();

public:
	struct CRColor operator=(const struct FColor& other);
	bool operator==(const struct FColor& other);
	bool operator!=(const struct FColor& other);
};

// Taken directly from Unreal Engine 4 source code.

class FColorList
{
public:
	static const struct FColor White;
	static const struct FColor Red;
	static const struct FColor Green;
	static const struct FColor Blue;
	static const struct FColor Magenta;
	static const struct FColor Cyan;
	static const struct FColor Yellow;
	static const struct FColor Black;
	static const struct FColor Aquamarine;
	static const struct FColor BakerChocolate;
	static const struct FColor BlueViolet;
	static const struct FColor Brass;
	static const struct FColor BrightGold;
	static const struct FColor Brown;
	static const struct FColor Bronze;
	static const struct FColor BronzeII;
	static const struct FColor CadetBlue;
	static const struct FColor CoolCopper;
	static const struct FColor Copper;
	static const struct FColor Coral;
	static const struct FColor CornFlowerBlue;
	static const struct FColor DarkBrown;
	static const struct FColor DarkGreen;
	static const struct FColor DarkGreenCopper;
	static const struct FColor DarkOliveGreen;
	static const struct FColor DarkOrchid;
	static const struct FColor DarkPurple;
	static const struct FColor DarkSlateBlue;
	static const struct FColor DarkSlateGrey;
	static const struct FColor DarkTan;
	static const struct FColor DarkTurquoise;
	static const struct FColor DarkWood;
	static const struct FColor DimGrey;
	static const struct FColor DustyRose;
	static const struct FColor Feldspar;
	static const struct FColor Firebrick;
	static const struct FColor ForestGreen;
	static const struct FColor Gold;
	static const struct FColor Goldenrod;
	static const struct FColor Grey;
	static const struct FColor GreenCopper;
	static const struct FColor GreenYellow;
	static const struct FColor HunterGreen;
	static const struct FColor IndianRed;
	static const struct FColor Khaki;
	static const struct FColor LightBlue;
	static const struct FColor LightGrey;
	static const struct FColor LightSteelBlue;
	static const struct FColor LightWood;
	static const struct FColor LimeGreen;
	static const struct FColor MandarianOrange;
	static const struct FColor Maroon;
	static const struct FColor MediumAquamarine;
	static const struct FColor MediumBlue;
	static const struct FColor MediumForestGreen;
	static const struct FColor MediumGoldenrod;
	static const struct FColor MediumOrchid;
	static const struct FColor MediumSeaGreen;
	static const struct FColor MediumSlateBlue;
	static const struct FColor MediumSpringGreen;
	static const struct FColor MediumTurquoise;
	static const struct FColor MediumVioletRed;
	static const struct FColor MediumWood;
	static const struct FColor MidnightBlue;
	static const struct FColor NavyBlue;
	static const struct FColor NeonBlue;
	static const struct FColor NeonPink;
	static const struct FColor NewMidnightBlue;
	static const struct FColor NewTan;
	static const struct FColor OldGold;
	static const struct FColor Orange;
	static const struct FColor OrangeRed;
	static const struct FColor Orchid;
	static const struct FColor PaleGreen;
	static const struct FColor Pink;
	static const struct FColor Plum;
	static const struct FColor Quartz;
	static const struct FColor RichBlue;
	static const struct FColor Salmon;
	static const struct FColor Scarlet;
	static const struct FColor SeaGreen;
	static const struct FColor SemiSweetChocolate;
	static const struct FColor Sienna;
	static const struct FColor Silver;
	static const struct FColor SkyBlue;
	static const struct FColor SlateBlue;
	static const struct FColor SpicyPink;
	static const struct FColor SpringGreen;
	static const struct FColor SteelBlue;
	static const struct FColor SummerSky;
	static const struct FColor Tan;
	static const struct FColor Thistle;
	static const struct FColor Turquoise;
	static const struct FColor VeryDarkBrown;
	static const struct FColor VeryLightGrey;
	static const struct FColor Violet;
	static const struct FColor VioletRed;
	static const struct FColor Wheat;
	static const struct FColor YellowGreen;
};