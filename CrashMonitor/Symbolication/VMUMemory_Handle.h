/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Symbolication/VMUMemory_Base.h>

#import "VMUMemory-Protocol.h"

@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory>
{
    id <VMUMemory> _parent;
    char *_data;
    struct _VMURange _addressRange;
    VMUArchitecture *_architecture;
}

- (id)initWithParent:(id)arg1 addressRange:(struct _VMURange)arg2 architecture:(id)arg3 data:(char *)arg4;
- (struct _VMURange)addressRange;
- (id)architecture;
- (BOOL)isContiguous;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (id)memoryFromSubRange:(struct _VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)view;
- (id)swappedView;
- (id)description;
- (void)dealloc;

@end

