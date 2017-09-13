//
// Created by Scott Norton on 9/6/17.
//

#ifndef POKEEMERALD_FIELD_PLAYER_AVATAR_H
#define POKEEMERALD_FIELD_PLAYER_AVATAR_H

void ClearPlayerAvatarInfo(void);
void SetPlayerAvatarExtraStateTransition(u8, u8);
u8 GetPlayerAvatarGenderByGraphicsId(u8);
bool8 TestPlayerAvatarFlags(u8);
void PlayerGetDestCoords(s16 *, s16 *);

#endif //POKEEMERALD_FIELD_PLAYER_AVATAR_H
