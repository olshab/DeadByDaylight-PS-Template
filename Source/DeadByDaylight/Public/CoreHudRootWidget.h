#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "UObject/ScriptInterface.h"
#include "HUDWidgetsFadeOutCompleted.h"
#include "CoreHudRootWidget.generated.h"

class UOverlay;
class UCurveFloat;
class UScaleBox;
class ICoreBaseViewInterface;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UCoreHudRootWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Export)
	UOverlay* WidgetContainer;

	UPROPERTY(BlueprintReadWrite, Export)
	UOverlay* OuterContainer;

	UPROPERTY(BlueprintReadWrite, Export)
	UOverlay* SpectateContainer;

	UPROPERTY(BlueprintReadWrite, Export)
	UScaleBox* ScaleHud;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float UnfocusedOpacity;

	UPROPERTY(EditAnywhere)
	UCurveFloat* Test4kDpiScalingCurve;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> Test4kDpiCurveClass;

	UPROPERTY(Transient, Export)
	UUserWidget* Test4kDpiCurveWidget;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> EndGameCollapseBarWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> EquippedItemWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> EquippedPowerWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> ExternalEffectsWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> HudAlertWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> InteractionProgressWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> InteractionPromptsContainerWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> ItemInteractionWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> LeaningArrowsWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MatchResultWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> OfferingInteractionWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> PerksContainerWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> PingStatusWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> PlayerStatusesWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> ScreenIndicatorWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> SpectateBarWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> StartSequenceWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> StatusEffectWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> TutorialMysteryNoteWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> TutorialObjectivesWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> TutorialPopupWidgetClass;

	UPROPERTY(Transient)
	TArray<TScriptInterface<ICoreBaseViewInterface>> _coreBaseViewInterfaces;

	UPROPERTY()
	FHUDWidgetsFadeOutCompleted HUDWidgetsFadeOutCompletedDelegate;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetWidgetsVisibility(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSpectateVisibility(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FadeOutWidgets();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void FadeInWidgets();

	UFUNCTION(BlueprintImplementableEvent)
	void ApplyConstrainedAspectRatio(bool isConstrained, float aspectRatio);

public:
	UCoreHudRootWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudRootWidget) { return 0; }
