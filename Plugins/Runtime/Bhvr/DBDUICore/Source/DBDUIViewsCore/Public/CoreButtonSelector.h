#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreButtonSelector.generated.h"

class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonSelector : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnselectedDelegate, UCoreSelectableButtonWidget*, unselectedButton);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedDelegate, UCoreSelectableButtonWidget*, selectedButton);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedAgainDelegate, UCoreSelectableButtonWidget*, selectedButton);

public:
	UPROPERTY(BlueprintAssignable)
	FOnSelectedDelegate OnSelectedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnSelectedAgainDelegate OnSelectedAgainDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnUnselectedDelegate OnUnselectedDelegate;

protected:
	UPROPERTY(Transient, Export)
	TArray<UCoreSelectableButtonWidget*> _buttons;

public:
	UFUNCTION(BlueprintCallable)
	void UnselectCurrent();

	UFUNCTION(BlueprintCallable)
	void SetAllEnabled(bool enabled);

	UFUNCTION(BlueprintCallable)
	bool SelectPrevious();

	UFUNCTION(BlueprintCallable)
	bool SelectNext();

	UFUNCTION(BlueprintCallable)
	bool Select(UCoreSelectableButtonWidget* buttonToSelect, bool performAction);

private:
	UFUNCTION()
	void OnButtonSelectedChanged(UCoreSelectableButtonWidget* selectedButton, bool isSelected);

	UFUNCTION()
	void OnButtonSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintPure)
	bool HasSelection() const;

public:
	UCoreButtonSelector();
};

FORCEINLINE uint32 GetTypeHash(const UCoreButtonSelector) { return 0; }
