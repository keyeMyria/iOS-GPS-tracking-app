//
//  SKTMessageAction.h
//  SupportKit
//
//  Copyright (c) 2015 Radialpoint. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  @abstract An action associated to a particular SKTMessage.
 *
 *  Actions are rendered as buttons in the SupportKit conversation screen.
 *
 *  @see SKTMessage
 */
@interface SKTMessageAction : NSObject

/**
 *  @abstract The text to display as a descriptor for the action.
 */
@property(readonly) NSString* text;

/**
 *  @abstract The URI to navigate to if the user interacts with the action.
 */
@property(readonly) NSURL* uri;

@end
