/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManagerViewController.h>
#import <assistivetouchd/SCATMenuObserver.h>

@class SCATMenu, SCATPointPicker, NSString, SCATPointPickerView;

@interface SCATPointPickerViewController : SCATElementManagerViewController <SCATMenuObserver> {

	SCATMenu* _menu;

}

@property (nonatomic,retain) SCATMenu * menu;                                      //@synthesize menu=_menu - In the implementation block
@property (nonatomic,readonly) SCATPointPicker * pointPicker; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,readonly) SCATPointPickerView * pointPickerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithElementManager:(id)arg1 menu:(id)arg2 ;
-(SCATPointPicker *)pointPicker;
-(void)menuWillAppear:(id)arg1 ;
-(void)menuWillDisappear:(id)arg1 ;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(long long)pickerType;
-(SCATPointPickerView *)pointPickerView;
-(Class)classForPointPickerView;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(SCATMenu *)menu;
-(void)setMenu:(SCATMenu *)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
@end

