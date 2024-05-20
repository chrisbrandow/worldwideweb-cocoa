
/* Generated by Interface Builder */

#import <Foundation/Foundation.h>
#import "Anchor.h"
#import "HyperAccess.h"

@interface TextToy:NSObject
{
    id	SearchWindow;
    
    Anchor 	*StartAnchor;
    Anchor	*EndAnchor;
    
    NSMutableArray * accesses;
}

- setSearchWindow:anObject;

#ifdef JUNK
- Do_getStartLength:sender;
- Do_getSel:sender;
- Do_setBackgroundGray:sender;
#endif

/*	Link handling:
*/
- linkToMark: sender;
- linkToNew: sender;
- unlink:sender;
- markSelected: sender;
- markAll: sender;
- followLink: sender;
- dump: sender;

//	Access manager function:

- registerAccess:(HyperAccess *)access;

@end
