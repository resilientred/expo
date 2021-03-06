// Copyright 2015-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <EXFileSystem/EXFileSystem.h>

NS_ASSUME_NONNULL_BEGIN

@interface EXFileSystemManager : NSObject <EXFileSystemScopedModuleDelegate>

- (NSString *)bundleDirectoryForExperienceId:(NSString *)experienceId;
- (NSArray<NSString *> *)bundledAssetsForExperienceId:(NSString *)experienceId;

@end

NS_ASSUME_NONNULL_END

