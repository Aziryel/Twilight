
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TwilightCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class TWILIGHT_API ATwilightCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATwilightCharacter();

protected:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;
	
	virtual void BeginPlay() override;

	void MoveForward(float Value);

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
