#import <Cordova/CDVPlugin.h>
#import "ePOS2.h"

@interface MyCordovaPlugin : CDVPlugin {
    Epos2Printer *printer;
    int printerSeries;
    int lang;
}

@property (nonatomic, strong) NSString* discoverCallbackId;
@property (nonatomic, strong) NSString* printCallbackId;

// The hooks for our plugin commands
- (void)startDiscover:(CDVInvokedUrlCommand *)command;
- (void)stopDiscover:(CDVInvokedUrlCommand *)command;
- (void)connectPrinter:(CDVInvokedUrlCommand *)command;
- (void)disconnectPrinter:(CDVInvokedUrlCommand *)command;
- (void)print:(CDVInvokedUrlCommand *)command;

@end
