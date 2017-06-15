//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface USUserAttributes : NSObject
{
    NSDictionary *_bundleUserAttributes;
    NSMutableDictionary *_userAttributes;
}

+ (id)dictionaryRepresentation;
+ (_Bool)boolForKey:(id)arg1;
+ (void)setBool:(_Bool)arg1 forKey:(id)arg2;
+ (id)dateForKey:(id)arg1;
+ (void)setDate:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (id)numberForKey:(id)arg1;
+ (void)setNumber:(id)arg1 forKey:(id)arg2;
+ (id)nilDate;
+ (void)clearUserAttributes;
+ (id)sharedUserAttributes;
@property(retain, nonatomic) NSMutableDictionary *userAttributes; // @synthesize userAttributes=_userAttributes;
- (void).cxx_destruct;
- (_Bool)isValidValue:(id)arg1 forKey:(id)arg2 expectedValueClass:(Class)arg3;
- (_Bool)isValidKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
@property(readonly) NSDictionary *bundleUserAttributes; // @synthesize bundleUserAttributes=_bundleUserAttributes;

@end

