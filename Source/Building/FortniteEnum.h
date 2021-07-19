// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortniteEnum.generated.h"

/**
 * 
 */

UENUM()
enum class EState
{
	Shield,
	Health
};

UCLASS()
class BUILDING_API UFortniteEnum : public UObject
{
	GENERATED_BODY()
	
};
