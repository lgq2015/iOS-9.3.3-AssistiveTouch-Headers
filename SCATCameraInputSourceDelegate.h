/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATCameraInputSourceDelegate <NSObject>
@required
-(void)cameraInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(BOOL)arg3;
-(void)cameraInputSource:(id)arg1 didUpdateAvailability:(BOOL)arg2 withDetail:(unsigned long long)arg3;
-(void)cameraInputSource:(id)arg1 didUpdateState:(CGPoint)arg2;

@end
