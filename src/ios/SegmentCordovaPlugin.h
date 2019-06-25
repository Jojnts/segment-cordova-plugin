#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Analytics/SEGAnalytics.h>

@interface SegmentCordovaPlugin : CDVPlugin {
  // Member variables go here.
@private
  Boolean isInitialized;
}

- (void) startWithConfiguration:(CDVInvokedUrlCommand*)command;
- (void) identify: (CDVInvokedUrlCommand*)command;
- (void) track: (CDVInvokedUrlCommand*)command;
- (void) screen: (CDVInvokedUrlCommand*)command;
- (void) group: (CDVInvokedUrlCommand*)command;
- (void) alias: (CDVInvokedUrlCommand*)command;
- (void) getAnonymousId: (CDVInvokedUrlCommand*)command;
- (void) reset: (CDVInvokedUrlCommand*)command;
- (void) isInitialized: (CDVInvokedUrlCommand*)command;

@end
