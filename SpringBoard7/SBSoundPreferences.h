/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface SBSoundPreferences : NSObject
+(void)userDefaultsDidChanged:(id)arg1 ;
+(BOOL)playLockSound;
+(BOOL)vibrateWhenSilent;
+(BOOL)vibrateWhenRinging;
+(void)_loadDefaultsIfNeeded;
+(id)ringtoneIdentifier;
+(BOOL)shouldVibrateForCurrentRingerStateWithAudioCategory:(id)arg1 ;
+(id)calendarAlarmPath;
+(id)ringtonePath;
+(id)vibratePattern;
+(BOOL)shouldVibrateForCurrentRingerState;
@end

