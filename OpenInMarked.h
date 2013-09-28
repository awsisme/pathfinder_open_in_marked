//  Created by Ray Kola
//  Based on Open in Textmate by orta therox on 06/09/2010. Copyright 2010 wgrids. All rights reserved.
//

#import <Cocoa/Cocoa.h>

  // if XCode warns that it can't find this file, you need to setup your 
  // header_search_paths to the Pathfinder SDK 
  // HEADER_SEARCH_PATHS = "../../CocoatechPluginProtocols"
  // by default it will look for the folder in your downloads

#import "NTMenuPluginProtocol.h"


@interface OpenInMarked : NSObject <NTMenuPluginProtocol> {
  id<NTPathFinderPluginHostProtocol> host;

}
- (NSMenuItem*)contextualMenuItem;
- (NSMenuItem*)menuItem;

@property (retain) id host;

@end
