#include "PalCharacterTeamMissionMasterData.h"

FPalCharacterTeamMissionMasterData::FPalCharacterTeamMissionMasterData() {
    this->TextureType = EPalMapObjectCharacterTeamMissionIconTextureType::None;
    this->Difficulty = EPalCharacterTeamMissionDifficulty::Easy;
    this->RequiredSeconds = 0;
    this->RecommendedStrength = 0;
    this->RequiredElementType = EPalElementType::None;
    this->RequiredElementNum = 0;
    this->MaxCharacterNum = 0;
}

