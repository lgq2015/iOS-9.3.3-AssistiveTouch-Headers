/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATCursorControllerDelegate.h>

@protocol SCATDisplaySource, SCATCursorManagerDelegate;
@class SCATCursorController, NSString;

@interface SCATCursorManager : NSObject <SCATCursorControllerDelegate> {

	BOOL _cursorUIHidden;
	id<SCATDisplaySource> _displaySourceDelegate;
	id<SCATCursorManagerDelegate> _delegate;
	SCATCursorController* _focusedItemCursorController;
	SCATCursorController* _containingGroupCursorController;
	SCATCursorController* _menuItemCursorController;

}

@property (assign,nonatomic) id<SCATCursorManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCursorUIHidden,nonatomic) BOOL cursorUIHidden;                         //@synthesize cursorUIHidden=_cursorUIHidden - In the implementation block
@property (assign,nonatomic) id<SCATDisplaySource> displaySourceDelegate;                         //@synthesize displaySourceDelegate=_displaySourceDelegate - In the implementation block
@property (nonatomic,retain) SCATCursorController * focusedItemCursorController;                  //@synthesize focusedItemCursorController=_focusedItemCursorController - In the implementation block
@property (nonatomic,retain) SCATCursorController * containingGroupCursorController;              //@synthesize containingGroupCursorController=_containingGroupCursorController - In the implementation block
@property (nonatomic,retain) SCATCursorController * menuItemCursorController;                     //@synthesize menuItemCursorController=_menuItemCursorController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateMainCursorWithElement:(id)arg1 ;
-(id)initWithDisplaySource:(id)arg1 ;
-(void)setDisplaySourceDelegate:(id<SCATDisplaySource>)arg1 ;
-(void)setFocusedItemCursorController:(SCATCursorController *)arg1 ;
-(void)setContainingGroupCursorController:(SCATCursorController *)arg1 ;
-(void)setMenuItemCursorController:(SCATCursorController *)arg1 ;
-(SCATCursorController *)focusedItemCursorController;
-(SCATCursorController *)containingGroupCursorController;
-(SCATCursorController *)menuItemCursorController;
-(BOOL)isCursorUIHidden;
-(id<SCATDisplaySource>)displaySourceDelegate;
-(void)_theme:(int*)arg1 level:(int*)arg2 forFocusContext:(id)arg3 cursor:(id)arg4 options:(int)arg5 ;
-(void)_path:(id*)arg1 frame:(CGRect*)arg2 isSimpleRect:(BOOL*)arg3 forFocusContext:(id)arg4 cursor:(id)arg5 ;
-(void)_updateZoom:(CGRect)arg1 withElement:(id)arg2 ;
-(void)_reorderLayersIfNeeded;
-(id)cursors;
-(void)_updateCursor:(id)arg1 withFocusContext:(id)arg2 shouldAnimate:(BOOL)arg3 options:(int)arg4 ;
-(void)setCursorUIHidden:(BOOL)arg1 ;
-(id)displayContextForCursor:(id)arg1 ;
-(id)_cursorPathAndFrame:(CGRect*)arg1 forElementFrame:(CGRect)arg2 inDisplayContext:(id)arg3 ;
-(void)updateWithFocusContext:(id)arg1 animated:(BOOL)arg2 options:(int)arg3 ;
-(void)beginSelectTimeoutAnimation:(double)arg1 ;
-(void)cancelSelectTimeoutAnimationIfNeeded;
-(void)hideCursor:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<SCATCursorManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SCATCursorManagerDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)styleProvider;
@end
