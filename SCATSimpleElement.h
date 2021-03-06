/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATElement.h>

@class NSString, NSArray, NSNumber, AXElementGroup;

@interface SCATSimpleElement : NSObject <SCATElement> {

	AXElementGroup* _parentGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                        //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) CGRect scatFrame; 
@property (nonatomic,readonly) CGPoint scatCenterPoint; 
@property (nonatomic,readonly) CGPathRef scatPath; 
@property (nonatomic,readonly) BOOL scatPathIsInSceneReferenceSpace; 
@property (nonatomic,readonly) unsigned long long scatTraits; 
@property (nonatomic,readonly) BOOL scatIsValid; 
@property (nonatomic,readonly) BOOL scatIsAXElement; 
@property (nonatomic,readonly) BOOL scatIndicatesOwnFocus; 
@property (nonatomic,readonly) BOOL scatShouldActivateDirectly; 
@property (nonatomic,readonly) int scatActivateBehavior; 
@property (nonatomic,readonly) NSString * scatSpeakableDescription; 
@property (nonatomic,readonly) BOOL scatIsKeyboardKey; 
@property (nonatomic,readonly) BOOL scatCanShowAlternateKeys; 
@property (nonatomic,readonly) NSArray * scatAlternateKeys; 
@property (nonatomic,readonly) CGRect scatTextCursorFrame; 
@property (nonatomic,readonly) NSNumber * scatOverrideCursorTheme; 
@property (assign,nonatomic) BOOL scatAssistiveTechFocused; 
@property (nonatomic,readonly) NSArray * scatCustomActions; 
-(BOOL)scatIndicatesOwnFocus;
-(BOOL)scatSupportsAction:(int)arg1 ;
-(NSString *)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(BOOL)scatPerformAction:(int)arg1 ;
-(NSNumber *)scatOverrideCursorTheme;
-(BOOL)scatIsAXElement;
-(CGRect)scatFrame;
-(BOOL)scatIsKeyboardKey;
-(NSArray *)scatAlternateKeys;
-(CGPoint)scatCenterPoint;
-(void)setScatAssistiveTechFocused:(BOOL)arg1 ;
-(unsigned long long)scatTraits;
-(int)scatActivateBehavior;
-(id)scrollableElement;
-(NSArray *)scatCustomActions;
-(BOOL)scatCanShowAlternateKeys;
-(id)scatSupportedGestures;
-(BOOL)scatPerformAction:(int)arg1 withValue:(id)arg2 ;
-(BOOL)scatCanScrollInAtLeastOneDirection;
-(BOOL)scatShouldActivateDirectly;
-(BOOL)scatIsValid;
-(BOOL)scatPathIsInSceneReferenceSpace;
-(CGRect)scatTextCursorFrame;
-(BOOL)scatAssistiveTechFocused;
-(void)scatScrollToVisible;
-(CGRect)frame;
-(BOOL)isGroup;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(AXElementGroup *)parentGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
@end

