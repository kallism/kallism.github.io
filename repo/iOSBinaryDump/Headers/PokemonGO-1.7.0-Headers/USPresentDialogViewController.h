//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USViewController.h"

@class NSArray, NSString, UIAlertController, UIViewController, USActionMap;

@interface USPresentDialogViewController : NSObject <USViewController>
{
    double _loadingTimeout;
    double _timestamp;
    USActionMap *_actionMap;
    NSArray *_scopes;
    id <USViewControllerDelegate> _delegate;
    NSString *_postPresentationTrigger;
    UIAlertController *_alertController;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) NSString *postPresentationTrigger; // @synthesize postPresentationTrigger=_postPresentationTrigger;
@property __weak id <USViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(retain, nonatomic) USActionMap *actionMap; // @synthesize actionMap=_actionMap;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double loadingTimeout; // @synthesize loadingTimeout=_loadingTimeout;
- (void).cxx_destruct;
- (void)presentCloseButtonWithDelay:(double)arg1;
- (id)viewDataForKey:(id)arg1;
- (void)dismissControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewControllerWithRoot:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildContent:(id)arg1 actionMap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

