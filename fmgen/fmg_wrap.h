#ifndef _WIN68_OPM_FMGEN_H
#define _WIN68_OPM_FMGEN_H

#include <stdint.h>

int OPM_Init(int clock);
void OPM_Cleanup(void);
void OPM_Reset(void);
void OPM_Update(int16_t *buffer, int length, uint8_t *pbsp, uint8_t *pbep);
void FASTCALL OPM_Write(DWORD r, uint8_t v);
uint8_t FASTCALL OPM_Read(WORD a);
void FASTCALL OPM_Timer(DWORD step);
void OPM_SetVolume(uint8_t vol);

int M288_Init(int clock, const char* path);
void M288_Cleanup(void);
void M288_Reset(void);
void M288_Update(int16_t *buffer, int length);
void FASTCALL M288_Write(DWORD r, uint8_t v);
uint8_t FASTCALL M288_Read(WORD a);
void FASTCALL M288_Timer(DWORD step);
void M288_SetVolume(uint8_t vol);
void M288_RomeoOut(unsigned int delay);

#endif /* _WIN68_OPM_FMGEN_H */
