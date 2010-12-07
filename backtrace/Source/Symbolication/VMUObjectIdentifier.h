/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSMutableSet, VMURangeArray;

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    NSMapTable *_isaToClassInfo;
    NSMapTable *_cfTypeIDtoClassInfo;
    NSHashTable *_classAddresses;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    NSMutableSet *_objcRuntimeMallocBlocks;
    unsigned long long _cfTypeCount;
    unsigned long long _objcClassCount;
    unsigned long long _cPlusPlusClassCount;
    NSHashTable *_invalidPointers;
    VMURangeArray *_targetProcessVMranges;
    int peeksAtRemoteObjectIsa;
}

- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(id)arg2;
- (void)dealloc;
- (unsigned long long)CFTypeCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)CPlusPlusClassCount;
- (id)objcRuntimeMallocBlocksHash;
- (id)objcRuntimeMallocBlocks;
- (id)readClassNameString:(unsigned long long)arg1;
- (BOOL)isValidRemotePointer:(unsigned long long)arg1;
- (id)classInfoForIsaPointer:(unsigned long long)arg1;
- (id)classInfoForCFType:(struct __CFRuntimeBase *)arg1;
- (id)classInfoForObject:(unsigned long long)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;
- (void)findTargetProcessVMranges;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg1;

@end
