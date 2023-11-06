#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RingListener.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class URingListener : public UInterface
{
	GENERATED_BODY()
};

class AGP_API IRingListener
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnRingSoundFinished();
};
