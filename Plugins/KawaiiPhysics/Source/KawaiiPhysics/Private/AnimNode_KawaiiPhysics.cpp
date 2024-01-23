#include "AnimNode_KawaiiPhysics.h"

FAnimNode_KawaiiPhysics::FAnimNode_KawaiiPhysics() {
    this->TargetFrameRate = 0;
    this->OverrideTargetFramerate = false;
    this->DampingCurve = NULL;
    this->WorldDampingLocationCurve = NULL;
    this->WorldDampingRotationCurve = NULL;
    this->StiffnessCurve = NULL;
    this->RadiusCurve = NULL;
    this->LimitAngleCurve = NULL;
    this->bUpdatePhysicsSettingsInGame = false;
    this->DummyBoneLength = 0.00f;
    this->BoneForwardAxis = EBoneForwardAxis::X_Positive;
    this->PlanarConstraint = EPlanarConstraint::None;
    this->ResetBoneTransformWhenBoneNotFound = false;
    this->LimitsDataAsset = NULL;
    this->TeleportDistanceThreshold = 0.00f;
    this->TeleportRotationThreshold = 0.00f;
    this->bEnableWind = false;
    this->WindScale = 0.00f;
    this->bAllowWorldCollision = false;
    this->bOverrideCollisionParams = false;
    this->bIgnoreSelfComponent = false;
    this->TotalBoneLength = 0.00f;
    this->bInitPhysicsSettings = false;
}

