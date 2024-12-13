// Fill out your copyright notice in the Description page of Project Settings.


#include "UOGameUserSettings.h"

UUOGameUserSettings::UUOGameUserSettings(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	GammaValue = 2.2f;
	MBTargetFPS = 60;
	MBPerObjectSize = 0.0f;
	MBMax = 5.0f;
	MBAmount = 0.5f;
	LandscapeQualityLevel = 3;
	SFX_AmbientValue = 0.9f;
	SFX_EffectsValue = 0.9f;
	SFX_MusicValue = 0.9f;
	SFX_UserInterfaceValue = 0.9f;
	AMD_FSRSharpness = 0.5f;
	AMD_FSRQualityMode = 0;
	AMD_FSREnabled = true;
	AMD_FSRFrameGeneration = true;
}

UUOGameUserSettings* UUOGameUserSettings::GetCustomGameUserSettings()
{
	return Cast<UUOGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void UUOGameUserSettings::SetGammaValue(float NewGammaValue)
{
	GammaValue = NewGammaValue;
}

void UUOGameUserSettings::SetLandscapeQualityLevel(int NewLandscapeQualityLevel)
{
	LandscapeQualityLevel = NewLandscapeQualityLevel;
}

void UUOGameUserSettings::SetMBTargetFPS(int NewMBTargetFPS)
{
	MBTargetFPS = NewMBTargetFPS;
}

void UUOGameUserSettings::SetMBPerObjectSize(float NewNMBPerObjectSize)
{
	MBPerObjectSize = NewNMBPerObjectSize;
}

void UUOGameUserSettings::SetMBMax(float NewMBMax)
{
	MBMax = NewMBMax;
}

void UUOGameUserSettings::SetMBAmount(float NewMBAmount)
{
	MBAmount = NewMBAmount;
}

void UUOGameUserSettings::setSFX_AmbientValue(float NewSFX_AbmientValue)
{
	SFX_AmbientValue = NewSFX_AbmientValue;
}

void UUOGameUserSettings::setSFX_EffectsValue(float NewSFX_EffectsValue)
{
	SFX_EffectsValue = NewSFX_EffectsValue;
}

void UUOGameUserSettings::setSFX_MusicValue(float NewSFX_MusicValue)
{
	SFX_MusicValue = NewSFX_MusicValue;
}

void UUOGameUserSettings::setSFX_UserInterfaceValue(float NewSFX_UserInterfaceValue)
{
	SFX_UserInterfaceValue = NewSFX_UserInterfaceValue;
}

void UUOGameUserSettings::setAMD_FSRSharpness(float NewAMD_FSRSharpness)
{
	AMD_FSRSharpness = NewAMD_FSRSharpness;
}

void UUOGameUserSettings::setAMD_FSRQualityMode(int NewAMD_FSRQualityMode)
{
	AMD_FSRQualityMode = NewAMD_FSRQualityMode;
}

void UUOGameUserSettings::setAMD_FSREnabled(bool NewAMD_FSREnabled)
{
	AMD_FSREnabled = NewAMD_FSREnabled;
}

void UUOGameUserSettings::setAMD_FSRFrameGeneration(bool NewAMD_FSRFrameGeneration)
{
	AMD_FSRFrameGeneration = NewAMD_FSRFrameGeneration;
}

float UUOGameUserSettings::GetGammaValue() const
{
	return GammaValue;
}

int UUOGameUserSettings::GetLandscapeQualityLevel() const
{
	return LandscapeQualityLevel;
}

int UUOGameUserSettings::GetMBTargetFPS() const
{
	return MBTargetFPS;
}

float UUOGameUserSettings::GetMBPerObjectSize() const
{
	return MBPerObjectSize;
}

float UUOGameUserSettings::GetMBMax() const
{
	return MBMax;
}

float UUOGameUserSettings::GetMBAmount() const
{
	return MBAmount;
}

float UUOGameUserSettings::GetSFX_AmbientValue() const
{
	return SFX_AmbientValue;
}

float UUOGameUserSettings::GetSFX_EffectsValue() const
{
	return SFX_EffectsValue;
}

float UUOGameUserSettings::GetSFX_MusicValue() const
{
	return SFX_MusicValue;
}

float UUOGameUserSettings::GetSFX_UserInterfaceValue() const
{
	return SFX_UserInterfaceValue;
}

float UUOGameUserSettings::GetAMD_FSRSharpness() const
{
	return AMD_FSRSharpness;
}

int UUOGameUserSettings::GetAMD_FSRQualityMode() const
{
	return AMD_FSRQualityMode;
}

bool UUOGameUserSettings::GetAMD_FSREnabled() const
{
	return AMD_FSREnabled;
}

bool UUOGameUserSettings::GetAMD_FSRFrameGeneration() const
{
	return AMD_FSRFrameGeneration;
}
