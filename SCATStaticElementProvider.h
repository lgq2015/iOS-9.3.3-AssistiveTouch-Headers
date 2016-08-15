/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>
#import <assistivetouchd/SCATElementProvider.h>

@class NSArray, NSString;

@interface SCATStaticElementProvider : NSArray <SCATElementProvider> {

	NSArray* _elements;

}

@property (nonatomic,retain) NSArray * elements;                    //@synthesize elements=_elements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL providesElements; 
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)initWithElements:(id)arg1 ;
-(BOOL)providesElements;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(BOOL)containsElement:(id)arg1 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end
