//
// Copyright © 2020 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "UTMConfiguration.h"

typedef NS_ENUM(NSUInteger, UTMScalerType) {
    UTMScalerTypeLinear,
    UTMScalerTypeBicubic,
    UTMScalerTypeNearest,
    UTMScalerTypeMax
};

NS_ASSUME_NONNULL_BEGIN

@interface UTMConfiguration (Display)

@property (nonatomic, assign) BOOL displayConsoleOnly;
@property (nonatomic, assign) BOOL displayFitScreen;
@property (nonatomic, assign) BOOL displayRetina;
@property (nonatomic, nullable, copy) NSString *displayUpscaler;
@property (nonatomic, readonly) UTMScalerType displayUpscalerValue;
@property (nonatomic, nullable, copy) NSString *displayDownscaler;
@property (nonatomic, readonly) UTMScalerType displayDownscalerValue;
@property (nonatomic, nullable, copy) NSString *consoleTheme;
@property (nonatomic, nullable, copy) NSString *consoleFont;
@property (nonatomic, nullable, copy) NSNumber *consoleFontSize;
@property (nonatomic, assign) BOOL consoleCursorBlink;

- (void)migrateDisplayConfigurationIfNecessary;

@end

NS_ASSUME_NONNULL_END