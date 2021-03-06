//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIViewController, USActionMap;

@protocol USViewController <NSObject>
@property(retain, nonatomic) NSString *postPresentationTrigger;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController;
@property __weak id <USViewControllerDelegate> delegate;
@property(copy, nonatomic) NSArray *scopes;
@property(readonly, nonatomic) USActionMap *actionMap;
@property(readonly, nonatomic) double timestamp;
@property(readonly, nonatomic) double loadingTimeout;
- (void)presentCloseButtonWithDelay:(double)arg1;
- (NSDictionary *)viewDataForKey:(NSString *)arg1;
- (void)dismissControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewControllerWithRoot:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)buildContent:(id <USContentUnit>)arg1 actionMap:(USActionMap *)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
@end

