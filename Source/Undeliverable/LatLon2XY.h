// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LatLon2XY.generated.h"

/**
 *
 */
UCLASS()
class UNDELIVERABLE_API ULatLon2XY : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Category = "Helpers", meta = (WorldContext = "WorldContextObject", DisplayName = "LatLon2XY", Keywords = "Lat Lon 2 X Y"))
		static void GetLatLon2XY(const UObject* WorldContextObject, const double refLat, const double refLon, const double lat, const double lon, FVector2D& out);

};
