#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HudWidget.generated.h"

UCLASS()
class VGP221_GRAPHICSPROG2_API UHudWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual TSharedRef<SWidget> RebuildWidget() override;

public:
    void UpdateTimer(float Time);
    void UpdateHits(int32 Count);

private:
    TSharedPtr<class STextBlock> TimerTextBlock;
    TSharedPtr<class STextBlock> HitCounterTextBlock;
};