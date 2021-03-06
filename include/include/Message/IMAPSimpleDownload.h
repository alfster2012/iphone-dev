/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/IMAPDownload.h>

@class MappedData, NSError, NSString;

@interface IMAPSimpleDownload : IMAPDownload
{
    MappedData *_mdata;
    NSString *_section;
    NSError *_error;
    unsigned int _length:32;
    unsigned int _knownLength:1;
    unsigned int _complete:1;
    struct _NSRange _range;
}

- (void)addCommandsToPipeline:(id)fp8 withCache:(id)fp12;	// IMP=0x30bb5d99
- (unsigned long)bytesFetched;	// IMP=0x30bb59d1
- (id)data;	// IMP=0x30bb5f3d
- (void)dealloc;	// IMP=0x30bb5a0d
- (id)error;	// IMP=0x30bb5f9d
- (unsigned long)expectedLength;	// IMP=0x30bb59cd
- (void)handleFetchResult:(id)fp8;	// IMP=0x30bb5a59
- (id)initWithUid:(unsigned long)fp8 section:(id)fp12 estimatedLength:(unsigned long)fp16;	// IMP=0x30bb5915
- (id)initWithUid:(unsigned long)fp8 section:(id)fp12 length:(unsigned long)fp16;	// IMP=0x30bb63f1
- (id)initWithUid:(unsigned long)fp8 section:(id)fp12 range:(struct _NSRange)fp16;	// IMP=0x30bb5971
- (BOOL)isComplete;	// IMP=0x30bb5f35
- (void)processResults;	// IMP=0x30bb5b71
- (id)section;	// IMP=0x30bb59c9
- (void)setError:(id)fp8;	// IMP=0x30bb5fa1

@end

