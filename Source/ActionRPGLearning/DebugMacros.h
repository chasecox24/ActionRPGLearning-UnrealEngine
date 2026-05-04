#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_DEBUG_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
#define DRAW_DEBUG_SPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, false, -1.f);

#define DRAW_DEBUG_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, true, -1.f, 0, 1.0f);
#define DRAW_DEBUG_LINE_SingleFrame(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, false , -1.f, 0, 1.0f);

#define DRAW_DEBUG_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Green, true);
#define DRAW_DEBUG_POINT_SingleFrame(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Green, false, -1.f);

#define DRAW_DEBUG_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
	{\
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, true, -1.f, 0, 1.0f);\
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Green, true);\
	}
#define DRAW_DEBUG_VECTOR_SingleFrame(StartLocation, EndLocation) if (GetWorld()) \
	{\
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, false , -1.f, 0, 1.0f);\
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Green, false, -1.f);\
	}