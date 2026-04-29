DEBUG CODE SAMPLES

DEBUG LINE
DrawDebugLine(); // line function call
FVector Forward = GetActorForwardVector(); //gets forward vector of actor

#define DRAW_DEBUG_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue, true, -1.f, 0, 1.0f);
DRAW_DEBUG_LINE(Location, Location + Forward * 100.f);

DEBUG SPHERE
# include "DrawDebugHelpers.h" : debug helper functions
DrawDebugSphere()
UWorld* World = GetWorld(); //will get the world the actor is in// return null if actor isnt in world
FVector Location = GetActorLocation(); //get the location of the root component

#define : this creates a macro
#define DRAW_DEBUG_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
If we #define the macro inside the GameName.h, then we can use it anywhere.
#include "GameName/GameName.h"
We have to put the GameNameFolder before the header file so the compiler knows where it is.
