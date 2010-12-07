/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    BOOL summarized;
    BOOL recalculate_pages_resident;
    unsigned char external_pager;
    unsigned char share_mode;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned char user_tag;
    unsigned long long object_id;
    unsigned int nesting_depth;
    BOOL is_submap;
    unsigned long long mallocBlockCount;
}

- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (id)description;
- (unsigned int)protection;
- (id)type;
- (BOOL)isSubmap;
- (BOOL)isEqual:(id)arg1;
- (id)breakAtLength:(unsigned long long)arg1;
- (void)dealloc;

@end

