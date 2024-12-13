// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "UOGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_SPACE_WAR_API UUOGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

protected:
	UPROPERTY(Config)
	float GammaValue;
	int MBTargetFPS;
	float MBPerObjectSize;
	float MBMax;
	float MBAmount;
	int LandscapeQualityLevel;
	float SFX_AmbientValue;
	float SFX_EffectsValue;
	float SFX_MusicValue;
	float SFX_UserInterfaceValue;
	float AMD_FSRSharpness;
	int AMD_FSRQualityMode;
	bool AMD_FSREnabled;
	bool AMD_FSRFrameGeneration;

public:

	UFUNCTION(BlueprintCallable)
	static UUOGameUserSettings* GetCustomGameUserSettings();

	UFUNCTION(BlueprintCallable)
	void SetGammaValue(float NewGammaValue);

	UFUNCTION(BlueprintCallable)
	void SetLandscapeQualityLevel(int NewLandscapeQualityLevel);

	UFUNCTION(BlueprintCallable)
	void SetMBTargetFPS(int NewMBTargetFPS);

	UFUNCTION(BlueprintCallable)
	void SetMBPerObjectSize(float NewNMBPerObjectSize);

	UFUNCTION(BlueprintCallable)
	void SetMBMax(float NewMBMax);

	UFUNCTION(BlueprintCallable)
	void SetMBAmount(float NewMBAmount);

	UFUNCTION(BlueprintCallable)
	void setSFX_AmbientValue(float NewSFX_AbmientValue);

	UFUNCTION(BlueprintCallable)
	void setSFX_EffectsValue(float NewSFX_EffectsValue);

	UFUNCTION(BlueprintCallable)
	void setSFX_MusicValue(float NewSFX_MusicValue);

	UFUNCTION(BlueprintCallable)
	void setSFX_UserInterfaceValue(float NewSFX_UserInterfaceValue);

	UFUNCTION(BlueprintCallable)
	void setAMD_FSRSharpness(float NewAMD_FSRSharpness);

	UFUNCTION(BlueprintCallable)
	void setAMD_FSRQualityMode(int NewAMD_FSRQualityMode);

	UFUNCTION(BlueprintCallable)
	void setAMD_FSREnabled(bool NewAMD_FSREnabled);

	UFUNCTION(BlueprintCallable)
	void setAMD_FSRFrameGeneration(bool NewAMD_FSRFrameGeneration);

	UFUNCTION(BlueprintPure)
	float GetGammaValue() const;

	UFUNCTION(BlueprintPure)
	int GetLandscapeQualityLevel() const;

	UFUNCTION(BlueprintPure)
	int GetMBTargetFPS() const;

	UFUNCTION(BlueprintPure)
	float GetMBPerObjectSize() const;

	UFUNCTION(BlueprintPure)
	float GetMBMax() const;

	UFUNCTION(BlueprintPure)
	float GetMBAmount() const;

	UFUNCTION(BlueprintPure)
	float GetSFX_AmbientValue() const;

	UFUNCTION(BlueprintPure)
	float GetSFX_EffectsValue() const;

	UFUNCTION(BlueprintPure)
	float GetSFX_MusicValue() const;

	UFUNCTION(BlueprintPure)
	float GetSFX_UserInterfaceValue() const;

	UFUNCTION(BlueprintPure)
	float GetAMD_FSRSharpness() const;

	UFUNCTION(BlueprintPure)
	int GetAMD_FSRQualityMode() const;

	UFUNCTION(BlueprintPure)
	bool GetAMD_FSREnabled() const;

	UFUNCTION(BlueprintPure)
	bool GetAMD_FSRFrameGeneration() const;
};
