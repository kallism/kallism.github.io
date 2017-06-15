//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, USSession;

@interface USSessionManager : NSObject
{
    id <USAnalyticsInterface> _analytics;
    USSession *_currentSession;
    id <UpsightDataStoreInterface> _dataStore;
    double _timeToNewSession;
    NSDictionary *_stateTable;
    NSString *_currentState;
    NSNumber *_messageID;
    NSNumber *_campaignID;
}

+ (void)startWithMessageID:(id)arg1 campaignID:(id)arg2;
+ (id)defaultConfiguration;
+ (id)sharedSessionManager;
@property(retain, nonatomic) NSNumber *campaignID; // @synthesize campaignID=_campaignID;
@property(retain, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) NSString *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSDictionary *stateTable; // @synthesize stateTable=_stateTable;
@property(nonatomic) double timeToNewSession; // @synthesize timeToNewSession=_timeToNewSession;
@property(readonly, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
@property(retain) USSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)saveSession:(id)arg1;
- (void)setMessageID:(id)arg1 campaignID:(id)arg2;
@property(readonly, nonatomic) id <USAnalyticsInterface> analytics; // @synthesize analytics=_analytics;
@property(readonly, copy, nonatomic) USSession *session;
- (void)applyConfiguration:(id)arg1;
- (void)sessionManagerConfigurationDidUpdate:(id)arg1 action:(unsigned long long)arg2;
- (void)checkForConfiguration;
- (id)exitPaused;
- (void)executePaused;
- (void)enterPaused;
- (id)exitResumed;
- (void)executeResumed;
- (void)enterResumed;
- (id)exitStarted;
- (void)executeStarted;
- (void)enterStarted;
- (id)exitLaunched;
- (void)executeLaunched;
- (void)transition;
- (void)startWithMessageID:(id)arg1 campaignID:(id)arg2;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1;
- (id)init;

@end

