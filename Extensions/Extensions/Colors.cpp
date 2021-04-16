#include "Colors.hpp"

CRColor::CRColor() : R(0), G(0), B(0), A(0)
{
	UnrealColor = { B, G, R, A };
}

CRColor::~CRColor() { }

struct CRColor CRColor::operator=(const struct FColor& other)
{
	R = other.R;
	G = other.G;
	B = other.B;
	A = other.A;

	UnrealColor = { B, G, R, A };

	return *this;
}

bool CRColor::operator==(const struct FColor& other)
{
	if (R != other.R
		|| G != other.G
		|| B != other.B
		|| A != other.A)
	{
		return false;
	}

	return true;
}

bool CRColor::operator!=(const struct FColor& other)
{
	if (R != other.R
		|| G != other.G
		|| B != other.B
		|| A != other.A)
	{
		return true;
	}

	return false;
}

const struct FColor FColorList::White				{ 255, 255, 255, 255 };
const struct FColor FColorList::Red					{ 255,   0,   0, 255 };
const struct FColor FColorList::Green				{   0, 255,   0, 255 };
const struct FColor FColorList::Blue				{   0,   0, 255, 255 };
const struct FColor FColorList::Magenta				{ 255,   0, 255, 255 };
const struct FColor FColorList::Cyan				{   0, 255, 255, 255 };
const struct FColor FColorList::Yellow				{ 255, 255,   0, 255 };
const struct FColor FColorList::Black				{   0,   0,   0, 255 };
const struct FColor FColorList::Aquamarine			{ 112, 219, 147, 255 };
const struct FColor FColorList::BakerChocolate		{  92,  51,  23, 255 };
const struct FColor FColorList::BlueViolet			{ 159,  95, 159, 255 };
const struct FColor FColorList::Brass				{ 181, 166,  66, 255 };
const struct FColor FColorList::BrightGold			{ 217, 217,  25, 255 };
const struct FColor FColorList::Brown				{ 166,  42,  42, 255 };
const struct FColor FColorList::Bronze				{ 140, 120,  83, 255 };
const struct FColor FColorList::BronzeII			{ 166, 125,  61, 255 };
const struct FColor FColorList::CadetBlue			{  95, 159, 159, 255 };
const struct FColor FColorList::CoolCopper			{ 217, 135,  25, 255 };
const struct FColor FColorList::Copper				{ 184, 115,  51, 255 };
const struct FColor FColorList::Coral				{ 255, 127,   0, 255 };
const struct FColor FColorList::CornFlowerBlue		{  66,  66, 111, 255 };
const struct FColor FColorList::DarkBrown			{  92,  64,  51, 255 };
const struct FColor FColorList::DarkGreen			{  47,  79,  47, 255 };
const struct FColor FColorList::DarkGreenCopper		{  74, 118, 110, 255 };
const struct FColor FColorList::DarkOliveGreen		{  79,  79,  47, 255 };
const struct FColor FColorList::DarkOrchid			{ 153,  50, 205, 255 };
const struct FColor FColorList::DarkPurple			{ 135,  31, 120, 255 };
const struct FColor FColorList::DarkSlateBlue		{ 107,  35, 142, 255 };
const struct FColor FColorList::DarkSlateGrey		{  47,  79,  79, 255 };
const struct FColor FColorList::DarkTan				{ 151, 105,  79, 255 };
const struct FColor FColorList::DarkTurquoise		{ 112, 147, 219, 255 };
const struct FColor FColorList::DarkWood			{ 133,  94,  66, 255 };
const struct FColor FColorList::DimGrey				{  84,  84,  84, 255 };
const struct FColor FColorList::DustyRose			{ 133,  99,  99, 255 };
const struct FColor FColorList::Feldspar			{ 209, 146, 117, 255 };
const struct FColor FColorList::Firebrick			{ 142,  35,  35, 255 };
const struct FColor FColorList::ForestGreen			{  35, 142,  35, 255 };
const struct FColor FColorList::Gold				{ 205, 127,  50, 255 };
const struct FColor FColorList::Goldenrod			{ 219, 219, 112, 255 };
const struct FColor FColorList::Grey				{ 192, 192, 192, 255 };
const struct FColor FColorList::GreenCopper			{  82, 127, 118, 255 };
const struct FColor FColorList::GreenYellow			{ 147, 219, 112, 255 };
const struct FColor FColorList::HunterGreen			{  33,  94,  33, 255 };
const struct FColor FColorList::IndianRed			{  78,  47,  47, 255 };
const struct FColor FColorList::Khaki				{ 159, 159,  95, 255 };
const struct FColor FColorList::LightBlue			{ 192, 217, 217, 255 };
const struct FColor FColorList::LightGrey			{ 168, 168, 168, 255 };
const struct FColor FColorList::LightSteelBlue		{ 143, 143, 189, 255 };
const struct FColor FColorList::LightWood			{ 233, 194, 166, 255 };
const struct FColor FColorList::LimeGreen			{  50, 205,  50, 255 };
const struct FColor FColorList::MandarianOrange		{ 228, 120,  51, 255 };
const struct FColor FColorList::Maroon				{ 142,  35, 107, 255 };
const struct FColor FColorList::MediumAquamarine	{  50, 205, 153, 255 };
const struct FColor FColorList::MediumBlue			{  50,  50, 205, 255 };
const struct FColor FColorList::MediumForestGreen	{ 107, 142,  35, 255 };
const struct FColor FColorList::MediumGoldenrod		{ 234, 234, 174, 255 };
const struct FColor FColorList::MediumOrchid		{ 147, 112, 219, 255 };
const struct FColor FColorList::MediumSeaGreen		{  66, 111,  66, 255 };
const struct FColor FColorList::MediumSlateBlue		{ 127,   0, 255, 255 };
const struct FColor FColorList::MediumSpringGreen	{ 127, 255,   0, 255 };
const struct FColor FColorList::MediumTurquoise		{ 112, 219, 219, 255 };
const struct FColor FColorList::MediumVioletRed		{ 219, 112, 147, 255 };
const struct FColor FColorList::MediumWood			{ 166, 128, 100, 255 };
const struct FColor FColorList::MidnightBlue		{  47,  47,  79, 255 };
const struct FColor FColorList::NavyBlue			{  35,  35, 142, 255 };
const struct FColor FColorList::NeonBlue			{  77,  77, 255, 255 };
const struct FColor FColorList::NeonPink			{ 255, 110, 199, 255 };
const struct FColor FColorList::NewMidnightBlue		{   0,   0, 156, 255 };
const struct FColor FColorList::NewTan				{ 235, 199, 158, 255 };
const struct FColor FColorList::OldGold				{ 207, 181,  59, 255 };
const struct FColor FColorList::Orange				{ 255, 127,   0, 255 };
const struct FColor FColorList::OrangeRed			{ 255,  36,   0, 255 };
const struct FColor FColorList::Orchid				{ 219, 112, 219, 255 };
const struct FColor FColorList::PaleGreen			{ 143, 188, 143, 255 };
const struct FColor FColorList::Pink				{ 188, 143, 143, 255 };
const struct FColor FColorList::Plum				{ 234, 173, 234, 255 };
const struct FColor FColorList::Quartz				{ 217, 217, 243, 255 };
const struct FColor FColorList::RichBlue			{  89,  89, 171, 255 };
const struct FColor FColorList::Salmon				{ 111,  66,  66, 255 };
const struct FColor FColorList::Scarlet				{ 140,  23,  23, 255 };
const struct FColor FColorList::SeaGreen			{  35, 142, 104, 255 };
const struct FColor FColorList::SemiSweetChocolate	{ 107,  66,  38, 255 };
const struct FColor FColorList::Sienna				{ 142, 107,  35, 255 };
const struct FColor FColorList::Silver				{ 230, 232, 250, 255 };
const struct FColor FColorList::SkyBlue				{  50, 153, 204, 255 };
const struct FColor FColorList::SlateBlue			{   0, 127, 255, 255 };
const struct FColor FColorList::SpicyPink			{ 255,  28, 174, 255 };
const struct FColor FColorList::SpringGreen			{   0, 255, 127, 255 };
const struct FColor FColorList::SteelBlue			{  35, 107, 142, 255 };
const struct FColor FColorList::SummerSky			{  56, 176, 222, 255 };
const struct FColor FColorList::Tan					{ 219, 147, 112, 255 };
const struct FColor FColorList::Thistle				{ 216, 191, 216, 255 };
const struct FColor FColorList::Turquoise			{ 173, 234, 234, 255 };
const struct FColor FColorList::VeryDarkBrown		{  92,  64,  51, 255 };
const struct FColor FColorList::VeryLightGrey		{ 205, 205, 205, 255 };
const struct FColor FColorList::Violet				{  79,  47,  79, 255 };
const struct FColor FColorList::VioletRed			{ 204,  50, 153, 255 };
const struct FColor FColorList::Wheat				{ 216, 216, 191, 255 };
const struct FColor FColorList::YellowGreen			{ 153, 204,  50, 255 };