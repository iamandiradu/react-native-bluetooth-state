/* TODO: update when this is fixed: https://github.com/frostney/react-native-bluetooth-state/issues/11 */
#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

@interface RNBluetoothState : NSObject <RCTBridgeModule>

@end
