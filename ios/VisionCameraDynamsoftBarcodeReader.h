
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNVisionCameraDynamsoftBarcodeReaderSpec.h"

@interface VisionCameraDynamsoftBarcodeReader : NSObject <NativeVisionCameraDynamsoftBarcodeReaderSpec>
#else
#import <React/RCTBridgeModule.h>

@interface VisionCameraDynamsoftBarcodeReader : NSObject <RCTBridgeModule>
#endif

@end
