#ifndef __java_h
#define __java_h

#include <bass.h>

#include "input_descriptor.h"

const char *get_sdcarddir();
bool wifiConnected();
void logString(const char *s);

void init_play_services();

int amazon_initialized();

void do_milestone(int num, bool visual);
void show_achievements();

const char *get_android_language();

#ifdef ADMOB
void showAd();
bool connected_to_internet();
#endif

#if defined OUYA
int isPurchased();
void queryPurchased();
void doIAP();
int checkPurchased();
#endif

extern bool music_replayed;

#endif
