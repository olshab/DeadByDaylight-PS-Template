#include "MoriComponent.h"

void UMoriComponent::OnMoriUpdateStart()
{

}

void UMoriComponent::OnMoriFinished()
{

}

void UMoriComponent::OnMoriChargeCompleted()
{

}

UMoriComponent::UMoriComponent()
{
	this->_moriInteractionClasses = TArray<TSubclassOf<UInteractionDefinition>>();
}
