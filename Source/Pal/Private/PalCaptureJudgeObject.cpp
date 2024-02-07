#include "PalCaptureJudgeObject.h"

APalCaptureJudgeObject::APalCaptureJudgeObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalCaptureJudgeObject::OnSuccessFinish_Implementation() {
}

void APalCaptureJudgeObject::OnFailedFinish_Implementation() {
}

void APalCaptureJudgeObject::OnFailedByTest_Implementation(const APalCharacter* Character, FCaptureResult Result) {
}

void APalCaptureJudgeObject::OnFailedByMP_Implementation(const APalCharacter* Character, FCaptureResult Result) {
}

void APalCaptureJudgeObject::OnCaptureSuccess_Implementation(const APalCharacter* Character, FCaptureResult Result) {
}

void APalCaptureJudgeObject::ChallengeCapture_ToServer_Implementation(APalCharacter* Character, float capturePower) {
}

void APalCaptureJudgeObject::ChallengeCapture(APalCharacter* Character, float capturePower) {
}

void APalCaptureJudgeObject::CaptureResult_ToALL_Implementation(APalCharacter* Character, FCaptureResult Result) {
}


