/*
 *     Generated by class-dump 3.3.1 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMapTable, NSMutableArray, NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUSampler : NSObject
{
    int _pid;
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    BOOL _recordThreadStates;
    BOOL _taskIs64Bit;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef _symbolicator;
    VMUTaskMemoryCache *_memCache;
    struct sampling_context_t *_samplingContext;
    unsigned int _mainThread;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int *_previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    BOOL _sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    void *_cfi;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    BOOL _shouldOutputSignature;
    BOOL _showDispatchQueueNames;
}

+ (void)initialize;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (id)sampleAllThreadsOfPID:(int)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 withSymbolicator:(id)arg2;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;
- (id)initWithPID:(int)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (void)finalize;
- (void)_makeHighPriority;
- (void)_makeTimeshare;
- (unsigned int)samplingThread;
- (void)parseCFI:(BOOL)arg1;
- (BOOL)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3;
- (void)_fixupStacks:(id)arg1;
- (void)_runSamplingThread;
- (id)sampleAllThreadsOnce;
- (BOOL)start;
- (BOOL)stop;
- (BOOL)waitUntilDone;
- (void)setSamplingInterval:(double)arg1;
- (double)samplingInterval;
- (void)setTimeLimit:(double)arg1;
- (double)timeLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (unsigned int)sampleLimit;
- (void)setRecordThreadStates:(BOOL)arg1;
- (void)setShouldOutputSignature:(BOOL)arg1;
- (BOOL)shouldOutputSignature;
- (id)samples;
- (unsigned int)sampleCount;
- (void)flushData;
- (unsigned int)mainThread;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long *)arg2 returnedDispatchQueueSerialNum:(unsigned long long *)arg3;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(char *)arg2 returnedThreadId:(unsigned long long *)arg3;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)preloadSymbols;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)stopSampling;
- (void)forceStop;
- (id)stopSamplingAndReturnCallNode;
- (void)writeOutput:(id)arg1 append:(BOOL)arg2;

@end

