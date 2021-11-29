// Fill out your copyright notice in the Description page of Project Settings.


#include "LatLon2XY.h"

void ULatLon2XY::GetLatLon2XY(const UObject* WorldContextObject, const double refLat, const double refLon, const double lat, const double lon, FVector2D& out)
{
	// Convert lat lon to radians
	double rad = PI / 180;
	double rRefLat = refLat * rad;
	double rRefLon = refLon * rad;
	double rLat = lat * rad;
	double rLon = lon * rad;

	// Get the deltas of rLat rLon
	double dLon = rLon - rRefLon;
	double dlat = rLat - rRefLat;

	// Haversine formula
	int R = 6371; // Radius of earth in kilometers
	double a = sin(dlat / 2) * sin(dlat / 2) + cos(rRefLat) * cos(rLat) * sin(dLon / 2) * sin(dLon / 2);
	double c = 2 * atan2(sqrt(a), sqrt(1 - a)); // 
	double d = R * c;


}
