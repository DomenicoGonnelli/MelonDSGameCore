//
//  MelonDSGameCore.h
//  MelonDSDeltaCore
//
//  Created by Riley Testut on 10/15/19.
//  Copyright © 2019 Riley Testut. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for MelonDSGameCore.
FOUNDATION_EXPORT double MelonDSDeltaCoreVersionNumber;

//! Project version string for MelonDSGameCore.
FOUNDATION_EXPORT const unsigned char MelonDSDeltaCoreVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import MelonDSGameCore/PublicHeader.h>
#if !STATIC_LIBRARY
#import MelonDSGameCore/MelonDSEmulatorBridge.h>
#import MelonDSGameCore/MelonDSTypes.h>
#endif
