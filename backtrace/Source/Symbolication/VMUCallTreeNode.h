/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface VMUCallTreeNode : NSObject
{
    unsigned int flags;
    NSString *name;
    unsigned long long address;
    NSArray *sortedChildrenWithPseudoNode;
    unsigned int numBytes;
    unsigned int count;
    union {
        NSString *thePseudoName;
        VMUCallTreeNode *theChild;
        VMUCallTreeNode **theChildren;
    } un;
    VMUCallTreeNode *parent;
}

+ (id)makeFakeRootForNode:(id)arg1;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2;
+ (id)rootForTraceData:(id)arg1;
+ (id)rootForSampleFile:(struct __sFILE *)arg1;
+ (void)compareChildrenOf:(id)arg1 toChildrenOf:(id)arg2 storeDiffIn:(id)arg3;
+ (id)rootForCompare:(id)arg1 to:(id)arg2;
- (unsigned int)count;
- (unsigned int)numBytes;
- (id)name;
- (unsigned long long)address;
- (id)parent;
- (id)browserName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isPseudo;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 compareSymbolNames:(BOOL)arg3;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (void)dealloc;
- (void)addStackEntry:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 numBytes:(unsigned int)arg4 options:(unsigned long long)arg5 uniqueStrings:(id)arg6 addressToSymbolNameMap:(id)arg7 threadPortToNameMap:(id)arg8 dispatchQueueSerialNumToNameMap:(id)arg9;
- (void)addTraceEvent:(id)arg1 forTraceData:(id)arg2;
- (char *)addSubTreeFromFile:(struct __sFILE *)arg1 withIndent:(int)arg2 withLine:(char *)arg3 withLen:(unsigned long long *)arg4;
- (long long)compare:(id)arg1;
- (long long)comparePuttingMainThreadFirst:(id)arg1;
- (long long)compareNames:(id)arg1;
- (unsigned int)sumOfChildrenCounts;
- (id)pseudoName;
- (id)pseudoNodeTopOfStackChild;
- (id)filterOutWaiting;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)invertedNode;
- (id)prune:(unsigned int)arg1;
- (id)nextNode;
- (id)prevNode;
- (id)findNodeMatching:(id)arg1 searchForward:(BOOL)arg2 ignoreCase:(BOOL)arg3 wholeWords:(BOOL)arg4;
- (void)setNameToCount:(id)arg1;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenByNameWithPseudoNode;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)largestTopOfStackPath;

@end

